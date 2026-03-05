#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> applicant(n), apartment(m);

    for(int i = 0; i < n; i++)
        cin >> applicant[i];

    for(int i = 0; i < m; i++)
        cin >> apartment[i];

    sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());

    long long i = 0, j = 0, count = 0;

    while(i < n && j < m) {
        if(abs(applicant[i] - apartment[j]) <= k) {
            count++;
            i++;
            j++;
        }
        else if(apartment[j] < applicant[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }

    cout << count << "\n";
}
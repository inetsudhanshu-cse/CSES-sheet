#include <iostream>
#include <iomanip>
using namespace std;
double f(double x, double y) {
    return x + y; 
}
double euler(double x0, double y0, double h, double x) {
    double y = y0; 
    while (x0 < x) {
        y += h * f(x0, y); 
        x0 += h;           
    }
    return y;
}
int main() {
    double x0 = 0;     
    double y0 = 1;    
    double h = 0.1;    
    double x = 0.2;     
    cout << "Given ODE: dy/dx = x + y\n";
    cout << "Initial condition: y(0) = 1\n";
    cout << "Step size: h = " << h << "\n";
    cout << "Find y at x = " << x << "\n\n";
    double result = euler(x0, y0, h, x);
    cout << fixed << setprecision(6);
    cout << "The value of y at x = " << x << " is " << result << endl;
    return 0;
}

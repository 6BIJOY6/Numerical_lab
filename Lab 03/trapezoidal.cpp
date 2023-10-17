#include <bits/stdc++.h>
using namespace std;

    double f(double x) {
        return  log10(x);
    }


double trapezoidal(double a, double b, int n) {


    double h = (b - a) / n;

    double sum =0.5* (f(a) + f(b));
    for (int i = 1; i < n; i++) {
    sum += f(a + i * h);
    }
  return sum * h;
}



int main() {

double a = 1;
double b = 5;
int n = 10;


double area = trapezoidal(a, b, n);


cout << "The approximate area under the curve is: " << area << endl;

return 0;
}

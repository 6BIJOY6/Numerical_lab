#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return exp(sin(x));
}
double simponse_1_3(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) 
{
    if (i % 2 == 0) {
      sum += 2 * f(a + i * h);
    } else {
      sum += 4 * f(a + i * h);
    }
}
  return sum * h / 3;
}
int main()
{
    double a=0;
    double b=90;
    int n=10;
    double area= simponse_1_3(a,b,n);

    cout << "The approximate area under the curve is: " << area << endl;
}
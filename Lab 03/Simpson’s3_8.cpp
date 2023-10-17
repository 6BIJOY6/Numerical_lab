#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x / (1 + x * x);
}
double Simpson3_8(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i += 3) {
      if(i%3==0)
      {
        sum += 2 * f(a + i * h);
      }
      else
       sum += 3 * f(a + i * h);
    }
    
  return sum * h * 3 / 8;
}
int main()
{
    double a=1;
    double b=2;
    int n=12;
    double area = Simpson3_8(a,b,n);
    
    cout << "The approximate area under the curve is: " << area << endl;

}


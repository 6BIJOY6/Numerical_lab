#include<bits/stdc++.h>
using namespace std;
#define E 0.0001;
#define f(x) (pow(x,3)-(5*pow(x,2))-29)
#define ff(x) ((3*pow(x,2))-6)
int main()
{
    double x0=4;
    double x1=2;
    
do{
    double f_x0= f(x0);
    double f_x1 = f(x1);
    double x2= (x1-(((x1-x0)*f_x1)/(f_x1-f_x0)));
    if(fabs(x2-x1)<0.0001)
    {
        cout<<"the root is "<<x2<<endl;
        break;
    }
    else
    x0=x1;
    x1=x2;

}while (1);


}
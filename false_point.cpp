#include<bits/stdc++.h>
using namespace std;
#define f(x) (pow(x,3)-x+2)


int main()
{
    double x0,x1,x2;
    x0=0;
    x1=-2;
    while(1){
        double  f_x0=f(x0);
    double f_x1=f(x1);
    x2= x0-((f_x0)*(x1-x0)/(f_x1-f_x0));
    if(fabs(x2-x1)>0.0001)
    {
        x0=x1;
        f_x0=f_x1;
        x1=x2;
        f_x1=f(x2);

    }
    else
    {
    break;
    }
    


    }
    cout<<x2<<endl;

}
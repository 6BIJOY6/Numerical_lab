#include<bits/stdc++.h>
using namespace std;
#define E 0.0001;
#define f(x) ((x*x*x*x*x)+(3*(x*x))-10)
#define g(x) (sqrt(10/(pow(x,3.0)+3)))
int main()
{
    double x0,x1;
    x0=0.5;
    while(1){
        
       x1= g(x0);
       double error=x1-x0;
       if(fabs(error)<0.0001)
       {
        cout<<"the root is "<<x1<<endl;
       break;
       }
       else
       x0=x1;

    }

}
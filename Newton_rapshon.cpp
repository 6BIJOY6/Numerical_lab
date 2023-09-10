#include<bits/stdc++.h>
using namespace std;
#define E 0.0001;
#define f(x) (pow(x,3)-6*x+4)
#define ff(x) ((3*pow(x,2))-6)
int main()
{
    double x0,x1;
    x0=0.5;
do{
    double ff_0=ff(x0);
    double f_0=f(x0);
    x1=(x0-(f_0/ff_0));
    if(fabs(x1-x0)<0.001)
    {
        cout<<"the root is "<<x1<<endl;
        break;
    }
    else
    x0=x1;

}while (1);


}
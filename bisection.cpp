#include<bits/stdc++.h>
using namespace std;
#define fun(x)(pow(x,3)+9*x+1)
void bisection(double a, double b)
{
if((fun(a)*fun(b))>0){
cout<<"it is not possible for these value"<<endl;
}
double c = a;
while((b-a)>=0.001)
{
    cout<<"bijoy";
c=(a+b)/2;
if(fun(c)==0.0)
break;
if(fun(c)* fun(a)>0)
a=c;
else
b=c;
}
cout<<"the root is "<<c;
}
int main()
{
double a =0, b = 1;
bisection(a,b);
}
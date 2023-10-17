#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x =0.0;
    double y=0.0;
    double z=0.0;


    double e =0.0001;
    int i=1;
    while(i)
    {
        double x_n=(12.0 - y - z) / 10.0;
        double y_n=(13.0 - 2.0 * x_n - z) / 10.0;
        double z_n= (14.0 - 2.0 * x_n - 2.0 * y_n) / 10.0;
        double x_d= fabs(x_n-x);
        double y_d= fabs(y_n-y);
        double z_d= fabs(z_n-z);

        x=x_n;
        y=y_n;
        z=z_n;
        i++;
        if(x_d<e && y_d<e && z_d<e)
        {
            break;
        }
        else
        cout<<"iteration: "<<i<<" : no result"<<endl;
        

    }
    cout << "Solution:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
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
        double x_n=(95.0 - 11.0 * y + 4.0 * z) / 83.0;
        double y_n=(71.0 - 3.0 * x - 29.0 * z) / 8.0;
        double z_n= (104.0 - 7.0 * x - 52.0 * y) / 13.0;
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
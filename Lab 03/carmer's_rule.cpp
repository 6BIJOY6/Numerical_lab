#include<bits/stdc++.h>
using namespace std;

double determinant(double a[3][3])
{
    return a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-
    a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+
    a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
}

int main()
{
    double a[3][3]={
        {27,6,-1},
        {6,15,2},
        {1,1,54}
    };
    double b[3]={85,72,110};
    double x[3]={0};

    double d= determinant(a);
    
    if(d==0)
    {
        cout<<"it is not possible "<<endl;
        return 1;
    }
    
    double ax[3][3]={
        {b[0],6,-1},
        {b[1],15,2},
        {b[2],1,54}
    };
    double ay[3][3]={
        {27,b[0],-1},
        {6,b[1],2},
        {1,b[2],54}
    };
    double az[3][3]={
        {27,6,b[0]},
        {6,15,b[1]},
        {1,1,b[2]}
    };



    x[0]= determinant(ax)/d;
    x[1]= determinant(ay)/d;
    x[2]= determinant(az)/d;



    cout << "Solution:" << endl;
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;

}
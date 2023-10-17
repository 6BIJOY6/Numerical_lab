#include<bits/stdc++.h>
using namespace std;
double a[3][3]={
        {1,1,1},
        {1,2,3},
        {1,3,4}
    };
    double b[3]={1,6,6};
    double x[3]={0};
    double a_inv[3][3];
double determinant()
{
    return a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-
    a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+
    a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
}
double inversematrix()
{
    double d = determinant();
    if(d==0)
    cout<<"it is not possible "<<endl;

    //inverse function value / adj a
    a_inv[0][0] = (a[1][1] * a[2][2] - a[1][2] * a[2][1]) / d;
    a_inv[0][1] = -(a[0][2] * a[2][1] - a[0][1] * a[2][2]) / d;
    a_inv[0][2] = (a[0][1] * a[1][2] - a[0][2] * a[1][1]) / d;
    a_inv[1][0] = -(a[1][2] * a[2][0] - a[1][0] * a[2][2]) / d;
    a_inv[1][1] = (a[0][0] * a[2][2] - a[0][2] * a[2][0]) / d;
    a_inv[1][2] = -(a[0][1] * a[1][0] - a[0][0] * a[1][1]) / d;
    a_inv[2][0] = (a[1][0] * a[2][1] - a[1][1] * a[2][0]) / d;
    a_inv[2][1] = -(a[0][1] * a[2][0] - a[0][0] * a[2][1]) / d;
    a_inv[2][2] = (a[0][0] * a[1][1] - a[0][1] * a[1][0]) / d;

}
int main()
{
    
    inversematrix();

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            x[i]+=a_inv[i][j]*b[j];
        }
    }
    //solution 

    cout << "Solution:" << endl;
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;


}
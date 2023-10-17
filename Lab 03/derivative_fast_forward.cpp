#include<bits/stdc++.h>
using namespace std;


int main()
{
    float x[5]={1,2,3,4,5};
    float y[5][5];

y[0][0]=1;
y[1][0]=8;
y[2][0]=27;
y[3][0]=64;
y[4][0]=125;

float x0=1;

float h=1;
float u=(x0-x[0])/h;



for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}


    for (int i = 0; i < 5; i++) {
		cout << x[i]
			<< "\t";
		for (int j = 0; j < 5 - i; j++)
			cout << setw(4) << y[i][j] << "\t"; 

		cout << endl;
	}

//first derivation

float f_d=y[1][0];
f_d+=y[2][0]*((2*u-1)/2.0);
f_d += y[3][0]*((3*u*u-6*u+2)/6.0);
f_d += y[4][0]*((4*u*u*u*u-18*u*u+22*u-6)/24.0);
f_d /= h;

//second derivation 

double s_d = y[2][0];
    s_d += y[3][0] * (u - 1);
    s_d += y[4][0] * ((6 * u * u - 18 * u + 11) / 12.0);
    s_d /= (h * h);


    cout << "First Derivative: " << f_d << endl;
    cout << "Second Derivative: " << s_d<< endl;


}
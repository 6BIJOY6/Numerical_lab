#include<bits/stdc++.h>
using namespace std;
float u_cal(float u, int n)
{
    float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u - i);
	return temp;
}
int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}
int main()
{

	float n = 5;
	float x[] = {1,2,3,4,5 };
	float y[5][5];
	y[0][0] = 1;
	y[1][0] = 8;
	y[2][0] = 27;
	y[3][0] = 64;
    y[4][0] = 125;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}
	for (int i = 0; i < n; i++) {
		cout << x[i]
			<< "\t";
		for (int j = 0; j < n - i; j++)
			cout << setw(4) << y[i][j] << "\t"; 

		cout << endl;
	}


	float value = 1.7;


	float sum = y[0][0];
	float u = (value - x[0]) / (x[1] - x[0]); 
	for (int i = 1; i < n; i++) {


		sum = sum + (u_cal(u, i) * y[0][i]) / fact(i);
	}

	cout << "\n Value at " << value << " is "
		<< sum << endl;
	return 0;
}
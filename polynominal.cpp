#include <bits/stdc++.h>
using namespace std;

int main()
{
  int poly[] = {1, -2, 5, 10};
  int x = 5;
  int n = sizeof(poly) / sizeof(poly[0]);

  int result = poly[0];
  for (int i = 1; i < n; i++)
  {
    result = result * x + poly[i];
  }
  cout << "polynomial is " << result << endl;
}
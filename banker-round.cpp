// bijoy
// id:c201016
// Write a program to round off a number with n digits after the decimal point using the banker’s rule

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string number;
  string output = "";
  int n, count, m;
  cout << "enter the number: ";
  getline(cin, number);
  m = number.size();

  cout << "enter the n: ";
  cin >> n;
  count = 0;
  for (int i = 0; i < m; i++)
  {

    if (count == n + 1)
    {
      if ((number[i + 1] - '0') > 5)
      {
        output += (number[i] + 1);
        cout << "a";
        break;
      }
      else if ((number[i + 1] - '0') < 5)
      {
        
        output += number[i];
        break;
      }
      else if ((number[i + 1] - '0') == 5)
      {
        if ((number[i] - '0') % 2 == 0)
        {
          
          output += number[i];
        }
        else

          output += (number[i] + 1);

        break;
      }

      else
      {
        output += number[i];
      }
    }
    else
    {
      output += number[i];
    }
    count++;
  }
  cout << "Output: " << output << endl;

  return 0;
}

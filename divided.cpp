#include <bits/stdc++.h>

using namespace std;

// Function to calculate the divided difference
float dividedDifference(float* x_data, float* y_data, int i, int j) {
  if (i == j) {
    return y_data[i];
  } else {
    return (dividedDifference(x_data, y_data, i + 1, j) - dividedDifference(x_data, y_data, i, j - 1)) / (x_data[j] - x_data[i]);
  }
}

int main() {
  // The x-data
  float x_data[] = {1, 3, 4, 6, 10};


  float y_data[] = {0, 18, 58, 190, 920};

  int n = sizeof(x_data) / sizeof(x_data[0]);


  float table[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      table[i][j] = 0;
    }
  }


  for (int i = 0; i < n; i++) {
    table[i][i] = y_data[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      table[i][j] = dividedDifference(x_data, y_data, i, j);
    }
  }


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }


  float y = 0;
  for (int i = 0; i < n; i++) {
    y = y * (2.7 - x_data[i]) + table[i][i];
  }

  
  cout << "The value of y for x = 2.7 is " << y << endl;

  return 0;
}

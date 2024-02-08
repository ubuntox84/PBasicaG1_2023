#include <iostream>

using namespace std;

int main(void) {
int rows = 5, cols = 5;
int ** arr;
  arr = new int * [rows];
for (int r = 0; r < rows; r++) {
    arr[r] = new int[r + 1];
    for (int c = 0; c <= r; c++)
      arr[r][c] = (r + 1) * 10 + c + 1;
}

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c <= r; c++)
      cout << arr[r][c] << " ";
    cout << endl;
  }
  for (int r = 0; r < rows; r++)
    delete[] arr[r];
  delete[] arr;
  return 0;
}
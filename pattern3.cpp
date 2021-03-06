/*
  This program prints following pattern:
    *
   ***
  *****
*/

#include <iostream>
using namespace std;

int main() {
  int nRows;

  label:
  cout << "Enter number of rows you want to print: ";
  cin >> nRows;
  if (nRows < 0) {
    cout << "Oops..Enter a positive number..!\n";
    goto label;
  }

  int nSpace=nRows-1;
  for (int i=1; i<=nRows; i++) {
    for (int k=nSpace; k>=1; k--) {
      cout << " ";
    }
    for (int j=1; j<=(2*i-1); j++) {
      cout << "*";
    }
    cout << "\n";
    nSpace--;
  }

  return 0;
}

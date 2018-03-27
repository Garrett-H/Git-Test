/* Author: Garrett Hay
 * Date: 3/26/18
 * File: main.cpp
 * Purpose: testing for using github
 */

#include <iostream>

using namespace std;

int sum(int sumStart);

int main() {
  int n;
  cout << "Hello World" << endl;
  cout << "Enter a number to sum: " << endl;
  cin  >> n;

  n = sum(n);
  cout << n << " is the sum." << endl;
  
  return 0;
}

int sum(int sumStart) {
  int summer = (sumStart*(sumStart+1))/2;
  return summer;
}

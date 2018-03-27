/* Author: Garrett Hay
 * Date: 3/26/18
 * File: main.cpp
 * Purpose: testing for using github
 */

#include <iostream>

using namespace std;

int sum(int sumStart);

int product(long long proStart);

int main() {
  int n;
  long long p;
  cout << "Hello World" << endl;
  cout << "Enter a number to sum: " << endl;
  cin  >> n;

  n = sum(n);
  cout << n << " is the sum." << endl;

  cout << "Enter a number to product(maximum at 12): " << endl;
  cin  >> p;
  cout << product(p) << " is the product." << endl;
  return 0;
}

int sum(int sumStart) {
  int summer = (sumStart*(sumStart+1))/2;
  return summer;
}

int product(long long proStart) {
  long long temp;
  if(proStart > 12)
    return -1;
  if(proStart <= 1)
    return 1;
  else
    temp = proStart * product(proStart-1);
  return temp;
}

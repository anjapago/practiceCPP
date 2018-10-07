#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int simplesum(int a, int b) {
 // Hint: Type return a+b; below:
  return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = simplesum(num1,num2);
  cout<<sum<<endl;
  return 0;
}
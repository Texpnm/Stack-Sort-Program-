#include <iostream>
#include <stack>
using namespace std;

int main() {

  // create a stack of int
  stack<int> nums;

  // push elements into the stack
  nums.push(2);
  nums.push(3);
  nums.push(5);
  nums.push(8);
  
  // get the size of the stack
  int size = nums.size();
  cout << "Size of the stack: " << size;

  return 0;
}


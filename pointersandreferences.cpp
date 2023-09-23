#include <iostream>
using namespace std;

int main() {
  int num = 5; 
  int* pointer_num = &num; //& gets the address
  cout << pointer_num << endl; 
  cout << *pointer_num << endl; 
  *pointer_num = 12; //* gets the values in the address
  cout << *pointer_num << endl; 
  cout << num << endl; 

  //References
  int & reference_num = num;
  cout << reference_num << endl;
}

#include <iostream>
using namespace std;

int main(){
  //1. Addition
  int add_x = 10;
  int add_y = 5;
  int add_z = add_x + add_y;
  cout << add_z << endl;
  
  // 2. Subtraction
  int sub_x = 10;
  int sub_y = 5;
  int sub_z = sub_x - sub_y;
  cout<< sub_z << endl;;
  
  //3. Multiplication
  int mult_x = 10;
  int mult_y = 5;
  int mult_z = mult_x * mult_y;
  cout << mult_z << endl;;

  
  //4. Division
  int div_x = 10;
  int div_y = 5;
  int div_z = div_x / div_y;
  cout << div_z << endl;;

  //5. Modulus
  int mod_x = 10;
  int mod_y = 5;
  int mod_z = mod_x % mod_y;
  cout << mod_z << endl;;

  
  // 8. Increment
  int inc_x = 10;
  cout << inc_x << endl;
  int inc_y = inc_x++; //x = 11 and y = 10
  cout << inc_x << endl << inc_y << endl;
  int inc_z = ++inc_x; //x = 12 and z = 12
  cout << inc_x << endl << inc_z << endl;
}

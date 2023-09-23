#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "How old are you?";
  cin >> age;
  if (age < 13){
    cout << "You are not old enough to use Instagram." <<< endl;
    return -1;
  }
  else{
    cout << "Welcome to Instagram.";
  }
return 0;
}

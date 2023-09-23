#include <iostream>
using namespace std;

int main(){
  int celcius;
  int farenheit;
  cout << "Enter your temperature in Celcius >>>";
  cin >> celcius;
  farenheit = celcius * 9/5 + 32;
  cout << "Your temperature in Farenheit is " 
       << farenheit << " degrees";
return 0;
}

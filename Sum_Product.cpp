#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int> numbers;
vector<string> endings = {"st","nd","rd"};
int number;
int even;
int odd;

cout << "You must enter 6 numbers one at a time and press 'enter' after each. The program will then output the sum of the even numbers and the product of the odd numbers.\n";

for(int i = 0; i < 6; i++){

  if (i<4){
  cout << "\nPlease enter the " << i+1 << endings[i] << " number you would like to use:\n";
  }else{
  cout << "\nPlease enter the " << i+1 << "th number you would like to use:\n";

  cin >> number;
  numbers.push_back(number);
  
}
}

for(int j = 0; j < numbers.size(); j++){

  if (numbers[j]%2 == 0){

    even = numbers[j] + even;

  }else{

    odd = numbers[j] * odd;

  }
}

cout << "The sum of the even numbers is: " << even << "\n";

cout << "The product of the odd numbers is: " << odd << "\n";

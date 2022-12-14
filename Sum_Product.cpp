#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

  // Initialize variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  vector<int> numbers;
  vector<string> endings = {"st","nd","rd","th","th","th"};
  int number;
  int even = 0;
  int odd = 1;

  // Give User prompt and push input to vector ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  cout << "You must enter 6 numbers one at a time and press 'enter' after each. The program will then output the sum of the even numbers and the product of the odd numbers.\n";

  for(int i = 0; i < 6; i++){

    cout << "\nPlease enter the " << i+1 << endings[i] << " number you would like to use:\n";
    cin >> number;
    numbers.push_back(number);
    
  }

  // Create sum for even numbers and product for odd numbers ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  for(int j = 0; j < numbers.size(); j++){

    if (numbers[j]%2 == 0){
      even = numbers[j] + even;
    }else{
      odd = numbers[j] * odd;
    }

  }

  // Print out results ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  cout << "The sum of the even numbers is: " << even << "\n";

  cout << "The product of the odd numbers is: " << odd << "\n";


}

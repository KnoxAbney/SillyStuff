#include <iostream>
#include <cmath>

int main() {
  
  // initialize variables
  double coeff[3];
  char letters[4] = "abc";
  double root1;
  double root2;
  double discriminant;


  // have user enter each coefficient
  for (int i = 0; i < 3; i++){
    std::cout << "Please enter the \"" << letters[i] << "\" coefficient: " ;
    std::cin >> coeff[i];

  }
  
  
  // determine discriminant to decide whether the solution is complex
  discriminant = (coeff[1]*coeff[1])-(4*coeff[0]*coeff[2]);
  
  // determine and print out complex solutions
  if (discriminant < 0){
    double pdisc = abs(discriminant);
    double one = (-coeff[1]/(2*coeff[0]));
    double two = pdisc/(2*coeff[0]);

    std::cout << "The answers are the complex roots: \n" << one << " + " << two << "i\n" << one << " - " << two << "i\n";
    
    // determine and print out real solutions
  } else{
    root1 = (-coeff[1] + sqrt((coeff[1]*coeff[1])-(4*coeff[0]*coeff[2])))/(2*coeff[0]);
    root2 = (-coeff[1] - sqrt((coeff[1]*coeff[1])-(4*coeff[0]*coeff[2])))/(2*coeff[0]);
    
    std::cout << "The additive root is: " << root1 << "\nThe subtractive root is:" << root2;
  }
  
}

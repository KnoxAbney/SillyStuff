#include <iostream>

// Do it be needing water though? ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
std::string needs_water(int days, bool is_succulent){
  if((is_succulent == false) && (days > 3)){
    return "Time to water the plant.\n";
  }else if((is_succulent == true) && (days >= 13)){
    return "Go ahead and give the plant a little water. As a treat.\n";
  }else{
    return "Don't water the plant!\n";
  }
}

// Return input when prompted for days without water ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int days(){
  int days;
  std::cout << "How many days has it been since you last watered your plant?\n";
  std::cin >> days;
  return days;
}

// Return input as boolean when asked whether the plant is a succulent ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
bool succ(){
  std::string temp;
  std::cout << "Is your plant a succulent? Type y for yes and n for no.\n";
  std::cin >> temp;
  if ((temp == "y") || (temp == "Y") || (temp == "yes") || (temp == "YES") || (temp == "Yes")){
    return true;
  }else{
    return false;
  }
}


// print out answer ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main() {
  
  std::cout << needs_water(days(), succ()) << "\n";
  
}

#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent){
  if((is_succulent == false) && (days > 3)){
    return "Time to water the plant.";
  }else if((is_succulent == true) && (days >= 13)){
    return "Go ahead and give the plant a little water.";
  }else{
    return "Don't water the plant!";
  }
}


int days(){
  std::string days;
  std::cout << "How many days has it been since you last watered your plant?";
  getline(std::cin, days);
  return days;
}


bool succ(){
  std::string temp
  bool succ;
  std::cout << "Is your plant a succulent? Type y for yes and n for no.";
  getline(std::cin, temp);
  if ((temp == "y") || (temp == "Y") || (temp == "yes") || (temp = "YES") || (temp = "Yes")){
    succ = true;
  }else{
    succ = false;
  }
  return succ;
}



int main() {
  
  std::cout << needs_water(days(), succ()) << "\n";
  
}
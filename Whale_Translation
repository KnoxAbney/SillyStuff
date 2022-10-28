#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string phrase;
  std::vector<char> whale;

  std::cout << "Please enter a phrase to translate to whale:\n";

  getline(std::cin, phrase);

  //std::cout << phrase;


  for (int i = 0; i < phrase.size(); i++){
      if (phrase[i] == 'e' || phrase[i] == 'u'){
        whale.push_back(phrase[i]);
        whale.push_back(phrase[i]);
      }else if (phrase[i] == 'a' || phrase[i] == 'i' || phrase[i] == 'o'){
        whale.push_back(phrase[i]);
      }
  }

  std::cout << "Your phrase translated to whale is:\n";

  for (int k = 0; k < whale.size(); k++){

    std::cout << whale[k];

  }

  
}

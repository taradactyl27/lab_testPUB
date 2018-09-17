#include<iostream>
#include "pig.h"

int main(){

  
  std::string input;
  std::cout << "Enter a word to piglatinify: " << std::endl;
  std::cin >> input;
  std::cout << "The word becomes: " << piglatinify(input) << std::endl;
  

  return 0;


}

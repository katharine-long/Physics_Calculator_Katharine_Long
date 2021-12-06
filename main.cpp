#include <iostream>
#include "Menu_Functions.h"


int main() {
  string option; 
  string color = "\x1b[" + to_string(33) + ";1m";
  string reset = "\x1b[0m";
  
  do
  {
    showMenu(); 
    cout << color;
    cout << "\nPlease enter an option: "; 
    option = validateString(option); 
    cout << reset; 
    executeMenu(option); 
    
  }while(option != "e" && option != "E");
  cout << "\x1b[" + to_string(34) + ";1m" << "\nGoodbye." << reset << endl;
  return 0; 
}
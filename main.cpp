//Practice with Functions Student: Jennifer Jimenez, Teacher: Dr_T
//10-15-2019 updated 10-16-2019 and 3-30-2020
#include "functions.h" //reference the header file 

int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(31) + ";1m"; //31 for color RED
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
    //cin >> option; //getline(cin,option); //get the entire line
    cout << color; //change text to green 
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option);
    
  //end loop
  }while(option != "g" && option != "G");
  cout << "\nGoodbye." << endl;
  return 0; 
}
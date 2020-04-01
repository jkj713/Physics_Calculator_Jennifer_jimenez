/* A header file to hold the 
main defintions of the program
Student: Jennifer Jimenez
Teacher: Dr_T  updated 3-30-2020 
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//libraries
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

//prototypes
void handleOption(string); //function prototype 
void showMenu(); 
void subMenu();

void handleOption(string userOption)
{
    //declaration and initializtion of variables
    double mass3 = 0.0, mass2 = 0.0, weight = 0.0, momentum = 0.0, mass = 0.0, velocity = 0.0, acceleration = 0.0, N = 0.0, speed = 0.0, time = 0.0; 
    double gravity = 9.81;
    string massUnits = "kg", velocityUnits = "m/s", weightUnits = "lbs", speedUnits = "km", timeUnits = "hr", cOTUnits = "seconds", cOVUnits = "m", accelerationUnits = "m/sec";
    //A option
    if(userOption == "A" || userOption == "a")
    {
     cout << "\nYou have chosen to calculate velocity.";
     cout << "\nPlease enter the change in speed(in km): ";
     cin >> speed;
     cout << "\nPlease enter the change in time(hr): ";
     cin >> time;
     //calculations
     velocity = (speed/time);
     //output
     cout << "\nIf your change of speed is equal to " << speed << speedUnits << " and your change in time is equal to " << time << timeUnits << ", then your velocity is equal to: " << velocity << speedUnits << "/" << timeUnits << endl;
    }

    else if(userOption == "B" || userOption == "b") //option B
    {
     cout << "\nYou have chose to calculate acceleration.";
     cout << "\nPlease enter the change in velocity(m): ";
     cin >> velocity;
     cout << "\nPlease enter the change in time(seconds): ";
     cin >> time;
     //calculations
     acceleration = (velocity/time);
     //output
     cout << "\nIf the change in velocity is equal to " << velocity << " " << cOVUnits << " and the change in time is equal to " << time << " " << cOTUnits << ", then the acceleration is equal to: " << acceleration << " " << cOVUnits << "/" << cOTUnits << endl;
    }
    else if(userOption == "C" || userOption == "c")
    {
      cout << "\nYou have chosen to calculate motion.";

    }
    else if(userOption == "D" || userOption == "d")
    { 
      cout << "\nYou have chosen Newton's Second Law.";
      cout << "\nPlease enter the mass in kg: ";
      cin >> mass3;
      cout << "\nPlease enter acceleration in m/s: ";
      cin >> acceleration;
      N = (mass3 * acceleration); //calculations
      //output
      cout << "\nIf the mass of an object is " << mass3 << massUnits << ", with an acceleration of " << acceleration << velocityUnits << ", then Newton's Second Law of motion is equal to: " << N << massUnits << " " << velocityUnits << endl;
      

    }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "E" || userOption == "e")
    {
      cout << "\nYou have chose to calculate weight.";
      cout << "\nPlease enter the mass of an object: ";
      cin >> mass2;
      weight = (mass2 * gravity); //calculations
      //output
      cout << "\nIf the mass of an object is " << mass2 << massUnits << " and gravity is " << gravity << "m/s, then the weight of an object is: " << weight << weightUnits << endl;
    }
    else if(userOption == "F" || userOption == "f")
    {
      cout << "\nYou have chosen to calculate the momentum.";
      cout << "\nPlease enter the mass(in kg): ";
      cin >> mass;
      cout << "\nPlease enter the velocity(in m/s): ";
      cin >> velocity;
      //calculations
      momentum = (mass * velocity);
      //output
      cout << "If your mass is " << mass << massUnits << ", and your velocity is " << velocity << velocityUnits << ", then your momentum is: " << momentum << " kg m/s" << endl;
    }
    else if(userOption == "G" || userOption == "g")
    {
      cout << "\nEnd program. Goodbye!!" << endl; 
    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

void showMenu()
{
  //Menu variables
  cout << "\nMENU" << endl; 
  cout << "A: Velocity" <<endl; 
  cout << "B: Acceleration" << endl; 
  cout << "C: Motion" << endl; 
  cout << "D: Newton's 2nd Law:" << endl;
  cout << "E: Weight(Earth)" << endl;
  cout << "F: Momentum" << endl;
  cout << "G: Exit" << endl; 
  cout << "X: clear the screen" << endl;  
}

#endif
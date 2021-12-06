#ifndef Menu_Functions
#define Menu_Functions

#include <iostream>
#include<string>
#include <iomanip>
#include "Input_Validation_Extended.h" 
using namespace std;

void showMenu();
void executeMenu(string);
void velocity();
void acceleration();
void motion();
void newton();
void weight();
void momentum();

string color = "\x1b[" + to_string(31) + ";1m";
string reset = "\x1b[0m";


void showMenu() {
  
  cout << color << "\nMENU" << endl;
  cout << "V - calculate velocity." << endl;
  cout << "A - calculate acceleration." << endl;
  cout << "M - calculate motion." << endl;
  cout << "N - calculate Newton's 2nd law." << endl;
  cout << "W - calculate weight." << endl;
  cout << "P - calculate momentum." << endl;
  cout << "X - clear the screen." << endl;
  cout << "E - exit." << reset << endl;
}

void executeMenu(string option) {

    if (option == "V" || option == "v") 
    {
    cout << "\nYou've chosen to calculate velocity." << endl;
    velocity();
    cout << endl;
    }

    else if (option == "A" || option == "a") 
    {
    cout << "\nYou've chosen to calculate acceleration." << endl;
    acceleration();
    cout << endl;
    }

    else if (option == "M" || option == "m")
    {
    cout << "\nYou've chosen to calculate motion." << endl;
    motion();
    cout << endl;
    }

    else if (option == "N" || option == "n") 
    {
      cout << "\nYou've chosen to calculate Newton's 2nd law." << endl;
      newton();
      cout << endl;
    }

    else if (option == "W" || option == "w")
    {
    cout <<  "\nYou've chosen to calculate weight." << endl;
    weight();
    cout << endl;
    }

    else if (option == "P" || option == "p")
    {
    cout <<  "\nYou've chosen to calculate momentum." << endl;
    momentum();
    cout << endl;
    }

    else if(option == "X" || option == "x")
    {
      cout << "\nYou've chosen to clear the screen." << endl;
      string reset = "\x1b[0m";
      cout << reset; 
      cout << "\033[2J\033[1;1H";  
      system("clear"); 
    }

    else if(option == "E" || option == "e")
    {
      char answer = '\0';
      cout << "\nDo you want to exit?" << endl;
      cout << "\nPlease enter Y or N: ";
      answer = validateChar(answer); 

      if(answer == 'Y' || answer == 'y')
      {
        cout << "\x1b[" + to_string(32) + ";1m" << "\nEnd of program." << reset << endl;
      }
      else if (answer == 'N' || answer == 'n')
      {
        cout << "\nPlease try again" << endl; 
      }

    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
  }



void velocity() {

double ds;
string dsUnits;
double dt;
string dtUnits;   

cout << "Please enter a speed: " << endl;
ds = validateDouble(ds);
cout << "You've entered: " << ds << endl;
cout << endl;

cout << "Please enter the unit of measurement for the speed: " << endl;
dsUnits = validateString(dsUnits);
cout << "You've entered: " << dsUnits << endl;
cout << endl;

cout << "Please enter a time: " << endl;
dt = validateDouble(dt);
cout << "You've entered: " << dt << endl;
cout << endl;

cout << "Please enter the unit of measurement for the time: " << endl;
dtUnits = validateString(dtUnits);
cout << "You've entered: " << dtUnits << endl;
cout << endl;

double v  = ds / dt;

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "The velocity is " << ds << " " << dsUnits << " / " << dt 
<< " " << dtUnits << " = " << v << " " << dsUnits << "/" << dtUnits << reset << endl;
cout << endl;

}

void acceleration() {

double dv;
string dvUnits;
double dt;
string dtUnits;   

cout << "Please enter a velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits << endl;
cout << endl;

cout << "Please enter a time: " << endl;
dt = validateDouble(dt);
cout << "You've entered: " << dt << endl;
cout << endl;

cout << "Please enter the unit of measurement for the time: " << endl;
dtUnits = validateString(dtUnits);
cout << "You've entered: " << dtUnits << endl;
cout << endl;

double a  = dv / dt;

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe acceleration is " << dv << " " << dvUnits << " / " << dt 
<< " " << dtUnits << " = " << a << " " << dvUnits << reset << endl;
cout << endl;
}

void motion() {

  int option1 = 0;
  char option2 = '\0';

  cout << "Do you want to calculate motion?" << endl;
  cout << "Y or N" << endl;
  option2 = validateChar(option2);
  cout << endl;

  if (option2 == 'Y' || option2 == 'y') {
    cout << "\n1 - calculate velocity-time." << endl;
    cout << "2 - calculate position-time (distance)." << endl;
    cout << "3 - calculate displacement" << endl;
    cout << "4 - calculate velcity-position." << endl;
    cout << endl;

    cout << "Choose an option: " << endl;
    option1 = validateInt(option1);
    cout << endl;

    if (option1 == 1){
        double dv;
        string dvUnits;
        double a;
        string aUnits;
        double dt;
        string dtUnits;
          
cout << "You've chosen to calculate velocity-time\n" << endl;

cout << "Please enter a velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits << endl;
cout << endl;

cout << "Please enter an acceleration: " << endl;
a = validateDouble(a);
cout << "You've entered: " << a << endl;
cout << endl;

cout << "Please enter the unit of measurement for the acceleration: " << endl;
aUnits = validateString(aUnits);
cout << "You've entered: " << aUnits << endl;
cout << endl;

cout << "Please enter a time: " << endl;
dt = validateDouble(dt);
cout << "You've entered: " << dt << endl;
cout << endl;

cout << "Please enter the unit of measurement for the time: " << endl;
dtUnits = validateString(dtUnits);
cout << "You've entered: " << dtUnits << endl;
cout << endl;

double v1  = (dv + (a * dt));

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe velocity-time is " << dv << " " << dvUnits << " + " << a << " aUnits" << " x " << dt 
<< " " << dtUnits << " = " << v1 << " " << dvUnits << reset << endl;
cout << endl;
    }

    else if (option1 == 2){
        double dv;
        string dvUnits;
        double a;
        string aUnits;
        double dt;
        string dtUnits;
        string dUnits;

cout << "You've chosen to calculate position-time\n" << endl;   
        
cout << "Please enter a velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits <<endl;
cout << endl;

cout << "Please enter an acceleration: " << endl;
a = validateDouble(a);
cout << "You've entered: " << a << endl;
cout << endl;

cout << "Please enter the unit of measurement for the acceleration: " << endl;
aUnits = validateString(aUnits);
cout << "You've entered: " << aUnits << endl;
cout << endl;

cout << "Please enter a time: " << endl;
dt = validateDouble(dt);
cout << "You've entered: " << dt << endl;
cout << endl;

cout << "Please enter the unit of measurement for the time: " << endl;
dtUnits = validateString(dtUnits);
cout << "You've entered: " << dtUnits << endl;
cout << endl;

cout << "Please enter the expected unit of distance: " << endl;
dUnits = validateString(dUnits);
cout << "You've entered: " << dUnits << endl;
cout << endl;

double d  = ((dv * dt) + (0.5 * ((a * dt) * (a * dt))));

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe position-time(distance) is " << dv << " " << dvUnits << " x " << dt << dtUnits 
<< " " << " + " << "1/2" << " " << a << " aUnits" << " x " << dt 
<< " " << dtUnits << "^2 " << " = " << d << " " << dUnits << reset << endl;
cout << endl;
    }

    else if (option1 == 3){
        double d;
        string dUnits;        
        double dv;
        string dvUnits;
        double a;
        string aUnits;

cout << "You've chosen to calculate displacement\n" << endl;                  

cout << "Please enter a velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits << endl;
cout << endl;

cout << "Please enter an acceleration: " << endl;
a = validateDouble(a);
cout << "You've entered: " << a << endl;
cout << endl;

cout << "Please enter the unit of measurement for the acceleration: " << endl;
aUnits = validateString(aUnits);
cout << "You've entered: " << aUnits << endl;
cout << endl;

cout << "Please enter a distance: " << endl;
d = validateDouble(d);
cout << "You've entered: " << d << endl;
cout << endl;

cout << "Please enter the unit of measurement for the distance: " << endl;
dUnits = validateString(dUnits);
cout << "You've entered: " << dUnits << endl;
cout << endl;

double v2  = ((dv * dv) + (2 * (a * d)));

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe displacemant is " << dv << "^2 " << dvUnits 
<< " + " << "2(" << a << " " << aUnits << 
" x " << d << " " << dUnits <<  ") = " << v2 << " " << dvUnits << reset << endl;
cout << endl;
    }

    else if (option1 == 4){
        double dv;
        string dvUnits;
        double v;
        
cout << "You've chosen to calculate velocity-position\n" << endl;

cout << "Please enter an initital velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits << endl;
cout << endl;

cout << "Please enter a second velocity: " << endl;
v = validateDouble(v);
cout << "You've entered: " << v << endl;
cout << endl;

double v1  = (0.5 * (v + dv));

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe velocity-position is " 
<< "1/2(" << v << " + " << dv << "  " << dvUnits << ") " 
<< " = " << v1 << " " << dvUnits << reset << endl;
cout << endl;
    }

    else {
      cout << "Invalid option." << endl;
      cout << endl;
    }

  }
  else if (option2 == 'N' || option2 == 'n')
  {
    cout << "I guess not." << endl;
    cout << endl;
  
  }

  else {
    cout << "What is happening?" << endl;
    cout << endl;
  }


}

void newton() {
  double m;
  string mUnits;
  double a;
  string aUnits;

  cout << "Please enter a mass: " << endl;
m = validateDouble(m);
cout << "You've entered: " << m << endl;
cout << endl;

cout << "Please enter the unit of measurement for the mass: " << endl;
mUnits = validateString(mUnits);
cout << "You've entered: " << mUnits << endl;
cout << endl;

cout << "Please enter an acceleration: " << endl;
a = validateDouble(a);
cout << "You've entered: " << a << endl;
cout << endl;

cout << "Please enter the unit of measurement for the acceleration: " << endl;
aUnits = validateString(aUnits);
cout << "You've entered: " << aUnits << endl;
cout << endl;

double n  = m * a;

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "\nThe net force is " << m << " " << mUnits << " x " 
<< a << " " << aUnits << " = " << n << " " << mUnits << " " << aUnits << reset << endl;
cout << endl;
}

void weight() {
  
double m;
string mUnits;
double g;
string gUnits;   

cout << "Please enter the mass: " << endl;
m = validateDouble(m);
cout << "You've entered: " << m << endl;
cout << endl;

cout << "Please enter the gravity: " << endl;
g = validateDouble(g);
cout << "You've entered: " << g << endl;
cout << endl;

cout << "Please enter the expected measurement term: " << endl;
mUnits = validateString(mUnits);
cout << "You've entered: " << mUnits << endl;
cout << endl;

double w  = m * g;

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "The weight is " << m << " x " << g 
<< " " << gUnits << " = " << w << " " << mUnits << reset << endl;
cout << endl;


}

void momentum() {

double dm;
string dmUnits;
double dv;
string dvUnits;   

cout << "Please enter a mass: " << endl;
dm = validateDouble(dm);
cout << "You've entered: " << dm << endl;
cout << endl;

cout << "Please enter the unit of measurement for the mass: " << endl;
dmUnits = validateString(dmUnits);
cout << "You've entered: " << dmUnits << endl;
cout << endl;

cout << "Please enter a velocity: " << endl;
dv = validateDouble(dv);
cout << "You've entered: " << dv << endl;
cout << endl;

cout << "Please enter the unit of measurement for the velocity: " << endl;
dvUnits = validateString(dvUnits);
cout << "You've entered: " << dvUnits << endl;
cout << endl;

double p  = dm * dv;

cout << fixed << setprecision(4);
cout << "\x1b[" + to_string(34) + ";1m" << "The momentum is " << dm << " " << dmUnits 
<< " x " << dv << " " << dvUnits << " = " << p << " " << dmUnits << " " << dvUnits << reset << endl;
cout << endl;

}

#endif
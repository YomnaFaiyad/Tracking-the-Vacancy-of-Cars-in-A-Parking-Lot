//A program that keeps track of the cars parked in MEDIU's parking zone
#include <iostream>
using namespace std;
// make a struct that contains the cars' information
struct car {
  string ownername, brand, model, make, platenumber;
  int year, oldestmake;
};


int main ()
{
  string model, brand, ownername, platenumber, oldestmodel;
  int i, carnum, proton = 0, maxyear = 2022, oldestmake = 0;
  car cars[carnum];
  
  cout << "This is a program that keeps track of the cars parked in MEDIU's parking zone." << endl << endl;
  cout << "Enter the number of cars you will enter: ";
  cin >> carnum; // number of cars that will be inputed (number of times the loop will repeat)
  
  // make a loop which includes asking for each of the desired car information
  for (int i = 0; i < carnum; i++)
{
	
cout << "Enter owner name: ";
cin >> cars[i].ownername;
cout << "Enter brand: ";
cin >> cars[i].brand;
cout << "Enter model: ";
cin >> cars[i].model;
cout << "Enter make: ";
cin >> cars[i].make;
cout << "Enter plate number: ";
cin >> cars[i].platenumber;
cout << "Enter year: ";
cin >> cars[i].year;
cout << endl;

// get the oldest brand and model
if (cars[i].year < maxyear) 
{
brand = cars[i].brand;
model = cars[i].model;

}  
// count the number of times the word proton is entered in the model
    if (cars[i].model == "proton") 
    { 
    proton++; 
    } 
}

cout << endl << endl;

cout << "The oldest car brand is: " << brand << endl; // display the oldest car brad
cout << "The oldest car model is: " << model << endl; // display the oldest car model
cout << "The number of proton car(s) parked there is: " << proton++ << endl; // display the number of times the word proton is repeated
    

    return 0;
}

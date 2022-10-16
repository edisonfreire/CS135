/*
Author: Edison Freire
Course: CSCI-135
Instructor: Maryash
Assignment: E2.10

Write a program that asks the user to input: the number of gallons of gas in the
tank, the fuel efficiency in miles per gallon, and the price of gas per gallon.
Then print the cost per 100 miles and how far the car can go with the gas in the
tank.
*/

#include <iostream>
using namespace std;

int main() {
  float gallonsOfGas;
  float fuelEfficiency;
  float priceOfGasPerGallon;

  cout << "Enter the number of gallons of gas in the tank: ";
  cin >> gallonsOfGas;
  cout << "Enter the fuel efficiency in miles per gallon: ";
  cin >> fuelEfficiency;
  cout << "Enter the price of gas per gallon: ";
  cin >> priceOfGasPerGallon;

  float costPerHundredMiles;
  costPerHundredMiles = (100 / fuelEfficiency) * priceOfGasPerGallon;
  // 100 / fuelEfficiency to get how many gallons needed for 100 miles and then
  // multiply that by price per gallon to get price for 100 miles.
  cout << costPerHundredMiles << "\n";

  float carDistanceOnTank;
  carDistanceOnTank = gallonsOfGas * fuelEfficiency;

  cout << carDistanceOnTank << "\n";

  return 0;
}
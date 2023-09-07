#include <iostream>>
#include <string>
#include "Car.h"
using namespace std;

int main(void){
    Car Honda(100);
    cout << "The price of the car is " << Honda.getPrice() << " and the emission is " << Honda.getEmissions() << endl;
    Honda.setPrice(200);
    Honda.setEmissions(400);
    cout << "The price of the car is now " << Honda.getPrice() << " and the emission is " << Honda.getEmissions()<< endl;
    Honda.drive(100);
    cout << "The car's emission is now " << Honda.getEmissions() << endl;

}
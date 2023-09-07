#include <iostream>>
#include <string>
#include "Car.h"
using namespace std;

int main(void){
    Car Honda(100);
    cout << "The price of the car is " << Honda.get_Price() << " and the emission is " << Honda.get_Emissions() << endl;
    Honda.set_Price(200);
    Honda.set_Emissions(400);
    cout << "The price of the car is now " << Honda.get_Price() << " and the emission is " << Honda.get_Emissions()<< endl;
    Honda.drive(100);
    cout << "The car's emission is now " << Honda.get_Emissions() << endl;

}
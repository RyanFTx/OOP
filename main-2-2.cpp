#include <iostream>
#include "Ford.h"
using namespace std;

int main(void){
    Ford f40(10,2000);
    cout << "Badge Number: " << f40.getbadgeNumber() << endl;
    f40.setbadgeNumber(11);
    cout << "Fuel: " << f40.getFuel() << " Price: " << f40.getPrice() << " BadgeNumber: " << f40.getbadgeNumber() << endl;
    f40.setFuel(100);
    cout<< "Fuel is now set to " << f40.getFuel() << endl;
    f40.refuel(70);
    cout<< "Fuel after refuelling is " << f40.getFuel() << endl;
    f40.drive(60);
    cout<< "emmisions after driving is: " << f40.getEmissions() << " and fuel left is: " << f40.getFuel() << endl;


}
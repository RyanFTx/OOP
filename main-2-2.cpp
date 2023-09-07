#include <iostream>
#include "Ford.h"
using namespace std;

int main(void){
    Ford f40(10,2000);
    cout << "Badge Number: " << f40.get_badgeNumber() << endl;
    f40.set_badgeNumber(11);
    cout << "Fuel: " << f40.get_litresOfFuel() << " Price: " << f40.getPrice() << " BadgeNumber: " << f40.get_badgeNumber() << endl;
    f40.set_Fuel(100);
    cout<< "Fuel is now set to " << f40.get_litresOfFuel() << endl;
    f40.refuel(70);
    cout<< "Fuel after refuelling is " << f40.get_litresOfFuel() << endl;
    f40.drive(60);
    cout<< "emmisions after driving is: " << f40.get_Emissions() << " and fuel left is: " << f40.getFuel() << endl;


}
#include <iostream>
#include "Tesla.h"
#include <string>
using namespace std;

int main(void){
    Tesla one('z',100);
    cout<< "Model : " << one.get_Model() << endl;
    one.set_Model('x');
    cout << "Price: " << one.get_Price() << " Model: " << one.get_Model() << " Battery: " << one.get_batteryPercentage() << " Emissions: " << one.get_Emissions() << endl;
    one.set_batteryPercentage(50);
    one.set_Emissions(10);
    one.set_Model('y');
    one.set_Price(500);
    cout << "Price: " << one.get_Price() << " Model: " << one.get_Model() << " Battery: " << one.get_batteryPercentage() << " Emissions: " << one.get_Emissions() << endl;
    one.set_batteryPercentage(0);
    one.chargeBattery(60);
    cout << "Battery is now: " << one.get_batteryPercentage() << endl;
    one.drive(100);
    cout<< "battery after driving: " << one.get_batteryPercentage() << " Emissions after driving: " << one.get_Emissions() <<endl;

}

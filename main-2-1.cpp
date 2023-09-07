#include <iostream>
#include "Tesla.h"
#include <string>
using namespace std;

int main(void){
    Tesla one('z',100);
    cout<< "Model : " << one.getModel() << endl;
    one.setModel('x');
    cout << "Price: " << one.getPrice() << " Model: " << one.getModel() << " Battery: " << one.getBattery() << " Emissions: " << one.getEmissions() << endl;
    one.setBattery(50);
    one.setEmissions(10);
    one.setModel('y');
    one.setPrice(500);
    cout << "Price: " << one.getPrice() << " Model: " << one.getModel() << " Battery: " << one.getBattery() << " Emissions: " << one.getEmissions() << endl;
    one.setBattery(0);
    one.chargeBattery(60);
    cout << "Battery is now: " << one.getBattery() << endl;
    one.drive(100);
    cout<< "battery after driving: " << one.getBattery() << " Emissions after driving: " << one.getEmissions() <<endl;

}

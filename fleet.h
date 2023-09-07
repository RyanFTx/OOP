#ifndef FLEET_H
#define FLEET_H

#include <iostream>
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"


class Fleet{
    private:
        Car** fleet;
    public:
        Fleet(){
            fleet = nullptr;
        }
        Car** fleet = new Car*[5];

        Car **get_fleet(){
            for(int i = 0; i < 5; i++){
                fleet[i] = nullptr;
            }
            fleet[0] = &(Tesla('S',10000));
            fleet[1] = &(Ford(1,20000));
            fleet[2] = &(Car(30000));
            fleet[3] = &(Ford(2,40000));
            fleet[4] = &(Tesla('T',50000));
 
        }

};

#endif
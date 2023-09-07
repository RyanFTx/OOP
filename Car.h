#ifndef car_H
#define car_H

#include <iostream>

class Car{
    protected:
        int price;
        int emissions = 0;
    public:
        Car(){};
        Car(int price){
            this->price = price;
        }
        int get_Price(){
            return price;
        }
        int get_Emissions(){
            return emissions;
        }
        void set_Price(int price){
            this->price = price;
        }
        void set_Emissions(int emissions){
            this->emissions = emissions;
        }
        virtual void drive(int kms){
            this->emissions = 20 * kms;
        }

};

#endif
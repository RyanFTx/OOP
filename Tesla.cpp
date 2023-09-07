#include <iostream>
#include "Car.h"




class Tesla : public Car{
    private:
        char model;
        float batteryPercentage = 100;
    public:
        Tesla(char model, int price){
            this->price = price;
            this->model = model;
        }
        void setBattery(float perc){
            if(perc > 100){
                batteryPercentage = 100;
            } else if(perc < 0){
                batteryPercentage = 0;
            } else{
                this->batteryPercentage = perc;
            }
        }
        float getBattery(){
            return batteryPercentage;
        }
        void setModel(char model){
            this->model = model;
        }
        char getModel(){
            return model;
        }
        void chargeBattery(int mins){
            if(mins * 0.5 + batteryPercentage > 100){
                batteryPercentage = 100;
            } else{
                batteryPercentage += mins * 0.5;
            }
        }
        void drive(int kms){
            for(int i = 0; i < kms / 5 && batteryPercentage > 0; i++){
                batteryPercentage -= 1;
                emissions = 74 * i;

            }
        }




            
};

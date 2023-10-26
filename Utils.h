#ifndef UTILS_H
#define UTILS_H

#include <iostream>





class Utiils{
    std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        int width = rand()%gridWidth + 1;
        int height = rand()%gridHeight + 1; 
        std::tuple<int,int> randPos = {width , height};
    }
    
    double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        //sqrt((x value of pos2 - x value of pos1)^2 + (y value of pos2 - y value of pos1))

    }
};

#endif
#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"
#include <iostream>

class Effect{
    public:
        virtual void apply(Cell& cell);
};

#endif
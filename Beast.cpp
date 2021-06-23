#include "Beast.h"

Beast::Beast()
{
    //ctor
}

Beast::Beast(int p_m, string s, int age, int fatness) : Animale(s, age, fatness)
{
    this->period_milk_eating = p_m;
}

Beast::~Beast()
{
    //dtor
}

int Beast::getPeriod_milk_eating(){
    return this->period_milk_eating;
}

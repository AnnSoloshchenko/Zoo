#include "Food.h"

Food::Food()
{
    //ctor
}

Food::Food(string t, int w, int s)
{
    this->type = t;
    this->weight = w;
    this->satiety_percent = s;
}

Food::~Food()
{
    //dtor
}

string Food::getType(){return this->type;}
int Food::getWeight(){return this->weight;}
int Food::getSatiety_percent(){return this->satiety_percent;}

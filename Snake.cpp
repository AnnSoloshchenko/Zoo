#include "Snake.h"

Snake::Snake()
{
    //ctor
}

Snake::Snake(int l, string c, string s, int age, int fatness) : Animale(s, age, fatness)
{
    this->length = l;
    this->color = c;
}

Snake::~Snake()
{
    //dtor
}

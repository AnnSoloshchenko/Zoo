#include "Bird.h"

Bird::Bird()
{
    //ctor
}

Bird::Bird(int w_l, bool m_e, string s, int age, int fatness) : Animale(s, age, fatness)
{
    this->wing_length = w_l;
    this->meet_eating = m_e;
}

Bird::~Bird()
{
    //dtor
}

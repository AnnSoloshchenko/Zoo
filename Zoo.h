#ifndef ZOO_H
#define ZOO_H
#include <Animale.h>
#include <iostream>
#include <vector>

using namespace std;

const int count_animale = 25;

class Zoo
{
    public:
        Zoo();
        virtual ~Zoo();

        vector<Animale> animals;

        void controlZoo();

        void giveFood();
        void addAnimaleToZoo();
        void transportAnimale();
        void showZooInfo();

    protected:

    private:
};

#endif // ZOO_H

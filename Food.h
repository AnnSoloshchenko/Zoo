#ifndef FOOD_H
#define FOOD_H
#include <string>
#include <iostream>

using namespace std;

class Food
{
    public:
        Food();
        Food(string, int, int);
        virtual ~Food();

        string getType();
        int getWeight();
        int getSatiety_percent();

    protected:

    private:
        string type;
        int weight;
        int satiety_percent;
};

#endif // FOOD_H

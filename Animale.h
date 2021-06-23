#ifndef Animale_H
#define Animale_H
#include <string>
#include <Food.h>
#include <iostream>

using namespace std;

class Animale
{
    public:
        Animale();
        Animale(string, int, int);
        virtual ~Animale();

        bool feeding(Food&);

        string getType();
        int getAge();
        int getFatness();

        void show();

    protected:

    private:
        string type;
        int age;
        int fatness;
};

#endif // Animale_H

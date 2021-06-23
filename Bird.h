#ifndef BIRD_H
#define BIRD_H
#include <Animale.h>

class Bird : public Animale
{
    public:
        Bird();
        Bird(int, bool, string, int, int);
        virtual ~Bird();

    protected:

    private:
        int wing_length;
        bool meet_eating;
};

#endif // BIRD_H

#ifndef BEAST_H
#define BEAST_H
#include <Animale.h>

class Beast : public Animale
{
    public:
        Beast();
        Beast(int, string, int, int);
        virtual ~Beast();

        int getPeriod_milk_eating();

    protected:

    private:
        int period_milk_eating;
};

#endif // BEAST_H

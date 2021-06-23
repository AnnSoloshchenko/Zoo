#ifndef SNAKE_H
#define SNAKE_H
#include <string>
#include <Animale.h>

class Snake : public Animale
{
    public:
        Snake();
        Snake(int, string, string, int, int);
        virtual ~Snake();

    protected:

    private:
    int length;
    string color;
};

#endif // SNAKE_H

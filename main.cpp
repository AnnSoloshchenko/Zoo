#include <iostream>
#include <string>
#include <Zoo.h>
#include <Food.h>
#include <Animale.h>
#include <Bird.h>
#include <Snake.h>
#include <Beast.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "ukrainian");

    Zoo zoo1;


    zoo1.animals.push_back(Bird(150, true, "Orel", 10, 40));
    zoo1.animals.push_back(Beast(60, "Mavpa", 8, 50));
    zoo1.animals.push_back(Snake(150, "green", "Cobra", 6, 90));


    zoo1.controlZoo();


    system("pause");
    return 0;
}

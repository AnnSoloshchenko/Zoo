#include "Animale.h"

Animale::Animale()
{
    //ctor
}

Animale::Animale(string t, int a, int f)
{
    this->type = t;
    this->age = a;
    this->fatness = f;
}

Animale::~Animale()
{
    //dtor
}

bool Animale::feeding(Food& f){
    if(this->fatness + f.getSatiety_percent() < 100){
        this->fatness += f.getSatiety_percent();
    }else{
        this->fatness = 100;
    }
}

string Animale::getType(){return this->type;}
int Animale::getAge(){return this->age;}
int Animale::getFatness(){return this->fatness;}

void Animale::show(){
    cout << "Вид тварини: " << this->type << endl;
    cout << "Вік тварини: " << this->age << endl;
    cout << "Рівень нагодованості: " << this->fatness << endl << endl;
}

}

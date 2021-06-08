#include "Zoo.h"
#include <Animale.h>
#include <Food.h>

Zoo::Zoo()
{

}

Zoo::~Zoo()
{
    //dtor
}

void Zoo::controlZoo(){
    int choice;

    do{
        cout << "Програма Зоопарк!" << endl;
        cout << "Меню" << endl;
        cout << "1. Нагодувати тварину" << endl;
        cout << "2. Додати тварину до Зоопарку" << endl;
        cout << "3. Перевезти тварину в інший Зоопарк" << endl;
        cout << "4. Подивитись інформацію по Зоопарку" << endl;

        cout << "\nЗробiть ваш вибiр: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Годування тварини!"  <<endl;
                giveFood();
                break;
            case 2:
                cout << "";
                addAnimaleToZoo();
                break;
            case 3:
                cout << " ";
                transportAnimale();
                break;
            case 4:
                cout << " ";
                showZooInfo();
                break;
        }
        cout << "Щоб повернутись до меню натиснiть будь-яку клавiшу!" << endl;
        system("pause");
        system("cls");
    }
    while(choice != 0);
}

void Zoo::giveFood(){
    string type;
    int weight;
    int satiety_percent;
    string name_animale;
    cout << "Введіть параметри їжі" << endl;
    cout << "Вид їжі: ";
    cin >> type;
    cout << "Вага їжі: ";
    cin >> weight;
    cout << "Відсоток ситності(0-100): ";
    cin >> satiety_percent;
    cout << "Введіть назву тварини, якій призначена їжа: " << endl;
    cin >> name_animale;

    Food food = Food(type, weight, satiety_percent);


    for(int i = 0; i < animals.size(); i++){
        //період годування молоком
        /*if(animals[i].getType() == name_animale){
            if(typeid(animals[i]).name() == "Beast"){
                if( animals[i].getPeriod_milk_eating() > animals[i].getAge()){
                    cout << "Тварина ще годується молоком!";
                }
             }
            }*/
            animals[i].feeding(food);
            cout << "Тварину: " << name_animale << " нагодовано!" << endl;
            break;
        }

}

void Zoo::addAnimaleToZoo(){

    string type;
    int age;
    int fatness;
    cout << "Введіть вид тварини: ";
    cin >> type;
    cout << "Введіть вік тварини: ";
    cin >> age;
    cout << "Введіть рівень накормленості тварини: ";
    cin >> fatness;

    Animale animale = Animale(type, age, fatness);

    animals.push_back(animale);

}
void Zoo::transportAnimale(){
    string s;
    cout << "Введіть назву тварини: ";
    cin >> s;
    for(int i = 0; i < animals.size(); i++){
        if(animals[i].getType() == s){
            animals.erase(animals.begin() + i);
            cout << "Тварину транспортовано до іншого зоопарку!" << endl;
            break;
        }
    }
}
void Zoo::showZooInfo(){
    for(int i = 0; i < animals.size(); i++){
            animals[i].show();
    }
}

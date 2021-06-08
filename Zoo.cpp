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
        cout << "�������� �������!" << endl;
        cout << "����" << endl;
        cout << "1. ���������� �������" << endl;
        cout << "2. ������ ������� �� ��������" << endl;
        cout << "3. ��������� ������� � ����� �������" << endl;
        cout << "4. ���������� ���������� �� ��������" << endl;

        cout << "\n����i�� ��� ���i�: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "��������� �������!"  <<endl;
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
        cout << "��� ����������� �� ���� ������i�� ����-��� ����i��!" << endl;
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
    cout << "������ ��������� ��" << endl;
    cout << "��� ��: ";
    cin >> type;
    cout << "���� ��: ";
    cin >> weight;
    cout << "³������ �������(0-100): ";
    cin >> satiety_percent;
    cout << "������ ����� �������, ��� ���������� ���: " << endl;
    cin >> name_animale;

    Food food = Food(type, weight, satiety_percent);


    for(int i = 0; i < animals.size(); i++){
        //����� ��������� �������
        /*if(animals[i].getType() == name_animale){
            if(typeid(animals[i]).name() == "Beast"){
                if( animals[i].getPeriod_milk_eating() > animals[i].getAge()){
                    cout << "������� �� �������� �������!";
                }
             }
            }*/
            animals[i].feeding(food);
            cout << "�������: " << name_animale << " ����������!" << endl;
            break;
        }

}

void Zoo::addAnimaleToZoo(){

    string type;
    int age;
    int fatness;
    cout << "������ ��� �������: ";
    cin >> type;
    cout << "������ �� �������: ";
    cin >> age;
    cout << "������ ����� ������������ �������: ";
    cin >> fatness;

    Animale animale = Animale(type, age, fatness);

    animals.push_back(animale);

}
void Zoo::transportAnimale(){
    string s;
    cout << "������ ����� �������: ";
    cin >> s;
    for(int i = 0; i < animals.size(); i++){
        if(animals[i].getType() == s){
            animals.erase(animals.begin() + i);
            cout << "������� �������������� �� ������ ��������!" << endl;
            break;
        }
    }
}
void Zoo::showZooInfo(){
    for(int i = 0; i < animals.size(); i++){
            animals[i].show();
    }
}

#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

struct Person
{
    int age;
    string name;
    float height;

    Person(){

    }
    Person(int age1, string name1, float height1){
        age = age1;
        name = name1;
        height = height1;
    }

    void print_values(){
        cout<<age<<" "<<name<<" "<<height<<endl;
    }
};


int main(){
    Person arr_of_struct[5];
    Person *arr_of_pointer[5];

    arr_of_struct[0] = Person(20, "Jay", 6.0);
    arr_of_struct[1] = Person(22, "Aryan", 5.10);
    arr_of_struct[2] = Person(19, "Krish", 5.11);
    arr_of_struct[3] = Person(20, "Umang", 6.0);
    arr_of_struct[4] = Person(21, "Ritesh", 5.10);
    // arr_of_pointer[0] = &arr_of_struct[0];
    for(int i = 0; i<5; i++){
        arr_of_struct[i].print_values();
    }
    for(int i = 0; i<5; i++){
        arr_of_pointer[i] = &arr_of_struct[i];
    }
    cout<<"Printing pointers"<<endl;
    for(int i = 0; i<5; i++){
        arr_of_pointer[i]->print_values();
    }
    return 0;
} 

/*
#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    double height;
    char gender;
    Person()
    {
    }
    Person(string name1, int age1, double height1, char gender1)
    {
        name = name1;
        age = age1;
        height = height1;
        gender = gender1;
    }
};

void print(Person *PersonArr)
{
    cout << "Name  |  Age  | Height" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << PersonArr[i].name << "   ";
        cout << PersonArr[i].age << "   ";
        cout << PersonArr[i].height << "   ";
        cout << PersonArr[i].gender << endl;

        cout << sizeof(PersonArr[i]) << endl;
    }
}
void print_pointer(Person **PersonPointer)
{
    for (int i = 0; i < 4; i++)
    {
        cout << PersonPointer[i] << endl;
    }
}
void solve()
{

    Person PersonArr[4];
    Person *PersonPointer[4];

    // Person krish("krish", 20, 5.9, 'M');
    // PersonArr[0] = krish;
    // PersonPointer[0] = &PersonArr[0];

    // Person Jay("Jay", 22, 6.1, 'M');
    // PersonArr[1] = Jay;
    // PersonPointer[1] = &PersonArr[1];

    // Person Umang("Umang", 80, 6.0, 'M');
    // PersonArr[2] = Umang;
    // PersonPointer[2] = &PersonArr[2];

    // Person Aryan("Aryan", 1378, 5.10, 'M');
    // PersonArr[3] = Aryan;
    // PersonPointer[3] = &PersonArr[3];

    PersonArr[0].name = "krish";
    PersonArr[0].age = 20;
    PersonArr[0].height = 5.9;
    PersonArr[0].gender = 'M';
    PersonPointer[0] = &PersonArr[0];

    PersonArr[1].name = "Jay";
    PersonArr[1].age = 22;
    PersonArr[1].height = 6.1;
    PersonArr[1].gender = 'M';
    PersonPointer[1] = &PersonArr[1];

    PersonArr[2].name = "Umang";
    PersonArr[2].age = 22;
    PersonArr[2].height = 6.0;
    PersonArr[2].gender = 'M';
    PersonPointer[2] = &PersonArr[2];

    PersonArr[3].name = "Aryan";
    PersonArr[3].age = 1756;
    PersonArr[3].height = 5.10;
    PersonArr[3].gender = 'M';
    PersonPointer[3] = &PersonArr[3];

    print(PersonArr);
    print_pointer(PersonPointer);
}
int main()
{
    solve();
}
*/
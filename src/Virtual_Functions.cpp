#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
    virtual void sound(){

        cout << "Animal sound" << endl;
    };

};

class Dog : public Animal{
    public:
    void sound() override{
        cout << "Dog sound" << endl;
    };
};

int main(){

    Animal* a; //Declare a pointer to the base class (Animal)
    Dog d; // create the dog obj;

    a = &d;

    a -> sound();



    return 0;
}
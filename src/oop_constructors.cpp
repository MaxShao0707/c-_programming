#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age);
};

Person::Person(string name, int age){
    this -> name = name;
    this -> age = age;
};

int main(){

    Person person_1("tom", 20);
    cout << person_1.name << endl;
    cout << person_1.age << endl;
    return 0;

}
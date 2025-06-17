#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;
};

int main(){

    Person person_1;
    person_1.name = "tom";
    person_1.age = 20;

    cout << person_1.name << endl;
    cout << person_1.age << endl;

    return 0;
}
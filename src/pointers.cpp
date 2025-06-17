#include <iostream>
#include <string>

using namespace std;

int main(){

    string food = "pizza"; // a food variable that string type.
    string* ptr = &food; // a pointer variable that stores memory address of food.

    cout << food << endl; //pizza
    cout << &food << endl; // memory
    cout << ptr << endl; // memory
    cout << *ptr << endl; //pizza


    int myint;
    float myfloat;
    double mydouble;
    char mychar;

    cout << "the size of int in memory is:"<< sizeof(myint) << "bytes" << endl;
    cout << "the size of float in memory is:"<< sizeof(myfloat) << "bytes" << endl;
    cout << "the size of double in memory is:"<< sizeof(mydouble) << "bytes" << endl;
    cout << "the size of char in memory is:"<< sizeof(mychar) << "bytes" << endl;
    


    return 0;
}
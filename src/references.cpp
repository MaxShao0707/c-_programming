#include <iostream>
#include <string>

using namespace std;

int main(){

    string food = "pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    //output memory address of food
    cout << &food << endl;


    return 0;

}
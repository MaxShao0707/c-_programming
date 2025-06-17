#include <iostream>
#include <string>
#include <functional>
using namespace std;

void myFunc(function<void()> func){
    func();
    func();

}

int main(){
    //print message
    auto message = [](){
        cout << "hello lambda!" << endl;
    };
    //add two number
    auto add = [](int a, int b){
        return a + b;
    };



    message();
    cout << "the result of add(1, 2) is: " << add(1, 2) << endl;

    myFunc(message);

    for(int i=0; i<=3; i++){
        auto show = [i](){
            cout <<"the number is:" << i << endl;
        };
        show();
    }

    int a = 10;

    auto show = [&a](){
        cout << "the value of a is: " << a << endl;
    };
    show();
    a = 20;
    show();
    return 0;

}
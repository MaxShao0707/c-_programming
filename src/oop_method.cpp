#include <iostream>
#include <string>

using namespace std;

class myClass{
    public:
    void myFunc();

};

void myClass::myFunc(){
    cout << "this is my function inside myclass" << endl;
};

int main(){

    myClass myObj;
    myObj.myFunc();

    return 0;
}


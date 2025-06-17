#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T a, T b){
    return a+ b;
};

int main(){

    cout << add<int>(1,2) << endl;
    cout << add<float>(1.9, 2.1) << endl;

    

    return 0;
}
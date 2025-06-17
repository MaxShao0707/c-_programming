#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){


    // create a vector
    vector<string> cars = {"volvo", "BMW", "Ford"};
    //for loop vector
    for(string car: cars){
        cout << car << endl;
    }

    //get element of vector
    cout << cars[1] << endl;

    cout << "the front of vector" << cars.front() << endl;
    cout << "the back of vector" << cars.back() << endl;

    //cout << "using at:" << cars.at(1) < endl;

    cars.at(0) = "audi";
    cout << "the first element is: " << cars.at(0) << endl;

    cars.push_back("Tesla");




    return 0;
}
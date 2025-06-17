#include <iostream>

using namespace std;

int main(){

    struct{
        int x;
        int y;

    }point;

    struct car{
        std::string name;
        std::string model;
        int year;
    };

    // 正确实例化结构体变量
    point.x = 10;
    point.y = 20;

    car myCar;
    myCar.name = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2022;

    cout << point.x << ", " << point.y << endl;
    std::cout << myCar.name << ", " << myCar.model << ", " << myCar.year << std::endl;



    return 0;


}
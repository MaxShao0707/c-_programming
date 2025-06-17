#include <iostream>
#include <string>

int main(){

    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "the length of the txt is: " << txt.length() << std::endl;
    std::cout << "the size of the txt is:" << txt.size() << std::endl;

    std::string my_hello = "hello string!";
    std::cout << "the first character is:" << my_hello.at(0) << std::endl;

    std::string fullName;
    std::cout << "Enter your full name:";
    std::getline(std::cin, fullName);
    std::cout << "your full name is: " << fullName << std::endl;








    return 0;
}
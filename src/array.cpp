#include <iostream>

int main(){

    int arrs[5] = {1, 2, 3, 4, 5};
    std::cout << "the size of arrs is:" << sizeof(arrs) << ":bytes" << std::endl;

    std::cout << "the single size of array is" << sizeof(arrs[0]) << "bytes" << std::endl;
    
    std::string letters[2][4] = {
        {"a", "b", "c", "d"},
        {"e", "f", "g", "h"}
    };
    std::cout << "the size of letters is:" << sizeof(letters) << ":bytes" << std::endl;
    std::cout << "the single size of letters is:" << sizeof(letters[0][0]) << "bytes" << std::endl;
    std::cout << letters << std::endl;
    return 0;
}
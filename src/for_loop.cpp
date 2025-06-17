#include <iostream>

int main(){

    for(int i = 0; i<=10; i++){
        std::cout << i << std::endl;

    }

    int myNumbers[5] = {1, 2, 3, 4, 5};
    for(int i: myNumbers){
        std::cout << i << std::endl;

    }

    return 0;

}
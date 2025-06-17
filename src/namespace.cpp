#include <iostream>
#include <string>
using namespace std;

namespace mynamespace{
    int x = 66;

};

int main(){
    cout << mynamespace::x << endl;
    return 0;
}

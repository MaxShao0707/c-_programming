#include <iostream>
#include <string>

using namespace std;

int sum(int k){

    if(k>0){
        int result = k + sum(k-1);
        return result;
    }else{
        return 0;
    }


}
int main(){

    int result = sum(10);
    cout << "the result of sum(10) is:" << result << endl;
    return 0;
}
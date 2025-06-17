#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //create and open a file
    ofstream myfile("./filename.txt");

    //write to file 
    myfile << "hello file!";

    //close file
    myfile.close();


    string text;

    ifstream myreadfile("./filename.txt");

    while(getline(myreadfile, text)){
        cout << text;
    }

    myreadfile.close();

    return 0;
}
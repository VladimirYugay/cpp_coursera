#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;


int main(){
    ifstream input("input.txt");
    float num;
    while(input >> num){
        cout << fixed << setprecision(3) << num << endl;
    }
}
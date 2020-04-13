#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


int main(){
    ifstream input("input.txt");
    int n, m;
    input >> n;
    input >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            input >> x;
            input.ignore(1);
            cout << setw(10) << x;
            if(j != m - 1){
                cout << " ";
            }
        }
        if(i != n - 1){
            cout << endl;
        }
    }
}
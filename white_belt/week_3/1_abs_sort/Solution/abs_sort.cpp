#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void abs_sort(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b){
        return abs(a) < abs(b);
    });
    for(const int& num: nums){
        cout << num << " ";
    }
}

int main(){

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int& item: nums){
        cin >> item;
    }
    abs_sort(nums);
    return 0;
}
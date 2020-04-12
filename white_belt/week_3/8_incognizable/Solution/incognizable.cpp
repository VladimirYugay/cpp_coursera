#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

class Incognizable{
  public:
  Incognizable(int arg1 = 0, int arg2 = 0){
    x = arg1;
    y = arg2;
  }
  private:
  int x;
  int y;
};

int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}
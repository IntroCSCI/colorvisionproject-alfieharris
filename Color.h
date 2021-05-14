#ifndef Color_H
#define ColorT_H
#include <string>
#include <vector>

using std::string;
using std::vector;
int a;

class Primary {
  private:
  int primaryColor, secondaryColor;
    public: 
  void set_values (int, int);
  int amount() {return primaryColor+secondaryColor;}
} rect;
void Primary::set_values (int x, int y){
  primaryColor = x;
  secondaryColor = y;
};

#endif

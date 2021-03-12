//Author: Alfie Harris
#include <iostream>
#include <fstream>
using namespace std;
//Pallete Generator
//CSS
int main()
{
fstream reader;
string colors[8]: {"#0000FF", "#FFFF00", "#EE82EE", "#FF0000", "#FFA500", "#008000", "#A9A9A9", "#FF1493",};
int color= 0;

cout << "Hello and welcome to the pallette generator program.\n";
  
cout << "Here, you have the power to decide the colors in your very own color pallette!/n";
  
cout << "Now, let's get started.\n";

cout << "Currently, our program has only a maximum of 10 colors, but we need atleast 2 to make it work. How many would you like in your pallete?"/n; 
cin >> color;
if (color < 2 || color > 10); {
  cout << "Unfortunately, the input you gave doesn't meet our requiremnets for the pallette. Please try again./n";
}
  
    
  return 0;
}

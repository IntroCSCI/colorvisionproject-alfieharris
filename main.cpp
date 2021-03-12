//Author: Alfie Harris
#include <iostream>
#include <fstream>
using namespace std;
//Pallete Generator
//CSS
int main()
{
fstream reader;
string colors[6]: {"Blue", "Red", "Green", "Yellow", "Orange", "Purple"};
int Blue= 1;
int Red= 2;
int Green= 3;
int Yellow= 4;
int Orange= 5;
int Purple= 6;
string fileName;

cout << "Hello and welcome to the pallette generator program.\n";
  
cout << "Here, you have the power to decide the colors in your very own color pallette!/n";
  
cout << "Now, let's get started.\n";
do{
cout << "Currently, the colors available are Blue, Red, Green, Yellow, Orange, and Purple. These colors are case sensitive. What is the first color you would like in your pallette??"/n; 
cin >> color;
}while (colorNum < 1 || colorNum > 6);
  
if (colorNum < 1 || colorNum > 6); {
  cout << "Unfortunately, the input you gave doesn't meet our requirements for the pallette. Please try again./n";
}
else {
  cout << "What is the file name?/n";
  cin >> fileName;
}

 reader.open(fileName, ios::out);
 getline(reader,text);
 reader.close();
  
  return 0;
}

//Author: Alfie Harris
#include <iostream>
#include <fstream>
#include <list>
using namespace std;
//Pallete Generator
//CSS
void print(std::list<std::string> const &list)
{
    for (auto const &i: list) {
        std::cout << i << std::endl;
    }
}
int main()
{
fstream file;
string colors[6] {"Blue", "Red", "Green", "Yellow", "Orange", "Purple"};
string fileName;
string response;
string variable;

cout << "Hello and welcome to the pallette generator program.\n";
  
cout << "Now, let's get started.\n";

cout << "Would you like to begin?\n"; 
cin >> response;
do {
if (response == "Yes") {
  cout << "Please choose a primary color.\n";
  cin >> fileName;
}
else {
  cout << "Please try again.\n";
  cout << "Please choose a primary color.\n";
  cin >> fileName;
  break;
}
do {
  if (fileName == "Red" || fileName == "Blue" || fileName == "Yellow")
  {
    break;
  }
  else {
    break;
  }

}while (response == "Yes");

}while (response != "Yes");
if (fileName == "Red" || fileName == "Blue" || fileName == "Yellow"){
cout << "You chose " << fileName << " and here is the list of colors that are suitable: "; }
else {
  cout << "Sorry. Based on your response we were unable to open file.\n";
}

 file.open(fileName.c_str());
 
 if( file.is_open()){

 while(getline(file, variable)){
 
 cout<< variable << "\n";
 }

 }
 cout << "Good job on selecting your first color. Here is a list of additional colors that you can add to your palette: \n";
  std::list<std::string> list = { "Yellow", "Orange", "Purple" };
    print(list);
{
  Primary rect;
rect.set_values (3,3);
cout <<"And finally, here is the amount of primary and secondary colors listed in the pallette: " << rect.amount();
}

  return 0;
}

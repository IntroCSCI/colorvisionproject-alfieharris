Primary Color Pallette Generator

## Description

Takes a primary color input from user and gives additional colors which can be used in the pallette.

### v0.2 Updates

Completely changed original coding, now having primary color files as well as lists containing the secondary colors.

### v1.0 Updates

Added class which details the amount of primary and secondary colors the user has in their pallette at the end of the program.


## Developer

Alfie Harris

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hello and welcome to the pallette generator program.
Now, let's get started.
Would you like to begin?
Yes
Please choose a primary color.
Blue
You chose Blue and here is the list of colors that are suitable: Red and Yellow
Good job on selecting your first color. Here is a list of additional colors that you can add to your palette: 
Yellow
Orange
Purple
```

## C++ Guide

### Variables and Data Types

I used fileName to establish which primary color is being chosen as well as which of the primary color files are being opened. "Response" is stringed as a simple starter for the loop, and "Variable" is stringed to get the lines from the primary color files.

### Console Input and Output

The program uses several instances of input from the user and output from the program. The User is first asked if they would like to begin the program. They are then prompted to give a primary color, in which the program then uses that input to open the primary color file in which the user chose to give the other two colors that would be suitable in a pallette.

### Decisions

The program uses several if and else statements to advance the program through the loop based on whether or not the user was able to respond correctly to the primary color input lines.

### Iteration

The program uses two "do/while" loops, where if the user enters the correct responses they will advance through the loop, but if they enter the incorrect type of response, they will be looped back to the original question.

### File Input and Output

The program has a feature where based on the user's input, it opens a file containing the two other primary colors that would be suitable with the user's initial response. 

### Arrays/Vectors

The program has a vector containing all the colors available, called at the beginning of the program.

### Functions

The program uses a void function to push a list out containing secondary colors which would be suitable to the user's original input.

### Classes

The class uses a simple Color.cpp and Color.h to declare the variables and call out new functions in the public and private areas of the code. The public calls the function, and adds up the number of primary and secondary colors, which is then outputted in the main code.

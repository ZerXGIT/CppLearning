#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numbers>
#include <ctime>
#include <cmath>

using namespace std;

// Global variable
int globalVar = 187;

// A variable that can not be changed on Runtime
const double PI = 3.14159265359;

void printPi() {
    //Prints a formatted String
    printf("Formatted PI: %.4f", PI);
}

int main(int argc, char** argv) {

    // Prints "Hello World!" to console and ends line
    cout << "Hello World! " << endl;

    string q1 = "Enter a Number :  ";
    string num1;


    //Prints string to console
    cout << q1;

    // User Input
    cin >> num1;

    //Convert the string to a Number
    int cNum1 = stoi(num1);

    // Prints the Number the user has entered
    cout << "\nYou entered the Number: " << cNum1 << endl;


    // Create a 2D Array
    int board[3][3] = {3,3,3,
                       3,3,3,
                       3,3,3};


    //Prints Pi
    printPi();


    return 0;
}
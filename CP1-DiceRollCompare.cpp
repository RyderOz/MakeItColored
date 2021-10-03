// CP1-DiceRollCompare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main()
{
    // Found some of this online on daniweb and repurposed it as it seemed to do something similar to what you were asking for. Couldnt figure out what you wanted me to do with an input and output file tho.
    HANDLE hConsole;
     int s;
     int f;
     int n;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     for (s = 2 + 0*16; s < 2; s++);
     for (f = 4 + 0 * 16; f < 4; f++);
     for (n = 15 + 0 * 16; n < 15; f++);

    string player1;
    cout << "Type in your name:" << endl;
    cin >> player1;
    
    string player2;
    cout << "Type in your name:" << endl;
    cin >> player2;

    // Just stole the code from my C3P2 program here. so it has the same function just different values
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 20;
    int die1;
    int die2;

    cout << "Rolling the dice for " << player1 << endl;
    die1 = (rand() % (MAX_VALUE - MIN_VALUE)) + MIN_VALUE;

    int win = 20;
    int lose = 1;

    if (die1 == 20) {
        SetConsoleTextAttribute(hConsole, s);
        cout << s << player1 << " rolled a 20. you got a crit success!" << endl;
        SetConsoleTextAttribute(hConsole, n);
    }
    else if (die1 == 1) {
        SetConsoleTextAttribute(hConsole, f);
        cout << f << player1 << " rolled a 1. you got a crit Failure!" << endl;
        SetConsoleTextAttribute(hConsole, n);
    }
    else {
        cout << player1 << " rolled a " << die1 << endl;
    }

    cout << "Rolling the dice for " << player2 << endl;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE)) + MIN_VALUE;

    if (die2 == 20) {
        SetConsoleTextAttribute(hConsole, s);
        cout << s << player2 << " rolled a 20. you got a crit success!" << endl;
        SetConsoleTextAttribute(hConsole, n);
    }
    else if (die2 == 1) {
        SetConsoleTextAttribute(hConsole, f);
        cout << f << player2 << " rolled a 0. you got a crit Failure!" << endl;
        SetConsoleTextAttribute(hConsole, n);
    }
    else {
        cout << player2 << " rolled a " << die2 << endl << endl;
    }

    if (die1 > die2) {
        cout << player1 << " wins";
    } else {
        cout << player2 << " wins";
    }


}
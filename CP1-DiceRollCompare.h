#pragma once

int main()
{

    HANDLE hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (k = 1; k < 255; k++)

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
        SetConsoleTextAttribute(hConsole, k);
        cout << k << player1 << " rolled a " << die1 << ".you got a crit success!" << endl;
    }
    else if (die1 == 1) {
        cout << player1 << " rolled a " << die1 << ". you got a crit Failure!" << endl;
    }
    else {
        cout << player1 << " rolled a " << die1 << endl;
    }

    cout << "Rolling the dice for " << player2 << endl;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE)) + MIN_VALUE;

    if (die2 == 20) {
        cout << player2 << " rolled a " << die2 << ". you got a crit success!" << endl;
    }
    else if (die2 == 1) {
        cout << player2 << " rolled a " << die2 << ". you got a crit Failure!" << endl;
    }
    else {
        cout << player2 << " rolled a " << die2 << endl << endl;
    }

    if (die1 > die2) {
        cout << player1 << " wins";
    }
    else {
        cout << player2 << " wins";
    }


}

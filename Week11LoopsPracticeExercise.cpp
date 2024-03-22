// Week11LoopsPracticeExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Program Name: Files ~ Practice 
// Program Description: Tracks client's expenses from buying items from store.

#include <iostream>
#include<fstream>
int spendingAmt, totalSpending = 0;
using namespace std;

    int main() {
        string name;
        int spendingAmt;
        ifstream readFile("clients.txt");

        while (!readFile.eof())
        {
            readFile >> name;
            cout << endl << name << " ";
            for (int i = 0; i < 3; i++) {
                readFile >> spendingAmt;
                cout << spendingAmt << " ";
            }

        }
        /*Displays the output*/
        cout << "\n" << name << "spent $" << totalSpending << "in Total.";
        cout << endl << endl;
        system("pause");
        return 0;
    }
}


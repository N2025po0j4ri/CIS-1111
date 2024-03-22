// Exercise10.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Nirupama Poojari
// Date: 3/21/2023
// Program Name: Exercise 11
// Program Description: Reads data from a text file and searches for 2 words entered by the user. Counts 
// how many times each word entered by the user is found in the text file. Finally, output the results of the search to both
// the screen and to an output text file.


#include <iostream>
#include <fstream>
using namespace std;

int main() 
{ //main starts here
    string word1 = "", word2 = "", word = "";
    int count1 = 0, count2 = 0;
    ifstream wordData;
    wordData.open("message.txt"); // open message data file 
    cout << "What is the first keyword to search for? ";
    cin >> word1;
    cout << "\nWhat is the second keyword to search for? ";
    cin >> word2;
    while (!wordData.eof()) { // while loop starts here
        wordData >> word;

        if(word == word1) { // if starts
            count1++;
        }
        else if (word == word2) { // else if starts
            count2++;
        } // else if ends
    } // while loop ends here

    cout << "\nThe keyword " << word1 << " was found " << count1 << " times and " << word2 << " was found " << count2 << " times.\n";
    wordData.close(); // close message data file 
    ofstream resultData;
    resultData.open("results.txt");  // Open or create results file
    resultData << "The keyword " << word1 << " was found " << count1 << " times.\n";
    resultData << "The keyword " << word2 << " was found " << count2 << " times.";

    resultData.close(); // Close results file
    return 0;
} // main() ends here


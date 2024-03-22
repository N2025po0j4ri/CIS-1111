// Name: Nirupama Poojari
// Date: 2/24/2023
// Program Name: Exercise701 Relational Operators
// Program Description: Displays a user prompt for guessing the price of prizes and uses relational operators to figure out the price of prizes. 

#include <iostream>
#include <cmath>
using namespace std;

int main() { // main starts here 
    //Variables are declared and initialized below

    string prize1 = "Apple Airbuds", prize2 = "Opera tickets", prize3 = "Alaska cruise trip"; 
    string prize4 = "Bali 5-star resort";
    int prizeNumber;
    int prizeNum1 = 1, prizeNum2 = 2, prizeNum3 = 3, prizeNum4 = 4;
    float prize1Price = 99.99, prize2Price = 150.00, prize3Price = 950.00, prize4Price = 1200.00, priceGuess;
    float guessAllowance1 = 0.12, guessAllowance2 = 0.10, guessAllowance3 = 0.05, guessAllowance4 = 0.0;
    float prize1PriceMiniGuess, prize1PriceMaxGuess, prize2PriceMiniGuess, prize2PriceMaxGuess;
    float prize3PriceMiniGuess, prize3PriceMaxGuess, prize4PriceMiniGuess, prize4PriceMaxGuess;
    prize1PriceMiniGuess = prize1Price * (1.0 - guessAllowance1); 
    prize1PriceMaxGuess = prize1Price * (1.0 + guessAllowance1);
    prize2PriceMiniGuess = prize2Price * (1.0 - guessAllowance1);
    prize2PriceMaxGuess = prize2Price * (1.0 + guessAllowance1);
    prize3PriceMiniGuess = prize3Price * (1.0 - guessAllowance3);
    prize3PriceMaxGuess = prize3Price * (1.0 + guessAllowance3);
    prize4PriceMiniGuess = prize4Price * (1.0 - guessAllowance4);
    prize4PriceMaxGuess = prize4Price * (1.0 + guessAllowance4);

    cout << "*~*~*~ Welcome to The Price is Close-Enough! ~*~*~\n\n"; // Displays the menu options 

    cout << "1. 1 pair of Apple Airbuds\n";
    cout << "2. A 5 pack of tickets to the Opera\n";
    cout << "3. An all-expense cruise to Alaska\n";
    cout << "4. One week at a 5-star resort in Bali\n";

    cout << "\nPlease enter the number for the prize you wish to guess the price of: "; // Prompt for prize number
    cin >> prizeNumber;
    
    if (prizeNumber == prizeNum1) { // if starts
        cout << "\nWhat is your price guess for " << prize1 << "? $"; // Prompt for price guess
        cin >> priceGuess;
        if (priceGuess >= prize1PriceMiniGuess && priceGuess <= prize1PriceMaxGuess) { // if starts
            cout << "\nCongratulations - your guess was close enough! You WIN!\n"; // Displays congragulations for price within limits
        } else { // else starts
            cout << "\nSorry, your guess was not close enough, the actual price for this item is $" << prize1Price <<"\n"; // Display a fail
        } // if-else ends
    }
    else if (prizeNumber == prizeNum2) { // else-if starts
        cout << "\nWhat is your price guess for " << prize2 << "? $";
        cin >> priceGuess;
        if (priceGuess >= prize2PriceMiniGuess && priceGuess <= prize2PriceMaxGuess) { // if starts
            cout << "\nCongratulations - your guess was close enough! You WIN!\n";
        } else { // else starts
            cout << "\nSorry, your guess was not close enough, the actual price for this item is $" << prize2Price << "\n";
        } // if-else ends
    } else if (prizeNumber == prizeNum3) { // else-if starts
        cout << "\nWhat is your price guess for " << prize3 << "? $";
        cin >> priceGuess;
        if (priceGuess >= prize3PriceMiniGuess && priceGuess <= prize3PriceMaxGuess) { // if starts
            cout << "\nCongratulations - your guess was close enough! You WIN!\n";
        } else { // else starts
            cout << "\nSorry, your guess was not close enough, the actual price for this item is $" << prize3Price << "\n";
        } // if-else ends
    } else if (prizeNumber == prizeNum4) { // else if starts
        cout << "\nWhat is your price guess for " << prize4 << "? $"; // prompt for prize 4
        cin >> priceGuess;
        if (priceGuess >= prize4PriceMiniGuess && priceGuess <= prize4PriceMaxGuess) { // if starts
            cout << "\nCongratulations - your guess was close enough! You WIN!\n";
        } else { // if-else starts
            cout << "\nSorry, your guess was not close enough, the actual price for this item is $" << prize4Price << "\n";
        } // if-else ends
    } // if-else-if chain ends

    return 0; 
} // main() ends



// Name: Nirupama Poojari
// Date: 2/17/2023
// Program Name: Exercise601 
// Description: Inputs survey information from customers who will watch a movie. 

#include <iostream> 
#include <iomanip> 
using namespace std; 


int main() // main starts
{
   
    int movieNumber, age; // movieNumber and age are declared as integer variables
    char choice; // choice variable is declared
    choice = 'Y'; // choice is assigned 'Y' for yes
    string movie1 = "Aladdin", movie2 = "Jumanji", movie3 = "Mrs.Doubtfire", movie4 = "The Birdcase"; // All four movies are declared
    string movie1Rate = "(G)", movie2Rate = "(PG)", movie3Rate = "(PG - 13)", movie4Rate = "(R)"; // All four movie rates are declared

    cout << "Welcome to the Theater\n\n"; // Should print two newlines

    cout << "We are currently showing the following films:\n"; // Following films are displayed

    cout << "1. " << movie1 << " " << movie1Rate << "\n"; // Displays movie 1 and standard movie rating
    cout << "2. " << movie2 << " " << movie2Rate << "\n"; // Displays movie 2 and standard movie rating
    cout << "3. " << movie3 << " " << movie3Rate << "\n"; // Displays movie 3 and standard movie rating
    cout << "4. " << movie4 << " " << movie4Rate << "\n"; // Displays movie 4 and standard movie rating


    cout << "\nEnter the number of the movie you would like to see: "; // Prompt for user to enter movie number
    cin >> movieNumber; // Enters the number of the movie
    cout << "\n\nWhat is your age in years? "; // Prompts to enter age in years
    cin >> age; // Input for age
    /*if statements */

    if (movieNumber == 1) { // if movieNumber is 1
        cout << "\nYou have selected " << movie1 << "\n\nGreat! Enjoy your film\n"; 
    }
    else if (movieNumber == 2) { // if movieNumber is 2
        cout << "\nYou have selected " << movie2; // Prints you have selected
        cout << " - does a parent know you are seeing this? Enter Y for yes or N for no. "; 
        cin >> choice; // Enters choice
        if (choice == 'Y') { // If choice is 'Y'
            cout << "\n\nGreat! Enjoy your film\n"; // Displays Great and enjoys film
        }
        else { // Checks if 'Y' is not inputted
            cout << "\nSorry, you must have parent permission to see this film.\n";
            } // if-else ends
    } // Where if/else if statement ends
    else if (movieNumber == 3) {  // else if starts
        if (age > 13) { // if starts
            cout << "You have selected " << movie3;
            cout << "\n\nGreat! Enjoy your film\n";
        } 
        else { // else starts
            cout << "\nYou are not old enough to view this film alone. Is your parent with you? Enter Y for yes or N for no. ";
            cin >> choice;
            if (choice == 'Y') { // if starts
                cout << "\n\nGreat! Enjoy your film\n";
            }
            else { // else starts
                cout << "\nSorry, you must have a parent with you to see this film.\n";
            } // if else ends
        } // if-else ends

    } 
    else if (movieNumber == 4) { // else if starts
        
        if (age > 17) { // if starts
            cout << "\nYou have selected " << movie4;
            cout << "\n\nGreat! Enjoy your film\n";
        }
        else { // else starts
            cout << "\nYou are not old enough to view this film alone. Is your parent with you? Enter Y for yes or N for no. ";
            cin >> choice;
            if (choice == 'Y') { // if starts
                cout << "\n\nGreat! Enjoy your film\n";
            }
            else { 
                cout << "\nSorry, you must have a parent with you to see this film.\n";
            } // if-else ends
        } // if-else ends

    } // else if ends
    return 0; // Returns 0
} // main ends

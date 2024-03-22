// 16 Final Project.cpp 
// Name: Nirupama Poojari
// Date: 5/3/2023
// Program Name: Final Project - Home Music Inventory
// Description: Home inventory displaying artists, musical albums, songs, and album cost. 
// Calculates total cost of all the albums and average cost of the album.  
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
const int SIZE = 1000;
double average(double totalCost, int);
double sum(double arr[], int);
void artists(string, string, string, string, string);

int main()
{ // main starts here

    /*All variables are declared here*/

    string artistName, albumName, word = "";
    string artist1 = "Taylor_Swift";
    string artist2 = "Justin_Bieber";
    string artist3 = "Michael_Jackson";
    string artist4 = "Katy_Perry";
    string artist5 = "Post_Malone";
   
    
    int count = 0, num = 1;
    double albumCost[SIZE], averageCost = 0, totalCost = 0;
    char choice = 'A';
    int option = 1;
   do { // do starts here
        cout << "~~~ Home Music Inventory ~~~\n\n";
        cout << "1. List Artists\n";
        cout << "2. Display Artist Album Cost on the Console\n";
        cout << "3. Calculate Total Album Cost\n";
        cout << "4. Calculate Average Album Cost \n";
        cout << "5. Write Artist Album Costs to a file\n";
        cout << "6. Exit\n";
        cout << "\nSelect an option by entering 1-5, or 6 for Exit: ";
        cin >> choice;
        if (choice < '1' && choice >= '6') { // if starts here
            cout << "\nInvalid input. Please enter a valid input from 1-6.\n";
            cin >> choice;
        } // if ends here
        cin.clear();
        option = choice - '0';
        ifstream wordData;
        ofstream resultData;
        wordData.open("Artist Album Cost.txt");
        resultData.open("results.txt");
        resultData << "~~~ Home Music Inventory ~~~\n"; // Displays title
        resultData << "Artist Album Cost\n";
        resultData << num << " ";
        switch (option) { // switch starts here
        case 1:    
            cout << "\nList of Artists: \n";
            artists(artist1, artist2, artist3, artist4, artist5);

            break;
        case 2: 
            cout << num << " ";
            while (!wordData.eof()) { // while loop starts here
                count++;
                wordData >> word;
                if (count == 3) { // if starts here
                    cout << "$";
          
                    albumCost[num - 1] = stod(word);
                } // if ends here
                cout << word << " ";
                resultData << word << " ";
                if (count > 2) { // if starts here

                    if (!wordData.eof()) { // nested if starts here
                        cout << "\n";
          
                        num++;
                        cout << num << " ";
         
                    } // nested if ends here
                    count = 0;

                } // if ends here
            } // while loop ends here
            break;
        case 3: 
            while (!wordData.eof()) { // while loop starts here
                count++;
                wordData >> word;
                if (count == 3) { // if statements starts

                    albumCost[num - 1] = stod(word);
                } // if ends

                if (count > 2) { // outer if starts

                    if (!wordData.eof()) { // nested if starts
  
                        num++;
 
                    } // nested if ends
                    count = 0;

                } // outer if ends
            } // while loop ends here
            totalCost = sum(albumCost, num);
        
            cout << setprecision(2) << fixed;
            cout << "\n Total Album Cost: $" << totalCost << "\n";
       
            break;
        case 4:
            while (!wordData.eof()) { // while loop starts here
                count++;
                wordData >> word;
                if (count == 3) { // if starts
  
                    albumCost[num - 1] = stod(word);
                } // if ends

                if (count > 2) { // if starts

                    if (!wordData.eof()) { // nested if starts

                        num++;

                    } // nested if ends
                    count = 0;

                } // if ends
            } // while loop ends here
            totalCost = sum(albumCost, num);
            averageCost = average(totalCost, num);
            cout << setprecision(2) << fixed;
       
            cout << "\nAverage Album Cost :  $" << averageCost << "\n";
            break;
        case 5: 
            while (!wordData.eof()) { // while loop starts here
                count++;
                wordData >> word;
                if (count == 3) { // if starts
               
                    resultData << "$";
                    albumCost[num - 1] = stod(word);
                } // if ends
            
                resultData << word << " ";
                if (count > 2) { // if starts

                    if (!wordData.eof()) { // nested if starts
                    
                        resultData << "\n";
                        num++;
                    
                        resultData << num << " ";
                    } // nested if ends
                    count = 0;

                } // if ends
         
            } // while loop ends here
            cout << "\nAll artists and their albums with costs are written to results.txt file.\n"; // Clarifies that info is written to file.
            totalCost = sum(albumCost, num);
            averageCost = average(totalCost, num);
            resultData << setprecision(2) << fixed;
            resultData << "\nTotal Album Cost: $" << totalCost << "\n";
            resultData << "\nAverage Album Cost :  $" << averageCost << "\n";
            break;
        case 6: 
            break;
        default:
            cout << "\nInvalid input. Please enter a valid input from 1-6.\n";
            break;
    
        } // switch ends

        wordData.close();
        resultData.close();
        cout << "\n";
        } while (option != 6); // do while ends

    return 0;

} // main ends

void artists(string art1, string art2, string art3, string art4, string art5) { //artists function starts
   cout << art1 << "\n";
   cout << art2 << "\n";
   cout << art3 << "\n";
   cout << art4 << "\n";
   cout << art5 << "\n";
} // artists function ends here

double sum(double arr[], int num) { // sum function starts
    double retSum = 0;
    for (int i = 0; i < num; i++) { // for-loop starts
        retSum += arr[i];
    } // for-loop ends
    return retSum;
} // sum function ends here


double average(double totalSum, int num) { // average function starts
    double retAverage = 0;
    retAverage = totalSum / num;
    return retAverage;
} // average function ends here
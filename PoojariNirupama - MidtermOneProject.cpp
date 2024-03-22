// PoojariNirupama - MidtermOneProject.cpp 
// Name: Nirupama Poojari
// Date: 3/4/2023
// Program Name: Restaurant Menu Program
// Program Description: Beverages and breakfast orders and billing.
// Data from: menuwithprices.com for McDonalds

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() 
{   // main starts here
    // Variables are declared and intialized
    string breakfast1 = "Bacon, Egg & Cheese Biscuit";
    string breakfast2 = "Egg McMuffin";
    string breakfast3 = "Sausage McMuffin";
    string breakfast4 = "Sausage McMuffin with Egg";
    string breakfast5 = "Sausage Biscuit";
    string breakfast6 = "Sausage Biscuit with Egg";
    string breakfast7 = "Bacon, Egg & Cheese McGriddles";
    string breakfast8 = "Sausage McGriddles";
    string breakfast9 = "Sausage, Egg & Cheese McGriddles";
    string breakfast10 = "Big Breakfast";
    string breakfast11 = "Big Breakfast with Hotcakes";
    string breakfast12 = "Hotcakes";
    string breakfast13 = "Hotcakes and Sausage";
    string breakfast14 = "Sausage Burrito";
    string breakfast15 = "Hash Browns";
    string breakfast16 = "Fruit & Maple Oatmeal";
    string breakfast17 = "Big Mac";
    string breakfast18 = "Quarter Pounder with Cheese";
    string breakfast19 = "Double Quarter Pounder with Cheese";
    string breakfast20 = "Quarter Pounder with Cheese Deluxe";
    string breakfast21 = "McDouble";
    string breakfast22 = "Quarter Pounder with Cheese Bacon";
    string breakfast23 = "Cheeseburger";
    string breakfast24 = "Double Cheeseburger";
    string breakfast25 = "Hamburger The Classic McDonald's Burger";

    string beverage1 = "Small Strawberry Watermelon Slushie";
    string beverage2 = "Medium Strawberry Watermelon Slushie";
    string beverage3 = "Large Strawberry Watermelon Slushie";
    string beverage4 = "Small Tropical Mango Slushie";
    string beverage5 = "Medium Tropical Mango Slushie";
    string beverage6 = "Large Tropical Mango Slushie";
    string beverage7 = "Small Coca-Cola";
    string beverage8 = "Medium Coca-Cola";
    string beverage9 = "Large Coca-Cola";
    string beverage10 = "Small Diet Coke";
    string beverage11 = "Medium Diet Coke";
    string beverage12 = "Large Diet Coke";
    string beverage13 = "Small Sprite";
    string beverage14 = "Medium Sprite";
    string beverage15 = "Large Sprite";
    string beverage16 = "Small Fanta Orange";
    string beverage17 = "Medium Fanta Orange";
    string beverage18 = "Large Fanta Orange";
    string beverage19 = "Small Sweet Tea";
    string beverage20 = "Medium Sweet Tea";
    string beverage21 = "Large Sweet Tea";
    string beverage22 = "Small Unsweetened Iced Tea";
    string beverage23 = "Medium Unsweetened Iced Tea";
    string beverage24 = "Large Unsweetened Iced Tea";
    string beverage25 = "DASANI Water";
    string beverage26 = "Small Minute Maid Orange Juice";
    string beverage27 = "Medium Minute Maid Orange Juice";
    string beverage28 = "Large Minute Maid Orange Juice";
    string beverage29 = "Small Strawberry Banana Smoothie";
    string beverage30 = "Medium Strawberry Banana Smoothie";
    string beverage31 = "Large Strawberry Banana Smoothie";
    string beverage32 = "Small Mango Pineapple Smoothie";
    string beverage33 = "Medium Mango Pineapple Smoothie";
    string beverage34 = "Large Mango Pineapple Smoothie";
    string beverage35 = "Small Hot Chocolate";
    string beverage36 = "Medium Hot Chocolate";
    string beverage37 = "Large Hot Chocolate";
    string beverage38 = "Small Hot Tea";
    string beverage39 = "Medium Hot Tea";
    string beverage40 = "Large Hot Tea";

    double breakfastPrice1 = 6.09;
    double breakfastPrice2 = 5.79;
    double breakfastPrice3 = 3.39;
    double breakfastPrice4 = 5.79;
    double breakfastPrice5 = 3.29;
    double breakfastPrice6 = 5.79;
    double breakfastPrice7 = 5.99;
    double breakfastPrice8 = 3.99;
    double breakfastPrice9 = 5.89;
    double breakfastPrice10 = 7.19;
    double breakfastPrice11 = 8.39;
    double breakfastPrice12 = 5.59;
    double breakfastPrice13 = 6.69;
    double breakfastPrice14 = 3.19;
    double breakfastPrice15 = 2.69;
    double breakfastPrice16 = 1.99;
    double breakfastPrice17 = 7.39;
    double breakfastPrice18 = 7.09;
    double breakfastPrice19 = 9.79;
    double breakfastPrice20 = 9.09;
    double breakfastPrice21 = 3.89;
    double breakfastPrice22 = 9.59;
    double breakfastPrice23 = 3.49;
    double breakfastPrice24 = 3.99;
    double breakfastPrice25 = 3.39;

    double beveragePrice1 = 4.19;
    double beveragePrice2 = 4.39;
    double beveragePrice3 = 4.79;
    double beveragePrice4 = 4.19;
    double beveragePrice5 = 4.39;
    double beveragePrice6 = 4.79;
    double beveragePrice7 = 2.29;
    double beveragePrice8 = 2.79;
    double beveragePrice9 = 3.59;
    double beveragePrice10 = 2.29;
    double beveragePrice11 = 2.79;
    double beveragePrice12 = 3.59;
    double beveragePrice13 = 2.29;
    double beveragePrice14 = 2.79;
    double beveragePrice15 = 3.59;
    double beveragePrice16 = 2.29;
    double beveragePrice17 = 2.79;
    double beveragePrice18 = 3.59;
    double beveragePrice19 = 2.29;
    double beveragePrice20 = 2.79;
    double beveragePrice21 = 3.59;
    double beveragePrice22 = 2.29;
    double beveragePrice23 = 2.79;
    double beveragePrice24 = 3.59;
    double beveragePrice25 = 3.08;
    double beveragePrice26 = 3.19;
    double beveragePrice27 = 3.89;
    double beveragePrice28 = 4.09;
    double beveragePrice29 = 2.39;
    double beveragePrice30 = 2.89;
    double beveragePrice31 = 3.39;
    double beveragePrice32 = 2.39;
    double beveragePrice33 = 2.89;
    double beveragePrice34 = 3.39;
    double beveragePrice35 = 2.39;
    double beveragePrice36 = 2.89;
    double beveragePrice37 = 3.39;
    double beveragePrice38 = 1.39;
    double beveragePrice39 = 1.59;
    double beveragePrice40 = 1.79;

    int counter = 0, beverageOption = 0, breakfastOption = 0;
    char senior = 'N';
    string beverage, breakfast;
    double beveragePrice = 0.0, breakfastPrice = 0.0, subTotal = 0.0, discount = 0.0, tax = 0.0, total = 0.0;
    const double TAX_RATE = 0.075, SENIOR_DISCOUNT = 0.05;

    cout << "~~~ Welcome to Breakfast and Beverages Restaurant! ~~~\n"; 
    cout << " \nBreakfast Menu\n"; // Displays breakfast menu
    cout << (counter += 1) << ". " << breakfast1 << ": $" << breakfastPrice1 << "\n";
    cout << (counter += 1) << ". " << breakfast2 << ": $" << breakfastPrice2 << "\n";
    cout << (counter += 1) << ". " << breakfast3 << ": $" << breakfastPrice3 << "\n";
    cout << (counter += 1) << ". " << breakfast4 << ": $" << breakfastPrice4 << "\n";
    cout << (counter += 1) << ". " << breakfast5 << ": $" << breakfastPrice5 << "\n";
    cout << (counter += 1) << ". " << breakfast6 << ": $" << breakfastPrice6 << "\n";
    cout << (counter += 1) << ". " << breakfast7 << ": $" << breakfastPrice7 << "\n";
    cout << (counter += 1) << ". " << breakfast8 << ": $" << breakfastPrice8 << "\n";
    cout << (counter += 1) << ". " << breakfast9 << ": $" << breakfastPrice9 << "\n";
    cout << (counter += 1) << ". " << breakfast10 << ": $" << breakfastPrice10 << "\n";
    cout << (counter += 1) << ". " << breakfast11 << ": $" << breakfastPrice11 << "\n";
    cout << (counter += 1) << ". " << breakfast12 << ": $" << breakfastPrice12 << "\n";
    cout << (counter += 1) << ". " << breakfast13 << ": $" << breakfastPrice13 << "\n";
    cout << (counter += 1) << ". " << breakfast14 << ": $" << breakfastPrice14 << "\n";
    cout << (counter += 1) << ". " << breakfast15 << ": $" << breakfastPrice15 << "\n";
    cout << (counter += 1) << ". " << breakfast16 << ": $" << breakfastPrice16 << "\n";
    cout << (counter += 1) << ". " << breakfast17 << ": $" << breakfastPrice17 << "\n";
    cout << (counter += 1) << ". " << breakfast18 << ": $" << breakfastPrice18 << "\n";
    cout << (counter += 1) << ". " << breakfast19 << ": $" << breakfastPrice19 << "\n";
    cout << (counter += 1) << ". " << breakfast20 << ": $" << breakfastPrice20 << "\n";
    cout << (counter += 1) << ". " << breakfast21 << ": $" << breakfastPrice21 << "\n";
    cout << (counter += 1) << ". " << breakfast22 << ": $" << breakfastPrice22 << "\n";
    cout << (counter += 1) << ". " << breakfast23 << ": $" << breakfastPrice23 << "\n";
    cout << (counter += 1) << ". " << breakfast24 << ": $" << breakfastPrice24 << "\n";
    cout << (counter += 1) << ". " << breakfast25 << ": $" << breakfastPrice25 << "\n";

    cout << "\nPlease enter option number for your breakfast: ";  //Prompt breakfast choice number
    cin >> breakfastOption;  //Input for breakfast option

    switch (breakfastOption) {  // switch for breakfast option starts here
         case 1: breakfast = breakfast1;
            breakfastPrice = breakfastPrice1;
            break;
         case 2: breakfast = breakfast2;
             breakfastPrice = breakfastPrice2;
             break;
         case 3: breakfast = breakfast3;
             breakfastPrice = breakfastPrice3;
             break;
         case 4: breakfast = breakfast4;
             breakfastPrice = breakfastPrice4;
             break;
         case 5: breakfast = breakfast5;
             breakfastPrice = breakfastPrice5;
             break; 
         case 6: breakfast = breakfast6;
             breakfastPrice = breakfastPrice6;
             break; 
         case 7: breakfast = breakfast7;
             breakfastPrice = breakfastPrice7;
             break; 

         case 8: breakfast = breakfast8;
             breakfastPrice = breakfastPrice8;
             break; 

         case 9: breakfast = breakfast9;
             breakfastPrice = breakfastPrice9;
             break; 

         case 10: breakfast = breakfast10;
             breakfastPrice = breakfastPrice10;
             break; 

         case 11: breakfast = breakfast11;
             breakfastPrice = breakfastPrice11;
             break; 

         case 12: breakfast = breakfast12;
             breakfastPrice = breakfastPrice12;
             break; 

         case 13: breakfast = breakfast13;
             breakfastPrice = breakfastPrice13;
             break; 

         case 14: breakfast = breakfast14;
             breakfastPrice = breakfastPrice14;
             break; 

         case 15: breakfast = breakfast15;
             breakfastPrice = breakfastPrice15;
             break; 

         case 16: breakfast = breakfast16;
             breakfastPrice = breakfastPrice16;
             break; 

         case 17: breakfast = breakfast17;
             breakfastPrice = breakfastPrice17;
             break; 

         case 18: breakfast = breakfast18;
             breakfastPrice = breakfastPrice18;
             break; 

         case 19: breakfast = breakfast19;
             breakfastPrice = breakfastPrice19;
             break; 

         case 20: breakfast = breakfast20;
             breakfastPrice = breakfastPrice20;
             break;

         case 21: breakfast = breakfast21;
             breakfastPrice = breakfastPrice21;
             break; 

         case 22: breakfast = breakfast22;
             breakfastPrice = breakfastPrice22;
             break; 

         case 23: breakfast = breakfast23;
             breakfastPrice = breakfastPrice23;
             break; 
       
         case 24: breakfast = breakfast24;
             breakfastPrice = breakfastPrice24;
             break;
              
         case 25: breakfast = breakfast25;
             breakfastPrice = breakfastPrice25;
             break;

         default: 
             cout << "Unfortunately, your option was not on the menu. Please try again";

    }   // Switch for breakfast option ends here
    cout << "\nYou chose:  " << breakfast << "  $" << breakfastPrice << "\n\n"; // Displays the breakfast selection  

    counter = 0; // Counter resets to 0
    cout << " \nBeverage Menu\n"; // Displays beverage menu
    cout << (counter += 1) << ". " << beverage1 << ": $" << beveragePrice1 << "\n";
    cout << (counter += 1) << ". " << beverage2 << ": $" << beveragePrice2 << "\n";
    cout << (counter += 1) << ". " << beverage3 << ": $" << beveragePrice3 << "\n";
    cout << (counter += 1) << ". " << beverage4 << ": $" << beveragePrice4 << "\n";
    cout << (counter += 1) << ". " << beverage5 << ": $" << beveragePrice5 << "\n";
    cout << (counter += 1) << ". " << beverage6 << ": $" << beveragePrice6 << "\n";
    cout << (counter += 1) << ". " << beverage7 << ": $" << beveragePrice7 << "\n";
    cout << (counter += 1) << ". " << beverage8 << ": $" << beveragePrice8 << "\n";
    cout << (counter += 1) << ". " << beverage9 << ": $" << beveragePrice9 << "\n";
    cout << (counter += 1) << ". " << beverage10 << ": $" << beveragePrice10 << "\n";
    cout << (counter += 1) << ". " << beverage11 << ": $" << beveragePrice11 << "\n";
    cout << (counter += 1) << ". " << beverage12 << ": $" << beveragePrice12 << "\n";
    cout << (counter += 1) << ". " << beverage13 << ": $" << beveragePrice13 << "\n";
    cout << (counter += 1) << ". " << beverage14 << ": $" << beveragePrice14 << "\n";
    cout << (counter += 1) << ". " << beverage15 << ": $" << beveragePrice15 << "\n";
    cout << (counter += 1) << ". " << beverage16 << ": $" << beveragePrice16 << "\n";
    cout << (counter += 1) << ". " << beverage17 << ": $" << beveragePrice17 << "\n";
    cout << (counter += 1) << ". " << beverage18 << ": $" << beveragePrice18 << "\n";
    cout << (counter += 1) << ". " << beverage19 << ": $" << beveragePrice19 << "\n";
    cout << (counter += 1) << ". " << beverage20 << ": $" << beveragePrice20 << "\n";
    cout << (counter += 1) << ". " << beverage21 << ": $" << beveragePrice21 << "\n";
    cout << (counter += 1) << ". " << beverage22 << ": $" << beveragePrice22 << "\n";
    cout << (counter += 1) << ". " << beverage23 << ": $" << beveragePrice23 << "\n";
    cout << (counter += 1) << ". " << beverage24 << ": $" << beveragePrice24 << "\n";
    cout << (counter += 1) << ". " << beverage25 << ": $" << beveragePrice25 << "\n";
    cout << (counter += 1) << ". " << beverage26 << ": $" << beveragePrice26 << "\n";
    cout << (counter += 1) << ". " << beverage27 << ": $" << beveragePrice27 << "\n";
    cout << (counter += 1) << ". " << beverage28 << ": $" << beveragePrice28 << "\n";
    cout << (counter += 1) << ". " << beverage29 << ": $" << beveragePrice29 << "\n";
    cout << (counter += 1) << ". " << beverage30 << ": $" << beveragePrice30 << "\n";
    cout << (counter += 1) << ". " << beverage31 << ": $" << beveragePrice31 << "\n";
    cout << (counter += 1) << ". " << beverage32 << ": $" << beveragePrice32 << "\n";
    cout << (counter += 1) << ". " << beverage33 << ": $" << beveragePrice33 << "\n";
    cout << (counter += 1) << ". " << beverage34 << ": $" << beveragePrice34 << "\n";
    cout << (counter += 1) << ". " << beverage35 << ": $" << beveragePrice35 << "\n";
    cout << (counter += 1) << ". " << beverage36 << ": $" << beveragePrice36 << "\n";
    cout << (counter += 1) << ". " << beverage37 << ": $" << beveragePrice37 << "\n";
    cout << (counter += 1) << ". " << beverage38 << ": $" << beveragePrice38 << "\n";
    cout << (counter += 1) << ". " << beverage39 << ": $" << beveragePrice39 << "\n";
    cout << (counter += 1) << ". " << beverage40 << ": $" << beveragePrice40 << "\n";

    cout << "\nPlease enter your beverage option number: "; // Prompts Beverage Choice Number
    cin >> beverageOption; // Input beverage option number

    switch (beverageOption) { // Switch for beverage option starts here
    case 1: beverage = beverage1;
        beveragePrice = beveragePrice1;
        break;
    case 2: beverage = beverage2;
        beveragePrice = beveragePrice2;
        break; 

    case 3: beverage = beverage3;
        beveragePrice = beveragePrice3;
        break;

    case 4: beverage = beverage4;
        beveragePrice = beveragePrice4;
        break; 

    case 5: beverage = beverage5;
        beveragePrice = beveragePrice5;
        break; 

    case 6: beverage = beverage6;
        beveragePrice = beveragePrice6;
        break;

    case 7: beverage = beverage7;
        beveragePrice = beveragePrice7;
        break;

    case 8: beverage = beverage8;
        beveragePrice = beveragePrice8;
        break;

    case 9: beverage = beverage9;
        beveragePrice = beveragePrice9;
        break;

    case 10: beverage = beverage10;
        beveragePrice = beveragePrice10;
        break;

    case 11: beverage = beverage11;
        beveragePrice = beveragePrice11;
        break;

    case 12: beverage = beverage12;
        beveragePrice = beveragePrice12;
        break;

    case 13: beverage = beverage13;
        beveragePrice = beveragePrice13;
        break;

    case 14: beverage = beverage14;
        beveragePrice = beveragePrice14;
        break;

    case 15: beverage = beverage15;
        beveragePrice = beveragePrice15;
        break;

    case 16: beverage = beverage16;
        beveragePrice = beveragePrice16;
        break; 

    case 17: beverage = beverage17;
        beveragePrice = beveragePrice17;
        break;

    case 18: beverage = beverage18;
        beveragePrice = beveragePrice18;
        break;

    case 19: beverage = beverage19;
        beveragePrice = beveragePrice19;
        break;

    case 20: beverage = beverage20;
        beveragePrice = beveragePrice20;
        break;

    case 21: beverage = beverage21;
        beveragePrice = beveragePrice21;
        break;

    case 22: beverage = beverage22;
        beveragePrice = beveragePrice22;
        break;

    case 23: beverage = beverage23;
        beveragePrice = beveragePrice23;
        break;

    case 24: beverage = beverage24;
        beveragePrice = beveragePrice24;
        break; 

    case 25: beverage = beverage25;
        beveragePrice = beveragePrice25;
        break;

    case 26: beverage = beverage26;
        beveragePrice = beveragePrice26;
        break;

    case 27: beverage = beverage27;
        beveragePrice = beveragePrice27;
        break; 

    case 28: beverage = beverage28;
        beveragePrice = beveragePrice28;
        break;

    case 29: beverage = beverage29;
        beveragePrice = beveragePrice29;
        break;

    case 30: beverage = beverage30;
        beveragePrice = beveragePrice30;
        break; 

    case 31: beverage = beverage31;
        beveragePrice = beveragePrice31;
        break;

    case 32: beverage = beverage32;
        beveragePrice = beveragePrice32;
        break; 

    case 33: beverage = beverage33;
        beveragePrice = beveragePrice33;
        break; 

    case 34: beverage = beverage34;
        beveragePrice = beveragePrice34;
        break; 

    case 35: beverage = beverage35;
        beveragePrice = beveragePrice35;
        break; 

    case 36: beverage = beverage36;
        beveragePrice = beveragePrice36;
        break; 

    case 37: beverage = beverage37;
        beveragePrice = beveragePrice37;
        break; 

    case 38: beverage = beverage38;
        beveragePrice = beveragePrice38;
        break; 

    case 39: beverage = beverage39;
        beveragePrice = beveragePrice39;
        break; 

    case 40: beverage = beverage40;
        beveragePrice = beveragePrice40;
        break;

    default: 
        cout << "Unfortunately, your choice is not found on the Beverage menu. Try again.";
    } // Switch for beverage option ends here
    cout << "\nYou chose:  " << beverage << "  $" << beveragePrice << "\n\n"; // Displays beverage selection 
    cout << "Are you a senior citizen? Enter Y for yes or N for no: "; // Prompts for senior citizenship 
    cin >> senior; // Senior citizen (Y for Yes or N for No) 
    subTotal = beveragePrice + breakfastPrice; // Calculates subtotal 
    if (senior == 'Y') { // Calculates discount for senior citizens 
        discount = subTotal * SENIOR_DISCOUNT;
    }
    else {
        discount = 0;
    }
    tax = (subTotal - discount) * TAX_RATE; // Tax calculation
    total = subTotal - discount + tax;  // Total bill calculation
    // Displays the Bill
    cout << "\n-------------------------------------------------\n";
    cout << "\n               Bill\n";
    cout << "-------------------------------------------------\n";
    cout << setw(40) << left <<"Item" << right <<"Price\n";
    cout << setw(40) << left << breakfast << right << "$" << setprecision(2) << fixed << breakfastPrice <<"\n";
    cout << setw(40) << left << beverage << right << "$" <<setprecision(2) << fixed << beveragePrice << "\n";
    cout << "-------------------------------------------------\n";
    cout << setw(40) << left <<"Subtotal" << right << "$" << setprecision(2) << fixed << subTotal << "\n";
    cout << setw(39) << left <<"Discount" << right << "-$" << setprecision(2) << fixed << discount << "\n";
    cout << setw(39) << left << "Sales Tax" << right << "+$" << setprecision(2) << fixed << tax << "\n";
    cout << "-------------------------------------------------\n";
    cout << setw(40) << left <<"Total" << right << "$" << setprecision(2) << fixed << total << "\n";
    cout << "-------------------------------------------------\n";

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int money, dollar,change, quarters, dimes, nickles, pennies;
    // int dollar = 0;

    cout << "Please enter the number of cents you want coins for: ";
    cin >> money;

    // for (int dollar = 0; money > 0; dollar++ ){
    //     if (money >= 100){
    //     dollar++;
    //     }
    // }

    // find the dollar
    dollar = money / 100;
    money = money % 100;

    //find number of quarters
    quarters = money / 25;
    money = money % 25;

    //find number of dimes
    dimes = money / 10;
    money = money % 10;

    //find number of nickles
    nickles = money / 5;
    money = money % 5;

    //find number of pennies
    pennies = money;
    
    change = (quarters * 25) + (dimes * 10) + (nickles * 5) + (pennies * 1);
    //output results
    cout<< "Your total equals " << dollar << "." << change << endl;

    cout << "Change displayed in descending order, these are the number of currencies considered in this equation. Have a nice day =)" << endl;
    cout << "-------------------------------" << endl;
    cout << "dollar : " << dollar << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickles << endl;
    cout << "pennies: " << pennies << endl;

return 0;
}

/* BELOW is a simplified version with the inverse input method of asking for what coins want to be added, then adding said number of currencies to a sum total. Will be adding solution with for loop later.


// int main()
// {
//     int dollar, quarters, dimes, nickels, total_cents;
//     dollar = 0;
//     cout << "Enter the number of quarters:\n";
//     cin >> quarters;
//     cout << "Enter the number of dimes:\n";
//     cin >> dimes;
//     cout << "Enter the number of nickels:\n";
//     cin >> nickels;

//     if (total_cents >= 100){
            dollar++
} 

//     total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5);

//     cout << "Your sum total is " << total_cents << " cents, congrats on adding to your savings have a nice day =)" << endl;

//     return 0;
// }
*/
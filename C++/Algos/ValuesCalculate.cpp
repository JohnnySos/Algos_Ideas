#include <iostream>
// #include <cmath>    ****Was going to include square root and use sqrt, not needed for power
using namespace std;

int main(){
    int firstNumber, secondNumber, addition, subtraction, multiplication, division, power;
    char response;
    cout << "Please input the first number you wish to use for this calculation :";
    cin >> firstNumber;
    // if (firstNumber == NULL){
    //     cout<<"Error please input number." << endl;
    //     return main();
    // }
    cout << "Please input the second number you wish to use for this calculation :";
    cin >> secondNumber;
// **** Begining of equation formulas; will later seprate by functions to be more organized
        addition = (firstNumber + secondNumber);
        subtraction = (firstNumber - secondNumber);
        multiplication = (firstNumber * secondNumber);
        division = (firstNumber / secondNumber);
        power = (pow(firstNumber,secondNumber));
    
    cout<<endl;
    cout << "Congratulations! Your results are below, thank you for using Johnny's quick calculator. Come back soon =)"<< "\n****Disclaimer*****This is basic calculator and it will not provide solutions in the decimals due to doing simple c++ mathematical equations and using C++ int****" << endl;

    cout << endl;
    cout << "The addition of "<<firstNumber<< " and " << secondNumber << " Is equal to " << addition << endl;
    cout << "The subtraction of "<<firstNumber<< " and " << secondNumber << " Is equal to " << subtraction << endl;
    cout << "The multiplication of "<<firstNumber<< " and " << secondNumber << " Is equal to " << multiplication << endl;
    cout << "The division of "<<firstNumber<< " and " << secondNumber << " Is equal to " << division << endl;
    cout << "The power of "<<firstNumber<< " to the " << secondNumber << " Is equal to " << power << endl;
    cout<< endl;

    // cout<< "If you would like to solve another problem type: Y\nIf you are done type: N"<< endl;
    // cin >> response;

    // if (response == 'Y' || 'y'){
    //     cout<<"Sounds good, lets go Back =) "<< endl;
    //     return main();
    // }

    // else if ( response == 'N' || 'n'){
    //     cout<<"Have a nice day! =) " <<endl;
    //     // return 0;
    // }

    // else if (response != 'Y' || 'y' || 'N' || 'n'){
    //     cout<<"*** ERROR ***\nInvalid character, you will now be exited, Have a nice day"<<endl;
    //     // break;
    // }
    
    // else {
    //     cout<<"Dont try to cheat me, I am all powerful, all seeing.";
    // }
    
return 0;
}

/* NOTES
Tried doing it manually but cannot add to function inside a fucntion to be called upon

Also seems to be causing a main recursive error recalling the function main() on Ln 39, and ignoring the if and else statements, 
so for now it will be grayed out as notes until I can figure out this issue, so it will be grayed out within the equation for now. 
Other then that the function works as described.
*/

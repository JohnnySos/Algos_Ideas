/* Decided to add ASNI Color code to differentiate the output a bit for fun...as always watch out for the easter eggs =); Also will be adding StarWars Telnet for 
favorite movie at a later time*/
#define CYN "\x1B[0;36m"
#define RED "\x1B[0;31m"
#define BHRED "\x1B[1;91;107m"
#define Reset "\x1B[0m"

#include <iostream>
#include<iomanip>
using namespace std;

int ChangeGame(){
    char response;
    double quarters, dimes, nickels, pennies, dollarSum;
    const double dollarGame = 1.00;

    cout<<CYN"\nPlease input your values below, and GOOD LUCK!";
    cout<<"\nQuarters: ";
    cin>>quarters;
    cout<<"\nDimes: ";
    cin>>dimes;
    cout<<"\nNickels: ";
    cin>>nickels;
    cout<<"\nPennies: ";
    cin>>pennies;

    quarters = quarters * 0.25;
    dimes = dimes * 0.10;
    nickels = nickels * 0.05;
    pennies = pennies * 0.01;

    dollarSum = quarters + dimes + nickels + pennies;
    
    if (dollarSum == dollarGame){
        cout<<"\nAyeee congrats you got it to equal exactly a dollar!\n\nAs a reward you get to see what one of my favorite movies is. Thanks for playing\n\n";
        // telnet towel.blinkenlights.nl 23;
        return dollarSum;
    }
    else {
        cout<<RED"\nSad times, you did not get it right =(\n\nYour total was $"<< fixed << setprecision (2)<<dollarSum<<endl;
            if (dollarSum > dollarGame){
                cout<<RED"\nWhich means you went over the limit. Sorry =(\n\nWould you like to try again?\n\nY or N: ";
                cin>> response;
                    switch(response){
                        case 'Y' : case 'y' :
                            cout<<Reset"\nGreat! Lets do it!"<<endl;
                            ChangeGame();
                            break;

                        case 'N' : case 'n' :
                            cout<<Reset"\nSad to see you leave...till next time =)"<<endl;
                            break;
                    }
            }
            else if (dollarSum < dollarGame){
                cout<<RED"\nWhich means you were under 1 dollar =(\n\nWould you like to try again?\n\nY or N: ";
                cin>> response;
                    switch(response){
                        case 'Y' : case 'y' :
                            cout<<Reset"\nGreat! Lets do it!"<<endl;
                            ChangeGame();
                            break;

                        case 'N' : case 'n' :
                            cout<<Reset"\nSad to see you leave...till next time =)"<<endl;
                            break;
                    }
            }
    return dollarSum;
    }

    

return 0;
}

int main(){
    char response1, response2;
    cout<<"Hi there =). Lets play a game shall we?"<<endl;
    cout<<"\nIt's called Change Game.\n\n****All you have to do is input the amount of coins (Based off of the options you will be given)to equal a dollar****"<<endl;
    cout<<"\nLets do this! You ready?\n\nY or N: ";
    cin>>response1;
    
    switch(response1){
        case 'Y' : case 'y' :
            cout<<"\nAlright! Lets go!"<<endl;
            ChangeGame();
            break;

        case 'N' : case 'n' :
            cout<<"\n\nHmm ok I guess I can wait, just remember the purpose is to play the game.\nSo whenever your ready just type Y. Or if you wanna leave type N: ";
            cin>>response2;
                
                switch(response2){
                    case 'Y' : case 'y' :
                        cout<<"\nAlright lets do this!";
                        ChangeGame();
                        break;
                    
                    case 'N' : case 'n' :
                        cout<<"\nWell alright then... have a good day =)";
                        break;
                    

                    default :
                        cout<<BHRED"\nWhy are you doing this. =(\n\nDid you not learn your lesson last time?\n\nI guess you will suffer some more then, suffer my insatiable thirst for pain...";

                            for(int i = 0; i < 100; i++){
                            cout<<"Thats what you get for breaking my heart.";
                            }

                        cout<<Reset"\n\nNow leave my pressence....."<<endl;;
                }
        
    }

    return 0;
}

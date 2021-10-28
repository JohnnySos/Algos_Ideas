// The challenge was to use while loop for the algo
#define BLU "\x1B[0;34m"
#define RED "\x1B[0;31m"
#define BHRED "\x1B[1;91;107m"
#define Reset "\x1B[0m"

#include <iostream>
#include <string>
using namespace std;

int calcWhile(){
    char response;
    int number;
    int addedNum = 0;
    int i=0;

cout<<Reset"\n\nPlease input a positive number so we can do the Sum up While: ";
    cin>>number;
        if (number >= 1){
            cout<<"\n\nPerfect lets move along =) ";
        }
        else if (number < 0) {
            cout<<RED"\n\nPlease dont do that, and input a positive number: ";
            cin>>number;
                if(number > 0){
                    cout<<Reset"\n\nPerfect lets continue!";
                }
                else{
                    cout<<BHRED"\n\nYou still choose to disobey, have you not learned by now? Suffer";
                    int x = 0;
                        while(x < 10000){
                            cout<<BHRED"You are not funny =(";
                            x++;
                        
                        }
                        return calcWhile();
                }
        }
        else if(number == 0){
            cout<<"\n\nI mean technically you are not wrong, but 0 + 0 = 0....so thats not fun =(";
            return calcWhile();
        }

    do{
        i++;
        addedNum += i;
    } while (i < number);

cout<<"\n\nWhew that was fun =), the sum starting from 1 all the way to the number "<<BLU<<number<<Reset" is: "<<BLU<<addedNum;

cout<<Reset"\n\nIf you would like to go again type Y, otherwise type N: ";
    cin>>response;
        switch(response){
            case 'Y' : case 'y' :
                cout<<"\nPerfect lets do it! ";
                cout<<calcWhile();
                break;

            case 'N' : case 'n' :
                cout<<"\nOki doki artichoki see you next time =)";
                
        }
return 0;
}

int main(){
    string response2;
    cout<<"Hello =), lets begin with the sumUpWhile ";
    calcWhile();
    
    
    cout<<Reset"\n\nThanks for playing =). Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated =)"<<endl;


    cout<<"If you would like to be taken to my github type yes otherwise type no: ";
    cin>>response2;
        if(response2 == "yes" || response2 == "YES" || response2 == "Yes"){
                string url =  "https://github.com/JohnnySos/Algos_Ideas";
                string op = string("start ").append(url);
                system(op.c_str());
            }
        
        else if (response2 == "no" || response2 == "NO" || response2 == "No"){
            cout<<"Thank you for stopping by and have a nice day =)"<<endl;
        }

        else{
            cout<<"I am not even gonna bother =(, have a nice day."<<endl;
        }


return 0;
}
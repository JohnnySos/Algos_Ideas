#include <iostream>
// I like to color code to help see differences better
#define CYN "\x1B[0;36m"
#define RED "\x1B[0;31m"
#define MAG "\x1B[0;35m"
#define Reset "\x1B[0m"
using namespace std;

void InDouChar (){

    int *ptrToInt, inNum = 5;
    double *ptrToDou, douNum = 2.5;
    char *ptrToChar, chaLetter = 'A';

    ptrToInt = &inNum;
    ptrToDou = &douNum;
    ptrToChar = &chaLetter;

    cout<<"\n\nNow lets print them out with their names and pointers: "<<endl;
    cout<<CYN"\n Int with its name " << inNum << " now with pointer " << *ptrToInt<<endl;
    cout<<RED"\n Int with its name " << douNum << " now with pointer " << *ptrToDou<<endl;
    cout<<MAG"\n Int with its name " << chaLetter << " now with pointer " << *ptrToChar<<endl;

    cout<<Reset"\n\nNow lets change the variables to new ones, and re print them: "<<endl;

    *ptrToInt = 10;
    *ptrToDou = 5.5;
    *ptrToChar = 'B';

    cout<<CYN"\n Int with its name " << inNum << " now with pointer " << *ptrToInt<<endl;
    cout<<RED"\n Int with its name " << douNum << " now with pointer " << *ptrToDou<<endl;
    cout<<MAG"\n Int with its name " << chaLetter << " now with pointer " << *ptrToChar<<endl;


}


int main (){
    string response2;

    cout<<"Lets do this!"<<endl;

    InDouChar ();

    cout<<Reset"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;

    cout<<"\nIf you would like to be taken to my github type yes otherwise type no: ";
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
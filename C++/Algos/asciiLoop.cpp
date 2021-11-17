#include <iostream>
using namespace std;

int asciiAuto(){
    cout<<"This is the auto ASCII option =); It will display ASCII codes 32 - 127";
    for(int i = 32; i <= 127; i++){
        if(i % 16 == 0){
            cout<<endl;
        }
        cout<<char(i);
        /* Another output variation
        cout<<"\nThe letter "<<char(i)<<" has an ASCII code of "<<int(i);*/
    }
return 0;
}

int asciiChoice(){
    char response;
    cout<<"This is the choice option =)\nPlease type a letter and it will print out the respective ASCII equivalent: ";
    cin>>response;
    cout<<"The ASCII number for the character "<<char(response)<<" is "<<int(response)<<endl;
return 0;
}
// for loop ascii characters codes 32 - 127
int asciiLoop(){
    int opt;
    cout<<"\n\nI will give you 2 options...\nOption 1: You go through automatic ASCII Codes 32-127.\nOption 2: You choose what character you want to see and it will print out its respective number in ASCII value.\n\nPlease choose an option 1 or 2: ";
    cin>>opt;
    switch(opt){
        case 1:
        asciiAuto();
        break;

        case 2:
        asciiChoice();
        break;

        default:
        cout<<"Please dont start and choose correctly =(";
        asciiLoop();
        break;
    }
return 0;
}


int main(){
    string response2;
    char yayOrNay;
    cout<<"HEEEY there! Lets do this shall we =)";
    asciiLoop();

    cout<<"\n\nWheew that was a lot =).\nIf you would like to go again type y, otherwise type n: ";
    cin>>yayOrNay;
    switch(yayOrNay){
        case 'y': case 'Y':
        cout<<"\nAlright lets do this =)";
        asciiLoop();
        break;

        case 'n': case 'N':
        break;
    }

    cout<<"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;


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
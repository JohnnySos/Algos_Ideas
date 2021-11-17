#include <iostream>
#include <cmath>
using namespace std;

int autoIteratePrime(){
    for(int begNum = 3; begNum <= 100; begNum++){
        int counter = 0; //To maintain factor count
        for(int check = 2; check<=sqrt(begNum);check++){ //checking for factors
            if(begNum % check == 0){
                counter = 1; //increasing factor count when found
            }
        }
        if (counter == 0){ //checking and printing prime numbers
            cout<<begNum<<" ";
        }
    }

return 0;
}

int rangeIteratePrime(){
    int firstNum, secondNum;
    cout<<"\n\nPlease input the first number that you wish to start at, and the second number that you want to go up to.\n\nPlease input your first number: ";
    cin>> firstNum;
    cout<<"\n\nNow please input the second number";
    cin>>secondNum;
    for(int begNum = firstNum; begNum <= secondNum; begNum++){
        int counter = 0; //To maintain factor count
        for(int check = 2; check<=sqrt(begNum);check++){ //checking for factors
            if(begNum % check == 0){
                counter = 1; //increasing factor count when found
            }
        }
        if (counter == 0){ //checking and printing prime numbers
            cout<<begNum<<" ";
        }
    }
return 0;
}


int primeNum(){
    int choice;

    cout<<"This is an automatic prime finder from 3 - 100.\n However another option is you can choose the range to iterate through.\n\nOption 1: Auto iterate\n\nOption 2: Choose your range.\n\nPlease make a selection: ";
    cin>>choice;
    switch(choice){
        case 1: 
        autoIteratePrime();
        break;

        case 2:
        rangeIteratePrime();
        break;

        default:
        cout<<"Please dont do this and choose right";
        primeNum();
        break;
    }

return 0;
}

int main(){
    string response2;
    char yayOrNay;

    cout<<"Lets do this!";
    primeNum();

    cout<<"\n\nWheew that was a lot =).\nIf you would like to go again type y, otherwise type n: ";
    cin>>yayOrNay;
    switch(yayOrNay){
        case 'y': case 'Y':
        cout<<"\nAlright lets do this =)";
        primeNum();
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
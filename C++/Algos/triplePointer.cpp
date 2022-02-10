#include <iostream>
// I again like to color code to help see differences better, plus it looks nicer =)
#define CYN "\x1B[0;36m"
#define RED "\x1B[0;31m"
#define MAG "\x1B[0;35m"
#define Reset "\x1B[0m"
using namespace std;

void triplePointer(){
    int test = 5, *ptrOne, *ptrTwo, *ptrThree;

    ptrOne = &test;
    ptrTwo = &test;
    ptrThree = &test;

    cout<< test << endl;
    cout<< CYN <<"Pointer 1 value: "<< *ptrOne <<" and the address it is stored "<< ptrOne << endl;
    cout<< MAG <<"Pointer 2 value: " << *ptrTwo <<" and the address it is stored "<< ptrTwo << endl;
    cout<< RED <<"Pointer 3 value: " << *ptrThree <<" and the address it is stored "<< ptrThree <<endl;

    cout<<Reset"\n\nNow lets switch it up! Here comes the fun! =) "<<endl;

    *ptrOne = 10;
        cout<< CYN << "\n"<<test << endl;
        cout<< CYN <<"Pointer 1 value: "<< *ptrOne <<" and the address it is stored "<< ptrOne << endl;
    *ptrTwo = 15;
        cout<< MAG << "\n" <<test << endl;
        cout<< MAG <<"Pointer 2 value: " << *ptrTwo <<" and the address it is stored "<< ptrTwo << endl;
    *ptrThree = 20;
        cout<< RED << "\n" <<test << endl;
        cout<< RED <<"Pointer 3 value: " << *ptrThree <<" and the address it is stored "<< ptrThree <<endl;

}

int main (){
    string response2;

    cout<<"Lets do this!"<<endl;
    
    triplePointer();

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
            cout<<"Still not listening, sad times  =(, have a nice day."<<endl;
        }
return 0;
}
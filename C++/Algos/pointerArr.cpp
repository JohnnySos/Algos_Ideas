#include <iostream>
using namespace std;

/* wanted to do input validation, will add at a later time, since any input other then an int or 
double will break code*/

void pointerArr (){
    double arrPoint[6];

    for (int i = 0; i < 6; i++){
    cout<<"\n\nPlease input a value: ";
        cin >> *(arrPoint + i);
    }

    cout<<"\n\nGreat Job! Now lets view the results of the array: "<<endl;
    for (int i = 0; i < 6; i++){
        cout << *(arrPoint + i)<<endl;
    }
}


int main(){
    string response2;
    cout<<"This is an array pointer time! Lets go!\n\n*****There will be a fixed number of six variables in this array***** "<<endl;

    pointerArr();

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
            cout<<"Why didnt you follow directions  =(, have a nice day."<<endl;
        }

return 0;
}
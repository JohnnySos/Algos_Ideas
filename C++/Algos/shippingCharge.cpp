#include <iostream>
#include<iomanip>
using namespace std;

int cost(int weight, double miles){
    double price;

    if (weight > 0 && weight <= 2){
        price = 1.10 * miles / 500;
        cout<<"\n\nWheew your price is: $"<< fixed << setprecision (2)<< price << endl;
        return price;
    }
    else if(weight > 2 && weight <= 6){
        price = 2.20 * miles / 500;
        cout<<"\n\nWheew your price is: $"<< fixed << setprecision (2)<< price << endl;
        return price;
    }
    else if(weight > 6 && weight <= 10 ){
        price = 3.70 * miles / 500;
        cout<<"\n\nWheew your price is: $"<< fixed << setprecision (2)<< price << endl;
        return price;
    }
    else if(weight > 10 && weight <= 20 ){
        price = 4.80 * miles / 500;
        cout<<"\n\nWheew your price is: $"<< fixed << setprecision (2)<< price << endl;
        return price;
    }
    else{
        cout<<"\n\nHow did you even get here?? Ohh well I guess goodbye"<<endl;
    }
return 0;    
}

int weightMiles(){
    int weight;
    double miles;
    cout<<"\nPlease input the weight you want to ship: ";
    cin>> weight;
        if (weight <= 0 || weight > 20){
            cout<<"\n\nPlease enter a valid weight above 0 kg's and less then 20kg: ";
            cin>> weight;
                if (weight > 0 && weight <= 20){
                    cout<< "\n\nThank you! lets keep moving forward";
                }
                else{
                    cout<<"\nOk I see your playing with me =(....You will now be exited"<<endl;
                    return 0;
                }
        }
    cout<<"\n\nNow please input the miles you wish to ship: ";
    cin>> miles;
        if(miles < 10 || miles > 3000 ){
            cout<<"\n\nPlease enter a valid distance no less then 10 miles and more then 3000 miles: ";
            cin>> miles;
            if(miles > 10 && miles < 3000){
                cout<<"\n\nPerfect! Lets move on ahead!";
            }
            else{
                cout<<"Why do you like to disobey? You will now be exited..."<<endl;
                return 0;
            }
        }
    cost(weight, miles);
return 0;
}


int main(){
    char response;
    cout<<"\nLets get started shall we =)\n\n"<<endl;
    weightMiles();
    
    cout<<"\n\nThat was a doozy =). If you would like to go again type Y, if not type N: ";
    cin>> response;
        switch(response){
            case 'Y' : case 'y' :
                cout<<"\n\nWell then partner lets go again! "<<endl;
                return main();
                break;
            
            case 'N' : case 'n' :
                cout<<"\n\nSad to see you leave. but have a great day =)"<<endl;
                break;

            default :
                cout<<"\n\nNot again!!! Why do you do this =(\n\nI wont hurt you this time cause I am getting tired of you not listening....so please, do not do this anymore or I will break your PC =`("<<endl;
                break;
        }

return 0;
}


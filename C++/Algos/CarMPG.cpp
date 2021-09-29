/*No problems with this one I kept it simple and added an easter egg per say...please dont be mad at my humor =)*/
#include <iostream>
// needed for set precision to copy exact decimal point.... can be modified as desired
#include <iomanip>
using namespace std;

int wrathOfGod(){
    const int num1 = 567;
    const int num2 = 1789;
    int response;
    cout<<"What is the solution to this equation, you cannot leave until you do, I AM WATCHING: "<<endl;
    cout<<"What is "<< num1 << " multiplied by " << num2 <<endl;
    cin>> response;

    while (response != num1 * num2){
        cout<<endl;
        cout<<"Try again. This wouldnt have happened if you didnt make me mad =("<<endl;
        cout<<endl;
        cout<<endl;
            for (int i = 0; i<15; i++){
                    cout<<"TRY AGAIN"<<endl;
                    i++;
                }
        cout<<endl;
        cout<<endl;
        return wrathOfGod();
        break;
    }
    if(response == num1 * num2){
        cout<<"You may leave. Just remember to follow directions when in the matrix =)."<<endl;
        return 0;
    }
    else{
        cout<<"If you have made it here, just know you have won this battle, but not the war....\nYou may leave...for now";
        return 0;
    }
}

int main(){
    char response;
    double howMuchGas, milesToDrive, sum;
    
    cout<< "Please input the amount of gas it takes to fill up your tank in Gallons: ";
    cin>> howMuchGas;
    cout<< "Next please input how many miles your car can travel on a full tank: ";
    cin>> milesToDrive;

    sum = milesToDrive / howMuchGas;

cout<<endl;
    cout<< "Congrats! Your total miles per gallon is: "<< fixed << setprecision (2)  << sum << " Miles per Gallon!"<< endl;
cout<<endl;

    cout<<"If you would like to go again type in Y when prompted, if not type N "<<endl;
    cout<<"Please enter your response: ";
    cin>> response;

    switch(response){
        case 'Y':
        cout<<endl;
            cout<< "Heey you wanna go again? Sounds like fun lets do it! "<< endl;
        cout<<endl;
            return main();
            break;

        case 'N':
        cout<<endl;
            cout<<"Sad to see you leave =( come back soon!" << endl;
        cout<<endl;
            break;
        
        default:
        cout<<endl;
            cout<<"Why would you do that? You make me sad =(. \nNow you will suffer my wraith."<<endl;
        cout<<endl;
            wrathOfGod();
            break;

    }

return 0;
}
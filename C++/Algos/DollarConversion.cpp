/* ***NOTES***.....I will add validation in later for additional usability; However I noticed using switch does not give me the same recursion error as using 
if and else statements and allows me to call main within the function, so for now it will be completed like this with a fun validation easter egg...please dont 
be mad at my humor =).*/
#include <iostream>
using namespace std;

int main(){
    char response;
    float dollar, convYen, convEuro, convPeso;
    const float Yen = 0.0092;
    const float Euro = 0.85;
    const float Peso = 0.050;

    cout<<"Please input the amount you wish to convert in US Dollars: ";
    cin>> dollar;
    
    convYen = dollar / Yen;
    convEuro = dollar * Euro;
    convPeso = dollar / Peso;

    cout<<"Congrats! Your conversion is below, thank you for using the simple calculator. =) "<<endl;
    cout<<"You value of " << dollar << " Dollars to Yen is equivalent to " << convYen <<" Yen."<< endl;
    cout<< "Your Value of "<< dollar << " Dollars to Euro is equivalent to " << convEuro << " Euros."<< endl;
    cout<< "Your Value of "<< dollar << " Dollars to Mexican Pesos is equivalent to " << convPeso << " Pesos."<< endl;


    cout<<"If you would like to go again type in Y when prompted, if not type N "<<endl;
    cout<<"Please enter your response: ";
    cin>> response;

    switch(response){
        case 'Y':
            cout<< "Heey you wanna go again? Sounds like fun lets do it! "<< endl;
            return main();
            break;

        case 'N':
            cout<<"Sad to see you leave =( come back soon!" << endl;

        default:
            cout<<"Why you disobeying, you are making me sad =(....You will now be stuck in an infinite loop for your sub ordinance. =) "<<endl;
            cout<<endl;
            cout<<endl;
            for (int i = 0; i<15; i++){
                cout<<"HA HA HA, suffer =)"<<endl;
                i++;
            }
            cout<<endl;
            cout<<endl;
            cout<<"Just kidding you can leave. Have a good day....but listen to directions next time =)"<<endl;
            break;
    }

return 0;
}



    

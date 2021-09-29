/*  ***NOTES***  I will be adding extra validations for yes or no responses and for correcting Gender validation within each one to repeat another calculation....
but for now it will just exit out after being done*/
#include <iostream>
using namespace std;

int femaleBMR(int weight, int height, int age){
    int BMR;
    BMR= 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
    cout<<endl;
    cout<<endl;
    cout<<"Whoaaa, your BMR in calories as a female is "<<BMR<<" Calories\nHowever, the equivalent in Chocolate bars would be..."<<endl;
    cout<<BMR / 230<<" Chocolate bars!!=)\nBecause who doesnt love chocolate....\nHave a nice day =) "<<endl;
    return BMR;
}

int maleBMR(int weight, int height, int age){
    int BMR;
    char response;
    BMR = 65 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
    cout<<endl;
    cout<<endl;
    cout<<"Whoaaa, your BMR in calories as a male is "<<BMR<<" Calories\nHowever, the equivalent in Chocolate bars would be..."<<endl;
    cout<<BMR / 230<<" Chocolate bars!!=)\nBecause who doesnt love chocolate....\nHave a nice day =) "<<endl;
    return BMR;
    
}

int Gender(char gender, int height, int weight, int age){
    switch(gender){
        case 'M':
            cout<<endl;
            cout<< "Hello King, Lets do this =) "<< endl;
            return maleBMR(height, weight, age);

        case 'F':
            cout<<endl;
            cout<<"Hello Queen, right this way =)" << endl;
            return femaleBMR(height, weight, age);

        default:
            cout<<"I understand you may not identify as the genders listed but for this exercise, please choose one.\nFor now you will be exited, have a nice day =) "<<endl;
            return 0;
            break;
    }    
}

int main(){
    int weight, height, age;
    char gender, response;
    cout<< "Hello this is our friendly BMR calculator; Please input the values requested below "<< endl;
    cout<< "What is your weight in pounds: ";
    cin>> weight;
    cout<< "What is your height in inches: ";
    cin>> height;
    cout<< "How old are you: ";
    cin>> age;

    cout<< "Thank you so much! =)\n""Now please specify your gender either M being male or F being female: ";
    cin>> gender;
    Gender(gender, weight, height, age);

    
return 0;
}

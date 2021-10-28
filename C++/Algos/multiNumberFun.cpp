// The challenge was to use while loop for the algo
#include <iostream>
using namespace std;

int arrNum(){
    int num, averagePos, averageNeg, numAmount, totalSum = 0, totalAverage = 0, sumPositive = 0, sumNegative = 0, positiveNumCounter = 0,  negativeNumCounter = 0;
    char response;
    int i = 0;

    cout<<"\n\nHow many numbers would you like to calculate?: ";
    cin>>numAmount;
        if (numAmount <= 0){
            cout<<"Please input a number greater then 0. If not you will be exited out";
                cout<<"\n\nHow many numbers would you like to calculate?: ";
                cin>>numAmount;
        }
    do{
        cout<<"\nPlease input a number: ";
        cin>>num;
        
    if (num > 0){
        sumPositive += num;
        positiveNumCounter += 1;
        averagePos = sumPositive / positiveNumCounter;
    }
    else if (num <= 0){
        sumNegative += num;
        negativeNumCounter += 1;
        averageNeg = sumNegative / negativeNumCounter;
    }
    else{
        cout<<"How did u even get here =( ";
    }
    i++;
    }while(i < numAmount);

    totalSum = sumPositive + sumNegative;
    totalAverage = (averagePos + averageNeg) / 2;

    cout<<"\n\n The sum of all positive numbers is: "<<sumPositive;
    cout<<"\n\n The average of all positive numbers is: "<<averagePos;
    cout<<"\n\n The sum of all negative numbers is: "<<sumNegative;
    cout<<"\n\n The average of all negative numbers is: "<<averageNeg;
    cout<<"\n\n The sum of all numbers positives and negatives is: "<<totalSum;
    cout<<"\n\n The average of numbers positive and negative is: "<<totalAverage;

    cout<<"\n\nIf you would like to go again type Y, otherwise type N: ";
    cin>>response;
        switch(response){
            case 'Y' : case 'y' :
                cout<<"\nPerfect lets do it! ";
                cout<<arrNum();
                break;

            case 'N' : case 'n' :
                cout<<"\nOki doki artichoki see you next time =)";
                
        }


return 0;
}


int main(){
    string response2;

    cout<<"Hello =). We will be having a lot of fun with numbers";
    arrNum();


    cout<<"\n\nThanks for playing =). Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated =)"<<endl;


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
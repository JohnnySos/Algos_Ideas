#include <iostream>
// #include <array>
using namespace std;

double max(){
    double param1,param2, param3 ,largestNum, arr[3];
    int paramCount = 0;
    string answer;

    cout<<"\n\nPlease input your first number: ";
    cin>> param1;
    arr[0] = param1;
    paramCount = 1;
        cout<<"\n\nPlease input a second number ";
        cin>> param2;
        arr[1] = param2;
        paramCount = 2;
        cout<<"\n\nDo you have another number you wish to enter?\nIf yes type yes, if not type no ";
        cin>>answer;
        if(answer == "Yes" || answer == "yes"){
            cout<<"\n\nPlease input your 3rd and final number: ";
            cin>> param3;
                arr[2] = param3;
                paramCount = 3;
                cout<<"\n\nPlease note there is a Max of 3 numbers. So you can not input any more numbers.";
        }

    cout<<"\n\nOutta the number/s you entered which are are: ";
    for ( int i = 0; i < paramCount; i++){    
        cout<<arr[i]<<", ";
    }

    if(arr[0] > arr[1]){
        if(arr[0] > arr[2]){
            largestNum = arr[0];
            cout<<"\nThe largest number is "<< largestNum<<endl;
        }
    }
    else if(arr[1] > arr[0]){
        if(arr[1] > arr[2]){
            largestNum = arr[1];
            cout<<"\nThe largest number is "<< largestNum<<endl;
        }
    }
    else if(arr[0] < arr[1]){
        if(arr[1] < arr[2]){
            largestNum = arr[2];
            cout<<"\nThe largest number is "<< largestNum<<endl;
        }
    }else{
        cout<<"\nHow did you even get here?  "<<arr[0]<<endl;
    }
    
    
    

return 0;
}

int main(){

    cout<<"Heey lets do this.";
    max();

return 0;
}
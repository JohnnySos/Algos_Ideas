// The challenge was to use while loop for the algo
#include <iostream>
#include<iomanip>
using namespace std;

int celsToFaren(){
    int colWidth=15;
    int userInp1, userInp2;
    int i = 0;
    int celsius = 0;
    double farenheit;

    cout<<"\n\nPlease input the number of degrees from which you want to start and end at.\nPlease type numbers like this\nExample:\n\n10 20\n\nIf 0-0 is entered, we will default the table to go from 0-20: ";
    cin>>userInp1>>userInp2;
        cout << setfill('-') << setw(3*colWidth) << "-" << endl;
        cout << setfill(' ') << fixed;
        cout << "Celsius" << setw(2*colWidth - 1) << "Farenheit" << endl; 
        cout << setfill('-') << setw(3*colWidth) << "-" << endl; 
        cout << setfill(' ') << fixed; 
    if (userInp1 <=0 && userInp2 <= 0){
        do{
        // (0°C × 9.0/5.0) + 32 = 32°F
            celsius = i;
            farenheit = (celsius * 9.0/5.0) + 32;
                if (celsius < 10){
                    cout<< celsius << setw(2*colWidth+1) << fixed << setprecision(2) << farenheit << endl;
                }
                else {
                cout<< celsius << setw(2*colWidth) << fixed << setprecision(2) << farenheit << endl;
                }
            i++;    
        }while(i <= 20);
    }
    else if (userInp1 >= 0 && userInp2 > 0) {
        int i = userInp1;
            do{
                celsius = i;
                farenheit = (celsius * 9.0/5.0) + 32;
                if(celsius < 10){
                    cout<< celsius << setw(2*colWidth+1) << fixed << setprecision(2) << farenheit << endl;
                }
                else if (celsius < 100){
                    cout<< celsius << setw(2*colWidth) << fixed << setprecision(2) << farenheit << endl;
                }
                else{
                    cout<< celsius << setw(2*colWidth-1) << fixed << setprecision(2) << farenheit << endl;
                }
                i++;    
                }while(i <= userInp2);
    }
return 0;
}

int farenToCels(){
    int colWidth=15;
    int userInp1, userInp2;
    int i = 0;
    int farenheit = 0;
    double celsius;

    cout<<"\n\nPlease input the number of degrees from which you want to start and end at.\nPlease type numbers like this\nExample:\n\n10 20\n\nIf 0-0 is entered, we will default the table to go from 0-20: ";
    cin>>userInp1>>userInp2;
        cout << setfill('-') << setw(3*colWidth) << "-" << endl;
        cout << setfill(' ') << fixed;
        cout << "Farenheit" << setw(2*colWidth - 6) << "Celsius" << endl; 
        cout << setfill('-') << setw(3*colWidth) << "-" << endl; 
        cout << setfill(' ') << fixed;
        if (userInp1 <=0 && userInp2 <= 0){
            do{
            // (0°F − 32) × 5/9 = -17.78°C
                farenheit = i;
                celsius = (farenheit - 32.0) * 5.0/9.0;
                if(farenheit < 10){
                    cout<< farenheit << setw(2*colWidth+1) << fixed << setprecision(2) << celsius << endl;
                }
                else{
                    cout<< farenheit << setw(2*colWidth) << fixed << setprecision(2) << celsius << endl;
                }
                
            i++;    
            }while(i <= 20);
        }
        
        else if (userInp1 >= 0 && userInp2 > 0) {
            int i = userInp1;
            do{
                farenheit = i;
                celsius = (farenheit - 32.0) * 5.0/9.0; 
                if(farenheit < 10){
                    cout<< farenheit << setw(2*colWidth+1) << fixed << setprecision(2) << celsius << endl;
                }
                else if (farenheit < 100){
                    cout<< farenheit << setw(2*colWidth) << fixed << setprecision(2) << celsius << endl;
                }
                else{
                    cout<< farenheit << setw(2*colWidth-1) << fixed << setprecision(2) << celsius << endl;
                }
                i++;    
                }while(i <= userInp2);
        }
    
return 0;
}


int main(){
    char response;

    cout<<"Hello =) This is a celsius and Farenheit display table. Please select which table you would wish to see.\n\nType C for celsius or F for farenheit"<<endl;
    cin>>response;
        switch(response){
            case 'C' : case 'c' :
            celsToFaren();
            break;

            case 'F': case 'f':
            farenToCels();
            break;
        }
    

return 0;
}

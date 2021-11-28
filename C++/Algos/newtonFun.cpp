#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

// d = 1/2 gt2
// The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the 
// amount of seconds, in seconds, that the object has been falling

double fallingDistance(){
    const double gravity = 9.8;
    int distance, colWidth=15;;

    cout<<"\n\nThis is automatic and will iterate 1 - 10 seconds\nand how many meters it travels "<<endl;

    cout << setfill('-') << setw(3*colWidth) << "-" << endl;
    cout << setfill(' ') << fixed;
    cout << "Time" << setw(2*colWidth - 1) << "Distance" << endl; 
    cout << setfill('-') << setw(3*colWidth) << "-" << endl; 
    cout << setfill(' ') << fixed; 

    
    for(int seconds = 1; seconds <= 10; seconds++){
        double distance = 0.5 * gravity * pow(seconds,2);
        if (seconds < 10){
                    cout<< seconds << setw(2*colWidth+1) << fixed << setprecision(1) << distance << endl;
                }
                else {
                cout<< seconds << setw(2*colWidth) << fixed << setprecision(1) << distance << endl;
                }
    }
return 0;
}


int main(){

    cout<<"Perfect lets do this!";

    fallingDistance();


    cout<<"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;
return 0;
}

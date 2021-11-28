#include <iostream>
using namespace std;

// KE = 0.5 * mass * velocity ^ 2

double kineticEnergy(){
    int mass, velocity;

    cout<<"\nPlease enter the mass of the object (kg): ";
    cin>>mass;
    cout<<"\nPlease enter the velocity the object is traveling at (m/s): ";
    cin>>velocity;

    double kinectEnergy = 0.5 * mass * pow(velocity,2);

    cout<<"\n\nThe kinectic energy of an object with a mass of "<<mass<< " and a velocity of "<< velocity<< " is: "<<kinectEnergy<<endl; 

return 0;
}


int main(){

    cout<<"Let go ahead and do this! ";

    kineticEnergy();

    
    cout<<"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;
return 0;
}
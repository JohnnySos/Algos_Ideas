#include <iostream>
using namespace std;


double gradeArr(){
    double studentGrades[10], grade;

    for (int i = 0; i < 10; i++){
        cout<<"\n\nPlease input a grade score:";
        cin>>grade;
        studentGrades[i] = grade;
    }
    cout<<"\n\nGreat! These are the grades you have entered: ";
    for (int x = 0; x < 10; x++){
        if (studentGrades[x] >= 90){
        cout<<"\nThe students "<< x+1 <<" score was "<<studentGrades[x]<<" that equals to an A"<<endl;
        }
        else if (studentGrades[x] >=80 ){
        cout<<"\nThe students "<< x+1 <<" score was "<<studentGrades[x]<<" that equals to an B"<<endl;
        }
        else if (studentGrades[x] >= 70){
        cout<<"\nThe students "<< x+1 <<" score was "<<studentGrades[x]<<" that equals to an C"<<endl;
        }
        else if (studentGrades[x] >= 60){
        cout<<"\nThe students "<< x+1 <<" score was "<<studentGrades[x]<<" that equals to an D"<<endl;
        }
        else{
        cout<<"\nThe students "<< x+1 <<" score was "<<studentGrades[x]<<" that equals to an F\nYou have failed this city...***Oliver Queen/Green Arrow "<<endl;
        }
    }


    
return 0;
}


int main(){

    cout<<"This will automatically arr grades based on a set scoring criteria. Lets begin!"<<endl;

    gradeArr();

return 0;
}
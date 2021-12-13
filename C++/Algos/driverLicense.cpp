#include <iostream>
using namespace std;

int correctExam(){
    int wrongCounter = 0;
    int rightCounter = 0;
    char corrAnswers[20]{'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};

    char studentAnswers[20], answer;
    for(int x = 0; x < 20; x++){
    cout<<"\nPlease input your "<< x + 1 << " answer: ";

    cin>>answer;
        switch(answer){
            case 'A': case 'B':  case 'C': case 'D': 
                studentAnswers[x] = answer;
                break;

            case 'a': case 'b':  case 'c': case 'd':
                studentAnswers[x] = toupper(answer);
                break;

            default:
                cout<<"\n\nPlease input a only the answers A, B, C or D "<<endl;
                correctExam();
                break;
        }
    }
    for (int y = 0; y < 20; y++){

        if(studentAnswers[y] != corrAnswers[y]){
            wrongCounter += 1;
        }
        else if(studentAnswers[y] == corrAnswers[y]){
            rightCounter += 1;
        }
    
    }

    if (wrongCounter >= 5){
        cout<<"\n\nYou have failed this city"<<endl;
    }
    else if(rightCounter >= 15){
        cout<<"\n\nCongrats you have passed =) "<<endl;
    }

return 0;
}

int main(){

    cout<<"This will automatically arr grades based on a set scoring criteria. Lets begin!"<<endl;

    correctExam();

return 0;
}
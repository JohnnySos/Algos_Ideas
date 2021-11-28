#include <iostream>
using namespace std;

int coinToss(){
    int numPlay, tossResult;
    srand((unsigned int)time(NULL));  //The seed for the random number generator, allows for true randomization, not the same sequence repeating
    cout<<"\n\nHow many times did you want to play?: ";
    cin>>numPlay;

    for(int i = 0; i <= numPlay; i++){
        tossResult = rand() % 2 + 1;
        if(tossResult == 1){
            cout<<"Heey that was heads!"<<endl;
        }
        else if(tossResult == 2){
            cout<<"Heey that was tails!"<<endl;
        }
    }


return 0;
}


int main(){
    string response;
    cout<<"Perfect lets do this!";
    coinToss();


    cout<<"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;

return 0;
}


// The reason is that a random number generated from the rand() function isn't actually random. It simply is a transformation. Wikipedia gives a better explanation of the meaning of pseudorandom number generator: deterministic random bit generator. Every time you call rand() it takes the seed and/or the last random number(s) generated (the C standard doesn't specify the algorithm used, though C++11 has facilities for specifying some popular algorithms), runs a mathematical operation on those numbers, and returns the result. So if the seed state is the same each time (as it is if you don't call srand with a truly random number), then you will always get the same 'random' numbers out.

// This one was a bit tricky, but I left some notes through out the code to help guide my logical process
#include <iostream>
using namespace std;

int estaPi(){

    double pi = 0;
    long i;
    int n;

    cout << "\n\nEnter the value of n: ";   //prompt for input
    cin >> n;                           //store input in "n"
    cout << endl;                       //end line

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)                     //if even
            pi = pi + (1.0 / (2.0 * i + 1.0));
        else                                //if odd
            pi = pi - (1.0 / (2.0 * i + 1.0));
    }

    pi = 4 * pi;                            //multiply by 4

    cout <<"\n\n"<< endl << "pi = " << pi << endl;  //display result

return 0;
}

int main(){
    string response2;
    char yayOrNay;

    cout<<"Heyy lets do this!";
    estaPi();

    cout<<"\n\nWheew that was a lot =).\nIf you would like to go again type y, otherwise type n: ";
    cin>>yayOrNay;
    switch(yayOrNay){
        case 'y': case 'Y':
        cout<<"\nAlright lets do this =)";
        estaPi();
        break;

        case 'n': case 'N':
        break;
    }

    cout<<"\n\nThanks for stopping by. Please check out other stuff on my github and if you like one, give it a star.\nIt will greatly be appreciated"<<endl;


    cout<<"\nIf you would like to be taken to my github type yes otherwise type no: ";
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


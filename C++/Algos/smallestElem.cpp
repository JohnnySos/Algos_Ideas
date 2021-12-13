#include <iostream>
using namespace std;


int indexofSmallestElement(int array[], int size)
{
    int index = 0;

    for(int y = 1; y < size; y++)
    {
        if(array[y] < array[index])
            index = y;              
    }
    cout<< "\n\nIndex of the smallest element is: "<<index<<endl;
return 0;
}


int main()
{
    int size = 10; 
    int array[10];
    cout<<"Hey lets do this =) ";
        for (int i = 0; i <= size; i++)
        {
            cout << "\nEnter an number please: ";
            cin >> array[i];
        }
        indexofSmallestElement(array, size);

    cout<<"\n\nThanks for stopping by =)"<<endl;
return 0;
}
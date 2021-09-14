#include <iostream>
using namespace std;

int main()
{
    char input;
    cout << "Please enter a character : ";
    cin >> input;
    cout << "  " << input << input << input << "\n";
    cout << " " << input << "  " << input << "\n";
    cout << input << "\n";
    cout << input << "\n";
    cout << input << "\n";
    cout << input << "\n";
    cout << input << "\n";
    cout << " " << input << "  " << input << "\n";
    cout << "  " << input << input << input << "\n";
    return 0;
}

/* NOTES

Tried to use for loop however because of the complex pattern not being in any sequential order like a pyramid, or triangle, it would be pointless, still useful information however.

for (int i = 0; i < 6; i++)

{

cout << C << " ";

}

cout << endl;

Then just wanted to add spaces; Example of adding spcaes to an output with vairables mixed in for C++ is stated below.....
Ex1:   cout << variable << " " << vairable << endl;

Ex2:   cout << " Here is the result: " << result << endl;
*/
#define _USE_MATH_DEFINES
#define CYN "\x1B[0;36m"
#define RED "\x1B[0;31m"
#define MAG "\x1B[0;35m"
#define Reset "\x1B[0m"

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calcCircle(){
    double radius, area;
    cout <<CYN"\n\nPlease input the radius of your circle so we can calculate the area: ";
    cin >> radius;
    if (radius <= 0.0){
        cout<<"\n\nPlease input a value greater then 0 to continue. if you want to use a decimal please write out\nthe full decimal value that you wish to provide: ";
        cin>>radius;
            if(radius > 0.0){
                cout<<"\nAlright! Lets do this.";
            }
            else{
                cout<<"\n\nI really dont understand why you dont like to follow directions =(....I will give you one more chance....."<<endl;
                return 0;
            }

    }
    area = radius * radius * M_PI;

    cout << "\n\nDope! Your area for a circle with a radius of " << radius << " is " << area << endl;
return 0;
}
int calcRectangle(){
    double length, width, area;
    cout <<RED "\n\nPlease input the length rectangle: ";
    cin >> length;
    cout << "\n\nNow please input the width of the rectangle so we can calculate the area: ";
    cin >> width;

    if (width <= 0.0 || length <= 0.0){
        cout<<"\n\nPlease input a value greater then 0 to continue. if you want to use a decimal please write out\nthe full decimal value that you wish to provide: ";
        cout << "\n\nPlease input the length rectangle: ";
        cin >> length;
        cout << "\n\nNow please input the width of the rectangle so we can calculate the area: ";
        cin >> width;
            if(width > 0.0 && length > 0.0){
                cout<<"\nAlright! Lets do this.";
            }
            else{
                cout<<"\n\nI really dont understand why you dont like to follow directions =(....I will give you one more chance....."<<endl;
                return 0;
            }
    }

    area = width * length;

    cout << "\n\nDope! Your area for a rectangle with a length  of " << length << " and a width of " << width << " is equal to " << area << endl;
return 0;
}

int calcTriangle(){
    double base, height, area;
    cout <<MAG "\n\nPlease input the height of the triangle: ";
    cin >> height;
    cout << "\n\nNow please input the base of the triangle so we can calculate the area: ";
    cin >> base;

    if (base <= 0.0 || height <= 0.0){
        cout<<"\n\nPlease input a value greater then 0 to continue. if you want to use a decimal please write out\nthe full decimal value that you wish to provide: ";
        cout << "\n\nPlease input the height of the triangle: ";
        cin >> height;
        cout << "\n\nNow please input the base of the triangle so we can calculate the area: ";
        cin >> base;
            if(base > 0.0 && height > 0.0){
                cout<<"\nAlright! Lets do this.";
            }
            else{
                cout<<"\n\nI really dont understand why you dont like to follow directions =(....I will give you one more chance....."<<endl;
                return 0;
            }
    }

    area = height * base / 2;

    cout << "\n\nDope! Your area for a triangle with a height  of " << height << " and a base of " << base << " is equal to " << area << endl;
return 0;
}

int main(){
    int response;
    char response2;
    cout <<Reset "Please select from the following options listed below for the Geometry Calculator!: \n1. Calculate area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Do them all =)\n5. Quit" << endl;
    cout << "What is your choice: ";
    cin >> response;
        switch (response){
        case 1:
            calcCircle();
            break;

        case 2:
            calcRectangle();
            break;

        case 3:
            calcTriangle();
            break;

        case 4:
            calcCircle();
            calcRectangle();
            calcTriangle();
            break;

        case 5:
            cout << "\n\nAww sad times, well I guess this is goodbye then =(" << endl;
            break;

        default:
            cout << "\n\nOhhh hell to the naw you didnt ='(\n\nPlease enter a valid choice\n\n***BETWEEN 1-5***\n\nIF you want to try again PLEASE RESPOND with Y or N: ";
            cin >> response2;
                switch (response2){
                    case 'Y': case 'y':
                        cout << "\n\nOk..lets try this again =) " << endl;
                        return main();
                        break;

                    case 'N': case 'n':
                        cout << "\n\nSad to see you leave. But have a great day =)" << endl;
                        break;

                    default:
                        cout << "\n\nNot again!!! Why do you do this =(\n\nI wont hurt you this time cause I am getting tired of you not listening....so please, do not do this anymore or I will break your PC =`(" << endl;
                        break;
                }
        }
    cout <<Reset"\n\nWould you like to do  another calculation?\n\nY or N: ";
    cin >> response2;
        switch (response2){
            case 'Y': case 'y':
                cout << "\nGreat! Lets do it!" << endl;
                main();
                break;

            case 'N': case 'n':
                cout << "\nSad to see you leave...till next time =)" << endl;
                break;
        }
    return 0;
}
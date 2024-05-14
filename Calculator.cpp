#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>


using namespace std;

int main(int argc, char** argv) {
    cout << "For additions, press 1\n";
    cout << "For subtractions, press 2\n";
    cout << "For multiplications, press 3\n";
    cout << "For divisions, press 4\n";
    cout << "For powers, press 5\n";
    cout << "For finding the area of a circle, press 6\n";
    cout << "For square root, press 7\n";
    cout << "For converting farenheight and celsius, press 8\n";

    cout << "Choice: ";
    int choice;
    string strchoice;

    cin >> choice;
    float n1;
    float n2;
    float exponent;
    float baza;
    float radius;
    float pi = 3.14159;
    double sqrtnmb;
    switch(choice){
            case 1:
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
                cout << n1+n2 << "\n";
                return 0;

            case 2:
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
                cout << n1-n2 << "\n";
                return 0;

            case 3:
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
                cout << n1*n2 << "\n";
                return 0;

            case 4:
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
                cout << n1/n2 << "\n";
                return 0;

            case 5:
                cout << "Base: ";
                cin >> baza;
                cout << "Exponent: ";
                cin >> exponent;
                cout << pow(baza, exponent) << "\n";
                return 0;

            case 6:
                cout << "Radius: ";
                cin >> radius;
                cout << "Area of circle is " << pi*radius << "\n";
                return 0;

            case 7:
                cout << "Enter a number: ";
                cin >> sqrtnmb;
                if(sqrtnmb < 0){
                    cout << "Square root negative numbers are undefined\n";
                    return 1;
                }
                else{
                    cout << "Square root of " << sqrtnmb << " is: " << sqrt(sqrtnmb) << "\n";
                    return 0;
                }
                return 0;
                
            case 727:
                cout << "Are you sure you want to enable the easter egg?\n";
                cout << "1 for yes\n";
                cout << "2 for no\n";
                cout << "Choice: ";
                cin >> strchoice;
                if(strchoice == "1"){
                    while(true){
                        cout << "WHEN YOU SEE IT!!!!\n";
                        cout << "👈👈👈👈👈👈👈👈👈👈👈👈👈";
                    }
                                       
                    
                }
                else if(strchoice == "2"){
                    return 0;
                }
            case 8:
                float celsius;
                float farenheight;
                int tunitchoice;;

                cout << "For converting celsius to farenheight, press 1\n";
                cout << "For converting farenheight to celsius, press 2\n";
                cout << "Choice: ";

                cin >> tunitchoice;;

                switch(tunitchoice){
                    case 1:
                        cout << "Celsius: ";
                        cin >> celsius;
                        farenheight = (celsius * 9/5) + 32;
                        cout << farenheight << endl;
                        return 0;
                        
                    case 2:
                        cout << "Farenheight: ";
                        cin >> farenheight;
                        celsius = (farenheight - 32) * 5/9;
                        cout << celsius << endl;
                        return 0;
                }

                
    }
}

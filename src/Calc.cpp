#include <iostream>
#include "Calc.h"
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
//Create a new pointer of type hellolib
    //ofstream myfile;
    //myfile.open("File1.txt");
    float x, y, z;
    int n;
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Please enter your the following " << name << ":" << endl;
    cout << "Purchase Price: ";
    cin >> x;
    cout << "Deposit Paid: ";
    cin >> y;
    cout << "Bond in Years: ";
    cin >> n;
    cout << "Interest Paid: ";
    cin >> z;
    CalcLib * C = new CalcLib();
//Call the method SayHello to print message
    C->Calculate();

    C->set_Price(x);
    C->set_Deposit(y);
    C->set_Bond(n);
    C->set_Interest(z);
    cout << "Purchase Price: " << C->get_Price() << endl;
    cout << "The Paid Deposit: " << C->get_Deposit() << endl;
    cout << "The Bond in years: " << C->get_Bond() << endl;
    cout << "The Interest to be paid: " << C->get_Interest() << " %" << endl;
    cout << "The Money to be paid monthly by " << name << " is: ";
    cout << C->Calculate() << endl;
//Delete the pointer and exit

    delete C;
    //myfile.close();
    return 0;
}


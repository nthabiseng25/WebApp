#ifndef _CALCLIB_
#define _CALCLIB_

#include <iostream>

using namespace std;
class CalcLib{
private:
    float Price, Deposit, Interest, rate = 0.0, Monthly_Payment = 0.0, Total = 0.0;
    int Bond, Number_of_Months = 0, arr[100][100][100];
public:
    CalcLib();
    ~CalcLib();
    void set_Price(float p);
    float get_Price();
    void set_Deposit(float d);
    float get_Deposit();
    void set_Bond(int b);
    int get_Bond();
    void set_Interest(float i);
    float get_Interest();
    void Table();
    float Calculate();
};
#endif


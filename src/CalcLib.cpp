#include "Calc.h"
#include <cmath>

CalcLib::CalcLib(){};
CalcLib::~CalcLib(){};

void CalcLib::set_Price(float p){
    Price = p;
}
float CalcLib::get_Price(){
    return Price;
}
void CalcLib::set_Deposit(float d){
    Deposit = d;
}
float CalcLib::get_Deposit(){
    return Deposit;
}
void CalcLib::set_Bond(int b){
    Bond = b;
}
int CalcLib::get_Bond(){
    return Bond;
}
void CalcLib::set_Interest(float i){
    Interest = i;
}
float CalcLib::get_Interest(){
    return Interest;
}
//void CalcLib::Table(){
    //for (int i = 0; i < 10; i++){
        //for (int j  = 0)
    //}
//}
float CalcLib::Calculate(){
    Total = Price - Deposit;
    rate = (Interest/12)/100;
    Number_of_Months = Bond * 12;
    if (Interest > 0){
        Monthly_Payment = ((rate*Total)*pow(1+rate, Number_of_Months))/(pow(1+rate, Number_of_Months)-1);
    }
    else if(Interest == 0){
        Monthly_Payment = Total/Number_of_Months;
    }

    return Monthly_Payment;
}



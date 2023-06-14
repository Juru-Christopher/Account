#include <iostream>
#include "account.hpp"
using namespace std;

void account::setData(string initNum, string initOwner, double initBal){
    accNum = initNum;
    owner = initOwner;
    balance = initBal;
}
void account::setNum(string initNum){
    accNum = initNum;
}
void account::setOwner(string initOwner){
    owner = initOwner;
}
void account::setBal(double initBal){
    balance = initBal;
}
string account::getNum() const{
    return accNum;
}
string account::getOwner() const{
    return owner;
}
double account::getBal() const{
    return balance;
}
void account::dispData() const{
    cout<<"Account Number: "<<accNum<<endl;
    cout<<"Owner's Name: "<<owner<<endl;
    cout<<"Balance: "<<balance<<endl;
}

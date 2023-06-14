#include <iostream>
#include "account.hpp"
using namespace std;

int main(){
    account acc1;
    string tmpNum, tmpName;
    double tmpBal;
    cout<<"Account Number: ";
    cin>>tmpNum;
    cin.ignore();
    cout<<"Full Name: ";
    getline(cin, tmpName);
    cout<<"Initial Balance: ";
    cin>>tmpBal;

    acc1.setData(tmpNum, tmpName, tmpBal);
    acc1.dispData();
    return 0;
}

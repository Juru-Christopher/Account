#ifndef Account_hpp
#define Account_hpp

using namespace std;

    class Account{
    public:
        Account(){};
        ~Account(){};
        //setters and getters
        void setData(string initNum, string initOwner, double initBal);
        void setNum(string initNum);
        void setOwner(string initOwner);
        void setBal(double initBal);
        string getNum() const;
        string getOwner() const;
        double getBal() const;
        void dispData() const;
    private:
        string accNum;
        string owner;
        double balance;
    };

#endif

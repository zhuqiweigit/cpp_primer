#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
class Account{
private:
    std::string ower;
    double amount;
    static double rate;
    static constexpr double todayRate = 10.0;
public:
    static void setRate(double newRate){ rate = newRate;}
    static double getTodayRate(){return todayRate;}
};
double Account::rate = getTodayRate();
#endif
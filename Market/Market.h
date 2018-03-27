#ifndef MARKET_H_INCLUDED
#define MARKET_H_INCLUDED

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Market {
public:
    Market(string n, string a, string p, string f);
    ~Market();

    string getMarketName() const;
    string getMarketAddress() const;
    string getPhoneNumber() const;
    string getFaxNumber() const;
    void displayMarketInfo() const;

private:
    int center(string s) const;
    string marketName;
    string marketAddress;
    string phoneNumber;
    string faxNumber;
};


#endif // MARKET_H_INCLUDED

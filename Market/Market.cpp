#include "Market.h"

Market::Market(string n, string a, string p, string f) {
    this->marketName = n;
    this->marketAddress = a;
    this->phoneNumber = p;
    this->faxNumber = f;
}

Market::~Market() {}

string Market::getMarketName() const {
    return marketName;
}

string Market::getMarketAddress() const {
    return marketAddress;
}

string Market::getPhoneNumber() const {
    return phoneNumber;
}

string Market::getFaxNumber() const {
    return faxNumber;
}

void Market::displayMarketInfo() const {
    /** Console is 80 char wide
        Set the print offset equal to [40 + (half the string's length)],
        where 40 is the center of the console. **/

    string  n = getMarketName(),
            a = getMarketAddress(),
            p = getPhoneNumber(),
            f = getFaxNumber();

    cout << setw(center(n)) << n << endl;
    cout << setw(center(a)) << a << endl;
    cout << setw(center("PHONE: " + p)) << "PHONE: " + p << endl;
    cout << setw(center("FAX: " + f)) << "FAX: " + f << endl;
}

/**
    Finds the number of spaces to add the setw function
    to center the text.
    @Param {string} s - The string to center
    return {int} - The number of spaces to add
**/
int Market::center(string s) const {
    return (40 + s.length()/2);
}

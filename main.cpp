#include <iostream>

#include "Market.h"

using namespace std;

int main()
{
    Market m("Ralph's Big Grocery Store",
             "22222 Example Drive, Long Beach, CA 90812",
             "818-223-5393",
             "1-818-223-4596");

    m.displayMarketInfo();

    return 0;
}

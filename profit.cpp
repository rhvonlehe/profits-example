#include "profit.hpp"
#include <algorithm>
#include <iostream>

using namespace std;

int profit(vector<int>& prices)
{
    int maxprofit = 0;

    if (1 >= prices.size()) return 0;

    for (auto buyit = prices.begin(); buyit < prices.end() - 1; buyit++)
    {
        auto sellit = buyit + 1;

        auto max_sell_it = max_element(sellit, prices.end());

        // cout << "buyit price: " << *buyit << " max_sell_it price: " << *max_sell_it << endl;

        int local_max = *max_sell_it - *buyit;

        if (local_max > maxprofit) maxprofit = local_max;
    }

    return maxprofit;
}

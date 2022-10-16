#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> prices{1,2,4,2,5,7,2,4,9,0}, v{0};
    int maxcurrent = 0, maxlast = 0, buy = prices[0], profit;
    for (int i = 1; i < prices.size(); i++)
    {
        if (buy >= prices[i])
            buy = prices[i];
        else if ((i != prices.size() - 1 && prices[i] > prices[i + 1]) || i == prices.size() - 1)
        {
            profit = prices[i] - buy;
            v.push_back(profit);
            buy = INT_MAX;
        }
    }
    sort(v.begin(), v.end());
    if(v.size()>1)
        cout<<endl<<v[v.size()-2]+v.back();
    else
        cout<<v.back();
    return 0;
}
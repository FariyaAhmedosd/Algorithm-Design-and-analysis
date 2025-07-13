#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int coinChange(vector<int>&coins,int amount)
{
    sort(coins.rbegin(),coins.rend());
    int totalcoins=0;
    for(int i=0;i<coins.size();i++)
    {
        int coin=coins[i];
        if(amount==0)
            {
            break;
            }
        int count=amount/coin;
        totalcoins+=count;
        amount-=count*coin;
    }
    if(amount!=0)
    {
        return -1;
    }
    return totalcoins;

}
int main()
{
    vector<int>coins={1,2,5};
    int  amount=17;
    int result=coinChange(coins,amount);
    cout<<"Minimum number of coin: "<<result<<endl;
    return 0;
}

#include<iostream.>
#include<vector>
#include<algorithm>
using namespace std;
int coinChange(vector<int>&coins,int amount)
{
    vector<int>dp(amount+1,amount+1);
    dp[0]=0;
    for(int i=0;i<=amount;i++)
    {
            for(int coin:coins)
                    {
                       if(coin<=i&&dp[i-coin]!=amount+1 )
                       {
                           dp[i]=min(dp[i],dp[i-coin]+1);
                       }
                    }
    }
    if(dp[amount]==amount+1)
        return -1;
    else
        return dp[amount];

}
int main()
{
    vector<int>coins={1,5,6,9};
    int amount=10;
    int mincoin=coinChange(coins,amount) ;
    if(mincoin==-1)
    {
        cout<<"No solution found"<<endl;
    }
    else
        cout<<"Minimum number of coins needed: "<<mincoin<<endl;
}

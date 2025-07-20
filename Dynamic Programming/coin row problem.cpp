
#include<bits/stdc++.h>
using namespace std;
int coinRow(int coins[],int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return  coins[0] ;
        int dp[n] ;
        dp[0] =coins[0] ;
        dp[1]=max(coins[0],coins[1]) ;
        for(int i=2;i<n;i++)
        {
            dp[i]=max(coins[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
}
int main()
{
    int coins[]={5,1,2,10,6,2};
    int n=sizeof(coins)/sizeof(coins[0]);
    cout<<"maximum value(DP): "<<coinRow(coins,n);
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int amount, n;

    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Enter number of coin : ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter coin denominations:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }
    vector<long long> dp(amount + 1, 0);
    dp[0] = 1;
    for (int coin : coins) {
        for (int i = coin; i <= amount; ++i) {
            dp[i] += dp[i - coin];
        }
    }

    cout << "Total ways to make change: " << dp[amount] << endl;

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int amount;
    cout << "Enter total amount: ";
    cin >> amount;

    vector<int> coins = {1, 3, 5};

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

#include <iostream>
#include <vector>
#include <algorithm> // for min()

using namespace std;

int main() {
    int amount, n;
    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Enter number of coin : ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter coin denominations:\n";
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }


    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;


    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    if (dp[amount] == amount + 1) {
        cout << "It's not possible to make the amount with given coins." << endl;
    } else {
        cout << "Minimum number of coins needed: " << dp[amount] << endl;
    }

    return 0;
}

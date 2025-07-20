#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    vector<int> weights(n), values(n);

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    cout << "Enter capacity of knapsack: ";
    cin >> capacity;


    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));


    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= capacity; w++) {
            if (weights[i - 1] <= w)
            {

                dp[i][w] = max(dp[i - 1][w],
                               dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
            else
            {

                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum value in Knapsack = " << dp[n][capacity] << endl;

    return 0;
}

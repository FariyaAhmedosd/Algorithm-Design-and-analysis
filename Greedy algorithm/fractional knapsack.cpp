#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight;
    int value;
    double ratio;
};


bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int n;
    double capacity;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter capacity of knapsack: ";
    cin >> capacity;

    vector<Item> items(n);

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; ++i) {
        cin >> items[i].weight;
    }

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; ++i) {
        cin >> items[i].value;
        items[i].ratio = (double) items[i].value / items[i].weight;
    }

    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    double remainingCapacity = capacity;

    for (int i = 0; i < n; ++i) {
        if (remainingCapacity == 0)
            break;

        if (items[i].weight <= remainingCapacity) {

            totalValue += items[i].value;
            remainingCapacity -= items[i].weight;
        } else {

            double fraction = remainingCapacity / items[i].weight;
            totalValue += items[i].value * fraction;
            remainingCapacity = 0;
        }
    }

    cout << "Maximum value in knapsack = " << totalValue << endl;

    return 0;
}

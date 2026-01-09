#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void greedyTruckRouting(vector<int> &distance) {
    // Greedy approach: visit nearest location first
    sort(distance.begin(), distance.end());

    cout << "Optimized Garbage Truck Route:\n";
    for (int d : distance) {
        cout << d << " km -> ";
    }
    cout << "Depot\n";
}

int main() {
    vector<int> collectionPoints = {15, 5, 20, 8, 12};

    greedyTruckRouting(collectionPoints);

    cout << "\nCleanliness Index: 85%\n";
    return 0;
}

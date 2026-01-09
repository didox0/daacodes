#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> efficiency = {70, 85, 60, 90, 80};

    // Greedy: choose highest efficiency locations first
    sort(efficiency.begin(), efficiency.end(), greater<int>());

    cout << "Optimal Solar Panel Placement (Efficiency Order):\n";
    for (int e : efficiency)
        cout << e << "% -> ";

    cout << "Installed\n";

    cout << "\nEnergy Efficiency: 90%\n";
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> wasteQueue;

    // Adding collection areas
    wasteQueue.push("Area 1");
    wasteQueue.push("Area 2");
    wasteQueue.push("Area 3");

    cout << "Waste Collection Schedule:\n";
    while (!wasteQueue.empty()) {
        cout << "Collecting waste from: "
             << wasteQueue.front() << endl;
        wasteQueue.pop();
    }

    cout << "\nCleanliness Index: 85%\n";
    return 0;
}

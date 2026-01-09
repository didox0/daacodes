#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> requests;

    requests.push("Water Supply Issue");
    requests.push("Road Repair Complaint");
    requests.push("Electricity Problem");

    cout << "Government Service Requests:\n";
    while (!requests.empty()) {
        cout << "Processing: " 
             << requests.front() << endl;
        requests.pop();
    }

    cout << "\nService Efficiency: 87%\n";
    return 0;
}

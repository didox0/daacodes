#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> citizen;

    // Citizen ID → Name
    citizen[101] = "Ravi";
    citizen[102] = "Anita";
    citizen[103] = "Suresh";

    int searchID = 102;
    cout << "Citizen Record:\n";
    cout << "ID: " << searchID 
         << ", Name: " << citizen[searchID] << endl;

    cout << "\nService Efficiency: 87%\n";
    return 0;
}

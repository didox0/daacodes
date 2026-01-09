#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data = {12, 5, 20, 8};
    sort(data.begin(), data.end());   // Greedy choice

    for (int x : data)
        cout << x << " ";
}

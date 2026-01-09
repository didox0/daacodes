#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> q;
    q.push("Request 1");
    q.push("Request 2");
    q.push("Request 3");

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}

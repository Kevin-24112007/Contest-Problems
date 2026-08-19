//  E - Sorting Queries

#include<bits/stdc++.h>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<int> a;
    priority_queue<int, vector<int>, greater<int>> minheap;
    while (Q--) {
        int ch;
        cin >> ch;
        if (ch == 1) {
            int x;
            cin >> x;
            a.push(x);
        }
        else if (ch == 2) {
            if (!minheap.empty()) {
                cout << minheap.top() << endl;
                minheap.pop();
            }
            else {
                cout << a.front() << endl;
                a.pop();
            }
        }
        else {
            while (!a.empty()) {
                minheap.push(a.front());
                a.pop();
            }
        }
    }
    return 0;
}

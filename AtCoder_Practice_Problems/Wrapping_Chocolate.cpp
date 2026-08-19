#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &arr, int len) {
    for (int i = 1; i <= len; i++) {
        cin >> arr[i];
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> chW(N+1), chL(N+1), boxW(M+1), boxL(M+1);
    input(chW, N);
    input(chL, N);
    input(boxW, M);
    input(boxL, M);

    vector<pair<int,int>> length;
    for (int i = 1; i <= N; i++) {
        length.push_back(make_pair(chL[i], -i));
    }
    for (int i = 1; i <= M; i++) {
        length.push_back(make_pair(boxL[i], i));
    }
    sort(length.rbegin(), length.rend());

    multiset<int> st;

    for (auto [l, idx] : length) {
        if (idx > 0) {
            st.insert(boxW[idx]);
        }
        else {
            auto it = st.lower_bound(chW[-idx]);
            if (it == st.end()) {
                cout << "No";
                return 0;
            }
            st.erase(it);
        }
    }
    cout << "Yes";
    return 0;
}

/*
red black tree can be used
multiset is used here
length breadth height will have to be done
*/
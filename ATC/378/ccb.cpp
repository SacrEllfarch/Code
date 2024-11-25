#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& x : A) cin >> x;
    map<int, int> last;
    vector<int> B(N, -1);
    for (int i = 0; i < N; ++i) {
        if (last.contains(A[i])) {
            B[i] = last[A[i]];
        }
        last[A[i]] = i + 1;
    }
    for (int i = 0; i < N; ++i) {
        cout << B[i] << (i < N - 1 ? " " : "\n");
    }
}

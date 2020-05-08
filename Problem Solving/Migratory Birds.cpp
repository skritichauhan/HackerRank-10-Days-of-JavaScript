#include <iostream>

using namespace std;

int cnt[6];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int mx = 1;
    for (int i = 2; i < 6; i++) {
        if (cnt[i] > cnt[mx]) {
            mx = i;
        }
    }
    cout << mx << endl;
    return 0;
}

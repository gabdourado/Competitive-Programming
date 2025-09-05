#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, H, heigth, count(0);

    vector<int> machines;

    cin >> N >> H;

    for (int i = 0; i < N; i++)  {
        cin >> heigth;
        machines.push_back(heigth);
    }

    for (int i = 0; i < N; i++) {
        if (machines[i] <= H) {
             count++;
        }
    }

    cout << count << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int D, count(0);
    vector<int> counter_D = {0, 0, 0, 0};

    for (int i = 0; i < 10; i++) {
        cin >> D;
        counter_D[D-1]++;
    }

    for (int i = 0; i < 4; i++) if (counter_D[i] == 0) count++;

    cout << count << endl;

    return 0;
}
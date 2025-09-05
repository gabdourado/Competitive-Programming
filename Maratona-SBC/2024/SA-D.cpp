#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int D, C, R, value, count_at(0);
    list<int> at_cansativas, at_revigorantes;

    cin >> D >> C >> R;

    for (int i = 0; i < C; i++) {
        cin >> value;
        at_cansativas.push_back(value);
    }

    for (int i = 0; i < R; i++) {
        cin >> value;
        at_revigorantes.push_back(value);
    }
    
    while (true) {
       if (!at_cansativas.empty() && D - at_cansativas.front() >= 0) {
            D -= at_cansativas.front();
            at_cansativas.pop_front();
       } else if (!at_revigorantes.empty()) {
            D += at_revigorantes.front();
            at_revigorantes.pop_front();
       } else {
            break;
       }
       count_at++;
    }

    cout << "Number of activities: " << count_at << endl;

    return 0;
}
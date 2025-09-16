#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, coef, count(0);
    vector<int> P, P_inv;
    
    cin >> N;

    for (int i = 0; i <= N; i++) {
        cin >> coef;
        P.push_back(coef);
    }

    for (int i = P.size() - 1; i >= 0; i--) P_inv.push_back(P[i]);

    while (P_inv.size() != 1 || P_inv[0] != 1) {
        
        if (P_inv[0] == 1) {
            vector<int> aux;
            aux.push_back(0);
            for (int i = 0; i < P_inv.size(); i++) {
                aux.push_back(P_inv[i]);
            }
            P_inv.push_back(0);
            for (int i = 0; i < P_inv.size(); i++) {
                P_inv[i] += aux[i];
                P_inv[i] %= 2;
            }
            P_inv[0] += 1;
            P_inv[0] %= 2;
        } else {
            for (int i = 1; i < P_inv.size(); i++) {
                P_inv[i-1] = P_inv[i];
            }
            P_inv.pop_back();
        }
        count++;
    }

    cout << count << endl;

    return 0;
}
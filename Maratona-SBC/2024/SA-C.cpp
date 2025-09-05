#include <bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

ll int fat (int n) {
    ll int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

ll int combinacao (int n, int p) {
    ll int comb;
    comb = fat(n)/(fat(p)*fat(n-p));
    return comb;
}

ll int pot(int base, int expo) {
    ll int p = 1;
    for (int i = 1; i <= expo; i++) p *= base;
    return p;
}

int main (void) {

    int N, K, coef;
    vector<int> t, p, q;
    vector<vector<ll int>> t_new, p_new;

    cin >> N >> K;

    for (int i = 0; i <= N; i++) {
        cin >> coef;
        t.push_back(coef);
    }

    for (int i = 0; i <= N; i++) {
        cin >> coef;
        p.push_back(coef);
    }

    for (int i = 0; i <= N; i++) {
        vector<ll int> line;
        for(int j = 0; j <= i; j++) {
            line.push_back(combinacao(i, j) * pot(K, i-j) * t[i]);
        }
        t_new.push_back(line);
    }

    for (int i = 0; i <= N; i++) {
        vector<ll int> line;
        for(int j = 0; j <= i; j++) {
            line.push_back(combinacao(i, j) *  pot(-K, i-j) * p[i]);
        }
        p_new.push_back(line);
    }


    for (int j = 0; j <= N; j++) {
        int sum = 0;
        for (int i = j; i <= N; i++) {
            sum += t_new[i][j] + p_new[i][j];
        }

        if (sum < 0) sum += mod;
        else sum %= mod;

        q.push_back(sum);
    }

    for (int i = 0; i <= N; i++) cout << q[i] << " ";
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, M, value, sum(0);
    vector<vector<int>> G;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        vector<int> line; 
        for (int j = 0; j < M; j++) {
            cin >> value;
            line.push_back(value);
        }
        G.push_back(line);
    }

    for (int j = 0; j < M; j++) {
        int max_collum = G[0][j];
        for (int i = 0; i < N; i++)
            if (G[i][j] > max_collum) 
                max_collum = G[i][j];
        sum += max_collum;
    }

    cout << sum << endl;

    return 0;
}
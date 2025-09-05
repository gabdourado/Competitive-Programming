#include <bits/stdc++.h>

using namespace std;

int max(vector<int> v) {
    int idx, maximum;
    idx = 0;
    maximum = v[idx];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > maximum) {
            maximum = v[i];
            idx = i;
        }
    }
    return idx;
}

int sum(int number) {
    int sum_digits(0);

    while (number >= 1) {
        sum_digits += number % 10;
        number /= 10;
    }
    return sum_digits;
}

int main (void) {

    int N, K, pollen, sum_digits;
    vector<int> flowers;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> pollen;
        flowers.push_back(pollen);
    }

    for (int i = 1; i <= K; i++) {
        int idx = max(flowers);
        sum_digits =  sum(flowers[idx]);
        flowers[idx] -= sum_digits;
    }

    cout << sum_digits << endl;

    return  0;
}
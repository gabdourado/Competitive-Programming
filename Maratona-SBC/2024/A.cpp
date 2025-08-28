#include <iostream>

using namespace std;

int main (void) {

    int K, N, I, speaking_time;

    cin >> N >> K;

    if (N % 2 != 0)
        I = N / 2;
    else
        I = (N / 2) - 1;

    K -= I;

    speaking_time = K / N;

    cout << speaking_time << endl;

    return 0;
}
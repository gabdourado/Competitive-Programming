#include<bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    int K, number_swap;

    cin >> S >> K;

   if (S.size() - K < 0) number_swap = 0;
   else number_swap = S.size() - K;

   for (int i = 0; i <= number_swap - 1; i++) {
        char temp = S[i];
        S[i] = S[i + K];
        S[i + K] = temp;
   }

   cout << S << endl;

    return 0;
}
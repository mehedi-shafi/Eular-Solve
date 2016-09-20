#include <bits/stdc++.h>
using namespace std;
const int sz = 10000000;
int mark[sz];
long long prime[150000];

void makePrime()
{
    memset(mark, 1, sizeof(mark));
    mark[0] = mark[1] = 0;
    prime[0] = 2;
    int k = 1;
    for (int i = 3; i < sz && k < 150000; i += 2){
        if (mark[i]){
            prime[k++] = i;
            if (i < sz/i){
                for (int j = i * i; j < sz; j += i){
                    mark[j] = 0;
                }
            }
        }
    }
}
int main ()
{
    makePrime();
    ///made an array of 150000 primes.
    cout << prime[10000] << endl;
    return 0;
}


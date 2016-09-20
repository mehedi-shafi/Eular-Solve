#include <bits/stdc++.h>
using namespace std;
bool divisible(int n)
{
    for (int i = 2; i < 21; i++){
        if (n % i != 0)
            return false;
    }
    return true;
}
int main ()
{
    for (int i = 40; ; i++){
        if (divisible(i)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}

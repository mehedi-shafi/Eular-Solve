#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int sum = 0;
    for (int i = 0; i < 101; i++){
        sum += i*i;
    }
    cout << fixed << abs(sum - pow(((100*(100+1))/2),2)) << endl;
}

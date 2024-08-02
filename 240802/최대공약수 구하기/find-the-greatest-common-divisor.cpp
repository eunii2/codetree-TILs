#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int res = __gcd(n, m);

    cout << res << '\n';

    return 0;
}
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int res = lcm(n, m);

    cout << res;
    return 0;
}
#include <iostream>
using namespace std;

int gcd(int n, int m){
    while(m != 0){
        int temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}

int main(){
    int n, m;
    cin >> n >> m;

    int res = gcd(n, m);

    cout << res << '\n';

    return 0;
}
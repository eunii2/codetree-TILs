#include <iostream>
#include <algorithm>
using namespace std;

/*int gcd(int n, int m){
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
}*/

int main(){
    int n, m;
    cin >> n >> m;

    int res = __gcd(n, m); // 알고리즘 헤더 안에 최대공약수를 구하는 함수가 존재함

    cout << res << '\n';

    return 0;
}
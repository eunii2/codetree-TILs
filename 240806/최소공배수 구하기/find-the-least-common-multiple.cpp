#include <iostream>
#include <numeric> //최소공배수(lcm)을 구하는 함수가 내장되어 있음
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int res = lcm(n, m); //lcm 함수

    cout << res;
    return 0;
}
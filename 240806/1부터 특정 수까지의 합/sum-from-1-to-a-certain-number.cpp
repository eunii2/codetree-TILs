// 1부터 특정 수까지의 합
#include <iostream>
using namespace std;

int arr[101];

int main(){
    int n, sum = 0;
    cin >> n;

    int res = 0;

    for(int i=1; i<=n; i++){
        arr[i] = i;
        sum += i;
    }

    res = sum/10;

    cout << res;
}
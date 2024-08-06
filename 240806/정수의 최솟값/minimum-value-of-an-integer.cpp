// 정수의 최솟값
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int min;

    for(int i=0; i<3; i++){
        min = a;
        if(min > b){
            min = b;
        }
        else if(min > c){
            min = c;
        }
    }

    cout << min;
}
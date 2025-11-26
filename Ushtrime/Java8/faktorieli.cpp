#include <iostream>
using namespace std;

long faktorieli (int n){
    if (n < 0) return 0;
    long fak = 1;        
    for (int i = 2; i <= n; ++i) {
        fak *= i;
    }
    return fak;
}

int main(){
    int vler = 5;
    cout << faktorieli(vler);
    return 0;
}
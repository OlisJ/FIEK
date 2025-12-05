#include <iostream>
using namespace std;

bool qift(int n){
    return n % 2 == 0;
}

bool tek(int n){
    return !qift(n);
}

int main(){

    cout << "tek(6) = " << tek(6) << endl;
    cout << "qift(6) = " << qift(6) << endl;
    return 0;
}
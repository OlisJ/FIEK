#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    const int n=7;
    float varg[n]={3.5,8,10,4,6.7,3,2};

    cout << "Maksimumi eshte: " << *max_element(varg, varg + n) << endl;


    return 0;
}
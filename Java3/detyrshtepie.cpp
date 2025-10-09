#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Jepi 3 vlera:"<<endl;
    cin>>a>>b>>c;
    list<int> maksimumi = {a, b, c};

    cout << "Maksimumi eshte: " << *max_element(maksimumi.begin(), maksimumi.end()) << endl;


    return 0;
}
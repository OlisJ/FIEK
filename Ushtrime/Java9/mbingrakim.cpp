#include<iostream>
#include<string>
using namespace std;

int kombino(int n ,int m){
    return n+m;
}

string kombino(string n, string m){
    return n+m;
}

int main(){

    cout<<kombino("Olis","Jashari")<<kombino(10,9);


    return 0;
}
#include<iostream>
using namespace std;
int maksimalja(int vargu[],int n ,int numri);

int main(){

    return 0;
}

int maksimalja(int vargu[],int n ,int numri){
    int max;
    if(numri<1||numri>7){
        max=0;
    }
    else if(numri==7){
        max=(vargu[n-1]>vargu[0])?(vargu[n-1]):(vargu[0]);
    }else{
        max=(vargu[numri-1]>vargu[n])?(vargu[numri-1]):(vargu[numri]);
    }
    return max;
}
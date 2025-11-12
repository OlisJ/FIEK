#include<iostream>
using namespace std;

int main(){
    const int n = 6;
    float koha[n];
    float shuma = 0, mesatarja;
    
    // Input times
    for(int i = 0; i < n; i++){
        cout << "Sheno kohen per lojtarin " << i+1 << ": ";
        cin >> koha[i];
        shuma += koha[i];
    }
    
    // Calculate average
    mesatarja = shuma / n;
    
    // Print values between 30 and 180
    cout << "\nKohet mes 30 dhe 180:" << endl;
    for(int i = 0; i < n; i++){
        if(koha[i] > 30 && koha[i] < 180){
            cout << koha[i] << endl;
        }
    }
    
    // Print values above average
    cout << "\nKohet mbi mesataren (" << mesatarja << "):" << endl;
    for(int i = 0; i < n; i++){
        if(koha[i] > mesatarja){
            cout << koha[i] << endl;
        }
    }

    return 0;
}
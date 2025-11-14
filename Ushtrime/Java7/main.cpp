#include <iostream>
using namespace std;

int main(){
    int m[2][5];
    int CountPositive=0;
    int CountNegative=0;
    int CountOdd=0;
    int sum=0;
    int sumAboveDiagonal=0;

    for(int i=0; i<2;i++){
        for(int j=0;j<5;j++){ 
            cout<<"Venods antarin ["<<i+1<<"] ["<<j+1<<"]"<<endl;
            cin>>m[i][j];
        }
    }

    for(int i=0; i<2;i++){
        for(int j=0;j<5;j++){ 
            
            cout<<m[i][j];
            sum+=m[i][j];

            if(j>i){
                sumAboveDiagonal+=m[i][j];
            };


            if (m[i][j]>=0){
                CountPositive++;
            }else{
                CountNegative++;
            }
            if(m[i][j]%2==1){
                CountOdd++;
            }
        }
    }

    return 0;
}
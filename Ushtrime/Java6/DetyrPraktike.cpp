#include <iostream>
#include <algorithm>
using namespace std;

int main(){

//     const int n=10;
//     int v[n];
//     int shuma;
//     int shuma_qift;
//     int shuma_tek;

//     for(int i=0;i<n;i++){
//         cout<<"Vendose Antarin"<< i+1<<":";
//         cin>>v[i];
//     }

//     //Llogaritini shumen e antarve
//     // for(int i=0;i<n;i++){
//     //     shuma+=v[i];
//     // }
//     // cout<<"Shuma eshte :"<<shuma<<endl;

        
//     for(int i=0;i<n; i++){
//         if(i%2==0){
//             shuma_qift+=v[i];
//     }
    
//     cout<<"Shuma qift eshte :"<< shuma_qift<<endl;

    //Gjendet max dhe min ne varg

    int vargu[5]={1,4,6,8,10};

    
    int maksimalja=*max_element(vargu,vargu+5);
    cout<<maksimalja<<endl;

    int minimumi=*min_element(vargu,vargu+5);
    cout<<minimumi<<endl;


return 0;
}
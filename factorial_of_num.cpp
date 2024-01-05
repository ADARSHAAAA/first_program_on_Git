#include<iostream>
using namespace std;
unsigned long long main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        unsigned long long fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;

        }
        cout<<fact<<endl;
    
    
    
    }
}
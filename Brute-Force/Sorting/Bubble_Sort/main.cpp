#include <bits/stdc++.h>
#define ll long long 
using namespace std;

#define Mxn 20000

void swap(int& n, int& j){
    int temp = n;
    n = j;
    j=temp;
}


int main(){
    int n[Mxn];
    int k;
    cin>>k;
    for(int i =0;i<k;i++){
        cin>>n[i];
    }
    for(int i =0;i<k;i++){
        for(int j=0;j<k;j++){
            if(n[j]>n[j+1]){
                swap(n[j],n[j+1]);
            }
        }
    }
    cout<<endl; 
    for(int i =0; i<k;i++){
        cout<<n[i]<<endl;
    }
}
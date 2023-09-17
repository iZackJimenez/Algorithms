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
    int min;
    cin>>k;
    for(int i =0;i<k;i++){
        cin>>n[i];
    }
    for(int i =0;i<k;i++){
        min = i;
        for(int j=i+1;j<k;j++){
            if(n[j]<n[i]){
                min = j;
            }
        }
        swap(n[i],n[min]);
    }
    cout<<endl; 
    for(int i =0; i<k;i++){
        cout<<n[i]<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void binaryString(int k, int count, int prev){
    static char _string[100];
    if(count ==k){
        cout<<_string<<endl;
        return;
    }
    if(prev==1){
        _string[count]='0';
        binaryString(k,count+1,0);
    }
    else{
    _string[count]='0';
    binaryString(k,count+1,0);
    _string[count]='1';
    binaryString(k,count+1,1);
    }

}

int main(){
    binaryString(4,0,0);
    return 0;
}
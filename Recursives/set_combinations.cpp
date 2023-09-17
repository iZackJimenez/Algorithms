#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printCharacters(int k, int count, char set[], int set_length){
    static char string[100];
    if(count==k){
        cout<<string<<endl;
        return;
    }
    for(int m=0;m<set_length;m++){
        string[count]=set[m];
        printCharacters(k,count+1,set,set_length);
    }
}

int main(){
    char s[2]= {'a','b'};
    int l = 3;
    printCharacters(l,0,s,2);
    
    return 0;
}
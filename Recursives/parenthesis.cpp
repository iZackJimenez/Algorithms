#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printParenthesis(int n,int count,int open, int close){
    static char string[100];
    if(close==n){
        cout<<string<<endl;
        return;
    }
    else{
        if(open>close){
            string[count] = '}';
            printParenthesis(n,count+1,open,close+1);
        }
        if(open<n){
            string[count] = '{';
            printParenthesis(n,count+1,open+1,close);
        }
    }
}

void recursive(int n){
    if(n>0){
        printParenthesis(n,0,0,0);
    }
};



int main(){
    int n;
    cin>>n;
    recursive(n);
    return 0;
}
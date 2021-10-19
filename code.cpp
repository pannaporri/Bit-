#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string op;
    string p="++";
    string m="--";
    while(n>-1){
        getline(cin, op);
        if(op.find(p)!=string::npos){
            x+=1;
 
        }
        else if(op.find(m)!=string::npos){
            x-=1;
        }
n=n-1;
 
            }
            cout<<x<<endl;
            return 0;
        }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string op;
    while(n--){
        cin>>op;
        int k=op.length();
        for(int i=0;i<k;i++){
            if(op[i]=="+"){
                x+=1;
                return 0;
            }
            else if(op[i]=="-"){
                x-=1;
                return 0;
            }
        }
    }
}

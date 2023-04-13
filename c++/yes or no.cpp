#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cout<<"enter a string: "<<endl;
        cin>>s;
        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'|| s[1]=='e')&&(s[2]=='S' || s[2]=='s'))
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }


 return 0;
}


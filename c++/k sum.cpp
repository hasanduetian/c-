#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       int a,b,c;
      cin>>a>>b>>c;
      if((a+b)==c||(b+c)==a||(c+a)==b)
        cout<<"YES\n";
      else
        cout<<"NO\n";
    }

 return 0;
}


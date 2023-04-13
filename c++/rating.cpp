#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,rating;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>rating;
            if(rating<=1399)
                cout<<"Division 4\n";
            else if(rating>=1400&&rating<=1599)
                cout<<"Division 3\n";
             else if(rating>=1600&&rating<=1899)
            cout<<"Division 2\n";
             else
            cout<<"Division 1\n";

    }


 return 0;
}

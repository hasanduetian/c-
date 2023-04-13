#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    int n;
    cin >> n;
    a = pow(2,n);
    b = pow(n,2);
    if(a>b){
        cout <<"Yes\n";
    }
    else{
        cout <<"No\n";
    }
    return 0;
}

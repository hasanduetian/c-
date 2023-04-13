#include<iostream>
using namespace std;
class marks{
    int arr[5];
    public:
    marks(int a, int b, int c){
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
    }
int operator [](int address){
    return arr[address]; // aikhane amra array er modhe value nischi
}

};

int main(){
marks m1(10,20,30);
// aikhan theke arrayer  address nichi
//cout<<m1[0];
//or
for (int i = 0; i < 3; i++){
    cout<<m1[ i ]<<endl;
}



    return 0;
}

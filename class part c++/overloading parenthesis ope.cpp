#include <iostream>
using namespace std;

class mark{
    int bangla;

public:
   mark(int x):bangla(x){}
   
    void printdata(){
        cout << "the marks are " << bangla;
    }
    // parenthesis operator overloading 
    mark operator () (int mk){
        bangla=mk;
        return *this;
    }
};

int main()
{
    mark m1(10);
    m1.printdata();cout<<endl;
    mark m2=m1(20);
    m2.printdata();

    return 0;
}

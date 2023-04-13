#include <iostream>
using namespace std;

#define n 100

class Stack{
    int* st;
    int top;

public:
    Stack(){
        st = new int[n];
        top = -1;
    }

    void push(int x){
        if (top == n-1){
            cout << "Overflow\n";
            return;
        }
        top++;
        st[top] = x;
    }   
    
    void pop(){
        if (top == -1){
            cout << "Underflow\n";
            return;
        }
        top--;
    }   
    
    int Top(){
        if (top == -1){
            cout << "No element in the stack\n";
            return -1;
        }
        else 
            return st[top];
    }    
    
    bool empty(){
        return top == -1;
    }
};

int main(){
    Stack t;
    t.push(5);
    t.push(10);
    t.push(12);
    t.push(20);
    cout << t.Top() << endl;
    t.pop();
    t.pop();
    t.pop();
    //t.pop();
    cout << t.empty() << endl;

    return 0;
}

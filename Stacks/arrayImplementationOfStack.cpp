#include<bits/stdc++.h>
using namespace std;

class Stack{
    // properties of stack
    int capacity;
    int top;
    int* arr;
public:
    // constructor of stack
    Stack(int len){
        capacity = len;
        top = -1;
        arr = new int[len];
    }

    void push(int data){
        // stack is full
        if(top == capacity-1){
            cout << "Stack Overflow" << endl;
            return;
        }

        // increment top by 1
        top++;
        arr[top] = data;
    }

    int pop(){
        if(top == -1){
            cout << "Underflow" << endl;
            return INT_MIN;
        }

        top--;
        int ans = arr[top];

        return ans;
    }

    int getTop(){
        if(top == -1){
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        int ans = arr[top];
        return ans;
    }

    int size(){
        int ans = top+1;
        return ans;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }

        return false;
    }

    bool isFull(){
        if(top == capacity-1){
            return true;
        }

        return false;
    }
};

int main(){

    Stack st(4);
    st.push(1);
    cout << st.getTop() << endl;
    st.push(2);
    cout << st.getTop() << endl;
    st.push(3);
    cout << st.getTop() << endl;
    st.push(4);
    cout << st.getTop() << endl;

    return 0;
}
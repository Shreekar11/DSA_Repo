#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;
public:
    Stack(int len){
        head = NULL;
        capacity = len;
        currSize = 0;
    }

    void push(int data){
        Node* new_node = new Node(data);

        if(capacity == currSize){
            cout << "Overflow" << endl;
            return;
        }

        new_node->next = head;
        head = new_node;
        currSize++;
    }

    int pop(){
        if(head == NULL){
            cout << "Underflow" << endl;
            return INT_MIN;
        }

        Node* temp = head;
        head = head->next;
        int result = temp->val;
        delete temp;
        return result;
    }

    int size(){
        return currSize;
    }    

    int getTop(){
        if(head == NULL){
            cout << "Underflow" << endl;
            return INT_MIN;
        }

        int res = head->val;
        return res;
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
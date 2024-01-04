#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 10001

class Queue{

    int* arr;
    int front;
    int rear;
    int size;
public:

    // constructor
    Queue(){
        front = 0;
        rear = 0;
        size = MAX;
        arr = new int [size];
    }

    bool isFull(){
        if(rear == size){
            return true;
        }

        return false;
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }

        return false;
    }

    void push(int val){
        if(rear == size){
            cout << "Queue Full" << endl;
            return;
        } 
        
        arr[rear] = val;
        rear++;
    }

    int pop(){
        if(front == rear){
            cout << "Queue Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        front++;

        if(front == rear){
            front = 0;
            rear = 0;
        }
        
        return ans;
    }

    int first(){
        return arr[front];
    }

};

int main(){

    Queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.isEmpty()){
        cout << q.first() << endl;
        q.pop();
    } 

    return 0;
}
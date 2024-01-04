#include<bits/stdc++.h>
using namespace std;

class Node{
    // properties of node
public:
    int data;
    Node* next;

    // constructor
    Node(int val){ // val = 50;
        data = val;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    
    // constructor
    LinkedList(){
        head = NULL;
    }

    void insertingAtHead(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            return;
        }

        new_node -> next = head;
        head = new_node;
    }

    void insertingAtTail(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = new_node;
        new_node -> next = NULL;

        return;
    }

    void insertingAtPosition(int val, int pos){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        int curr = 1;
        while(pos-1 != curr){
            curr++;
            temp = temp -> next;
        }

        new_node -> next = temp -> next;
        temp -> next = new_node;

        return;
    }
    
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data <<" ";
            temp = temp -> next;
        }cout << "Null" << endl;

        return;
    }  

};

int main(){

    LinkedList ll;
 
    ll.insertingAtTail(12);
    ll.display();    
    
    ll.insertingAtTail(13);
    ll.display();

    ll.insertingAtPosition(10, 2);
    ll.display();

    return 0;
}
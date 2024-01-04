// Merge two sorted linked list
#include<bits/stdc++.h>
using namespace std;

// Create a class
class Node{

public:
    int val;
    Node* next;

    // create a costructor
    Node(int data){
        val = data;
        next = NULL;
    }

};

class LinkedList{
public:

    Node* head;

    // create a contructor
    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int data){
        Node* new_node = new Node(data);

        if(head == NULL){ // LinkedList is empty
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }

        // point the last node to the new_node 
        temp -> next = new_node;
        new_node -> next = NULL; // point new_node to NULL.
    }

    // display linked list
    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp -> val <<" ";
            temp = temp -> next;
        }cout << "NULL" << endl;

        return;
    }
};

Node* mergeTwoLinkedList(Node* head1 , Node* head2){

    Node* temp = new Node(-1);

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    Node* ptr3 = temp;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 -> val < ptr2 -> val){
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }

        ptr3 = ptr3 -> next; 
    }

    if(ptr1 != NULL){
        ptr3 -> next = ptr1;
    }else{
        ptr3 -> next = ptr2;
    }

    return temp -> next;
}

int main(){

    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(5);
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.display();

    LinkedList ans;
    ans.head = mergeTwoLinkedList(ll1.head, ll2.head);
    ans.display();

    return 0;
}
/*
Rotate the linkedlist by k places.

1 -> 2 -> 3 -> 4 -> 5 , k = 2;
4 -> 5 -> 1 -> 2 -> 3 ;
Traverse thru linked list till n-k position, point the n-k -> NULL and n-k+1 -> head
*/

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

Node* rotateByKPlaces(Node* &head, int k){
    //1. size of linked list
    int size = 0;
    Node* temp = head;
    while(temp){
        temp = temp -> next;
        size++;
    }
    Node* tail = head;
    while(tail -> next){
        tail = tail -> next;
    }
    tail -> next = head;

    //2. Traverse thru n-k pos
    int curr = 1;
    temp = head;
    while(curr != size-k){
        temp = temp->next;
        curr++;
    }
    Node* newHead = temp -> next;
    temp -> next = NULL;
    return newHead;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    int k = 2;
    ll.head = rotateByKPlaces(ll.head, k);
    ll.display();

}
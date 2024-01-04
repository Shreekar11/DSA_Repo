// Remove Kth Node from the end of the linked list
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

int sizeOfLinkedList(Node* head){
    Node* temp = head;
    int size = 0;

    while(temp != NULL){
        temp = temp -> next;
        size++;
    }

    return size;
}

void removeKthNode(Node* head, int k){
    // size of linked list
    int size = sizeOfLinkedList(head);

    Node* temp = head;
    int toRemove = size - k - 1;
    int current = 0;
    while(current != toRemove){
        temp = temp -> next;
        current++;
    }

    temp -> next = temp -> next -> next;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);

    ll.display();

    int k = 5;

    removeKthNode(ll.head, k);

    ll.display();
    // Output - 1 2 3 5 NULL
    // Value \w 4 is removed

    return 0;
}
<<<<<<< HEAD
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

void deleteAlternateElements(Node* head){
    Node* current = head;

    while(current != NULL && current -> next != NULL){
        Node* temp = current -> next;

        current -> next = current -> next -> next;
        free(temp);

        current = current -> next;
    }
}

    void deleteDuplicates(Node* head) {
        Node* temp = head;
        while(temp != NULL && temp -> next != NULL){
            if(temp -> val == temp -> next -> val){
                temp -> next = temp -> next -> next;
            }else{
                temp = temp -> next;
            }
        }
    }


int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(5);

    ll.display();

    deleteDuplicates(ll.head);
    ll.display();


    return 0;
=======
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

void deleteAlternateElements(Node* head){
    Node* current = head;

    while(current != NULL && current -> next != NULL){
        Node* temp = current -> next;

        current -> next = current -> next -> next;
        free(temp);

        current = current -> next;
    }
}

    void deleteDuplicates(Node* head) {
        Node* temp = head;
        while(temp != NULL && temp -> next != NULL){
            if(temp -> val == temp -> next -> val){
                temp -> next = temp -> next -> next;
            }else{
                temp = temp -> next;
            }
        }
    }


int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(5);

    ll.display();

    deleteDuplicates(ll.head);
    ll.display();


    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}
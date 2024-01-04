#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node* next;

    // contructor
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtStart(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            return;
        }

        new_node->next = head;
        head = new_node;

        return;    
    }

    void insertAtEnd(int data){
        Node* new_node = new Node(data); // new_node->val = data ; new_node->next = NULL

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->next = NULL;

        return;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->val <<" ";
            temp = temp->next;
        }cout << "NULL" << endl;

        return;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;

        return;
    }

    void insertAtEnd(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;

        return;
    }

    void insertingAtPosition(int data, int pos){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        Node* temp = head;
        int curr = 1;
        while(pos-1 == curr){
            curr++;
            temp = temp -> next;
        }

        new_node -> next = temp -> next;
        temp -> next -> prev = new_node;

        temp -> next = new_node;
        new_node -> prev = temp;

        return;
        
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->val <<" ";
            temp = temp->next;
        }

        cout << "NULL" << endl;

        return;
    }

    
};

class CircularLinkedList{
public:
    Node* head;

    // contructor
    CircularLinkedList(){
        head = NULL;
    }

    void insertAtStart(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            new_node->next = head;
        }

        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->next = head;
        head = new_node;

        return;
    }

    void insertAtEnd(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        // new_node -> next = temp -> next;
        // temp -> next = new_node;

        temp->next = new_node;
        new_node->next = head;

        return;
    }

    void display(){
        Node* temp = head;
        do{
            cout << temp->val <<" ";
            temp = temp->next;
        }while(temp != head);

        return;
    }
};

int main(){

    LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    // ll.display();

    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    // dll.display();

    dll.insertingAtPosition(5, 2);
    // dll.display();

    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.display();

    return 0;
}
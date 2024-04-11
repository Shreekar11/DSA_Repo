<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    // constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

class CircularLinkedList{
public:
    Node* head;

    // constructor
    CircularLinkedList(){
        head = NULL;
    }

    void insertAtStart(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            new_node->next = head; // circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
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

    CircularLinkedList cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.display();

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    // constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

class CircularLinkedList{
public:
    Node* head;

    // constructor
    CircularLinkedList(){
        head = NULL;
    }

    void insertAtStart(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            new_node->next = head; // circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
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

    CircularLinkedList cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.display();

    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}
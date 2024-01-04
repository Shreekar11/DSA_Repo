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

    void insertAtEnd(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;

        return;
    }

    void display(){
        Node* temp = head;

        do{
            cout << temp->val<<" ";
            temp = temp->next;
        }while(temp != head);

        return;
    }
};

int main(){

    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);
    cll.display();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int val;
    Node* prev;
    Node* next;

    // constructor
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
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

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->val <<" ";
            temp = temp->next;
        }cout << "NULL" << endl;
    }

    void insertAtTail(int data){

        Node* new_node = new Node(data);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        return;

    }

    void insertAtKthPosition(int data, int k){

        Node* new_node = new Node(data);
        Node* temp = head;
        int curr = 1;
        while(curr != k){
            temp = temp->next;
            curr++;
        }

        temp->prev->next = new_node;
        new_node->prev = temp->prev;

        new_node->next = temp;
        temp->prev = new_node;

        // cout << new_node->prev->val <<" "<< new_node->val<<" "<< new_node->next->val<<endl;


        return;

    }
};

int main(){

    DoublyLinkedList dll;

    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.insertAtTail(5);

    dll.display();

    dll.insertAtKthPosition(6, 5);

    dll.display();

    return 0;
}
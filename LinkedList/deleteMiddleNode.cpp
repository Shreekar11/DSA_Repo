// delete middle node 
#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int val;
    Node* next;

    // contructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{

public:

    Node* head;
    LinkedList(){
        head = NULL;
    }

    // insert at tail
    void insertAtTail(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        // traverse till the last node
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->next = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->val <<" ";
            temp = temp->next;
        }cout << "Null" << endl;
    }

};

void deleteMiddleNode(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->val = slow->next->val;
    slow->next = slow->next->next;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(7);
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(6);
    ll.display();

    deleteMiddleNode(ll.head);

    ll.display();

    return 0;
}
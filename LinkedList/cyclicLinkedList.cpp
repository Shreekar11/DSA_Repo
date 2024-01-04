#include<bits/stdc++.h>
using namespace std;

// create a class node
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

// create a class LinkedList which will create a LinkedList
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    // insert at tail in linked list
    void insertAtTail(int data){
        Node* new_node = new Node(data);

        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node = NULL;
        return;
    }

    //display linked list
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val <<" ";
            temp = temp->next;
        }cout << "NULL" << endl;

        return;
    }
};

bool cyclicLinkedList(Node* &head){
    Node* slow = head;
    Node* fast = head;

    bool flag = false;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            cout << slow->val <<endl;
            return true;
        }
    }
    return false;
}

void removingNode(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do{
        slow = slow -> next;
        fast = fast -> next -> next;
    }while(slow != fast);

    fast = head;    
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    slow -> next = NULL;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    // ll.display();

    ll.head->next->next->next->next->next->next->next->next = ll.head->next->next;

    if(cyclicLinkedList(ll.head)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    removingNode(ll.head);
    ll.display();

    return 0;
}
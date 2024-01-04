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
};

bool isPalindrome(Node* &head, Node* &tail){
    while(head != tail && tail != head->prev){
        if(head->val != tail->val){
            return false;
        }

        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main(){

    DoublyLinkedList dll;

    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(3);
    dll.insertAtTail(2);
    dll.insertAtTail(1);

    dll.display();
    if(isPalindrome(dll.head, dll.tail)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
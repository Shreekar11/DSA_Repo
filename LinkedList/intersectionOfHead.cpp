// Find the intersection of head of two linked list
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


int sizeOfFirstLinkedList(Node* head1){
    // size of head1 linkedlist
    Node* ptr1 = head1;
    int size_1 = 0;
    while(ptr1 != NULL){
        ptr1 = ptr1 -> next;
        size_1++;
    }

    return size_1;
}

int sizeOfSecondLinkedList(Node* head2){
    // size of head2 linkedlist
    Node* ptr2 = head2;
    int size_2 = 0;
    while(ptr2 != NULL){
        ptr2 = ptr2 -> next;
        size_2++;
    }

    return size_2;
}

Node* intersectionOfHead(Node* &head1, Node* &head2){
    Node* ptr1;
    Node* ptr2;

    // sizes of both linkedlist
    int l1 = sizeOfFirstLinkedList(head1);
    int l2 = sizeOfSecondLinkedList(head2);

    // Calculating the diff of size and moving the ptr of both to same position.
    int diff;
    if(l1 > l2){
        ptr1 = head1;
        ptr2 = head2;
        diff = l1 - l2;
        while(diff--){
            ptr1 = ptr1 -> next;
        }    
    }else{
        ptr1 = head1;
        ptr2 = head2;
        diff = l2 - l1;
        while(diff--){
            ptr2 = ptr2 -> next;
        }
    }

    bool flag = false;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1;
        }

        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }
    return NULL;

}

int main(){

    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);

    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head->next->next = ll1.head->next->next->next;

    ll2.display();

    Node* ans = intersectionOfHead(ll1.head, ll2.head);

    if(ans){
        cout << ans -> val << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
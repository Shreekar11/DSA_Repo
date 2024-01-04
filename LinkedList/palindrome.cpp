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

bool palindrome(Node* &head){
    //1. Find the middle node of linked list
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    //2. break the linked list from the middle
    Node* curr = slow -> next;
    Node* prev = slow;
    slow -> next = NULL;

    //3. Now reverse the linked list from middle
    while(curr != NULL){
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;  
    }

    //4. Now check if linked list is palindrome
    Node* head1 = head;
    Node* head2 = prev;
    while(head2 != NULL){
        if(head1 -> val != head2 -> val){
            return false;
        }

        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    return true;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);     
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();

    if(palindrome(ll.head)){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
}

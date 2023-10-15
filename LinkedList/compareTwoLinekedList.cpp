// Check wheather two linked list are equal 
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

void compareTwoLinkdeList(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    bool flag = true;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 -> val != ptr2 -> val){
            flag = false;
            break;
        }
        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }

    if(ptr1 != ptr2){
        flag = false;
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return;
}



int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    // ll.insertAtTail(5);

    ll.display();

    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.insertAtTail(4);

    ll2.display();

    compareTwoLinkdeList(ll.head, ll2.head);


}
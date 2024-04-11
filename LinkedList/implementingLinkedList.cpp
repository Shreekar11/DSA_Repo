<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

/*
    Creating a class of Node which will have two properties -
    1 ) Data
    2 ) Address to the next node
*/  
class Node{
    public:
    
    int val; // which stores the data
    Node* next; // which points to the next node.


    // Constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

void createLinkedList(Node* &head, int new_data){
    Node* linkedList = new Node(new_data);

    linkedList -> val = new_data;
    linkedList -> next = head;
}

// inserting a node at head
void insertingAtHead(Node* &head, int new_data){

    // Create a new node.
    Node* new_node = new Node(new_data);

    // allocate the data
    new_node -> val = new_data;

    /*
        Point new_node to the head. Thus new node is now pointing to head which tells
        that the new node is present before the head node
    */
    new_node -> next = head;

    // move head to new node. Therefore a new node is inserted in start position.
    head = new_node;

}

// inserting a node at tail / end
void insertAtTail(Node* &head, int new_data){

    Node* new_node = new Node(new_data);

    Node* temp = head;

    // Due to this loop temp is now pointing to NULL.
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    // insert temp of null in the new_node
    temp -> next = new_node;

} 

// inserting at a position
void insertAtPosition(Node* &head, int new_data, int pos){
    Node* new_node = new Node(new_data);

    Node* temp = head;

    /*
        Create a new node and point it to the next node.
        Then point the previous node to the new_node.
    */

    int current = 0; // keeping track of the current position.
    while(current != pos-1){
        temp = temp -> next;
        current++;
    }
    // now temp is pointing to pos - 1.
    new_node -> next = temp -> next; // point new_node to pos
    temp -> next = new_node; // point previous node to new_node.

}

// deletion at head
void deleteAtHead(Node * &head){
    Node* temp = head;

    head = head -> next;
    free(temp);
}

// deletion at tail
void deleteAtTail(Node* &head){
    Node* secLast = head;
    while(secLast->next->next != NULL){
        secLast = secLast -> next;
    }

    Node* temp = secLast -> next;

    secLast -> next = NULL;
    free(temp);
}

// delete at position
void deleteAtPosition(Node* &head, int pos){

    if(pos == 0){
        deleteAtHead(head);
        return;
    }

    Node* prev = head;
    int current = 0;

    while(current != pos - 1){
        prev = prev -> next;
        current++;
    }

    // now prev is pointing to the pos-1
    // now point its next to pos + next such that the pos is deleted
    Node* temp = prev -> next;
    prev -> next = prev -> next -> next;
    free(temp);

}

// display linked list
void display(Node* &head){
    // head is pointing to new_node thus the temp will traverse thru the new_node
    Node* temp = head;

    while(temp != NULL){

        cout << temp->val <<" ";

        temp = temp -> next;
    }cout << "NULL" << endl;
}

int main(){

    Node* new_node = new Node(10);

    // here head is pointing to the new_node
    Node* head = new_node;

    cout << "Insertion Of Node" << endl;

    insertingAtHead(head, 12);
    display(head);
    insertingAtHead(head, 15);
    display(head);

    insertAtTail(head, 20);
    display(head);
    
    insertAtPosition(head, 4, 1);
    display(head);

    cout << "Deletion Of Node" << endl;

    // deleteAtHead(head);
    // display(head);

    // deleteAtTail(head);
    // display(head);

    deleteAtPosition(head, 1);
    display(head);
 

    

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

/*
    Creating a class of Node which will have two properties -
    1 ) Data
    2 ) Address to the next node
*/  
class Node{
    public:
    
    int val; // which stores the data
    Node* next; // which points to the next node.


    // Constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

void createLinkedList(Node* &head, int new_data){
    Node* linkedList = new Node(new_data);

    linkedList -> val = new_data;
    linkedList -> next = head;
}

// inserting a node at head
void insertingAtHead(Node* &head, int new_data){

    // Create a new node.
    Node* new_node = new Node(new_data);

    // allocate the data
    new_node -> val = new_data;

    /*
        Point new_node to the head. Thus new node is now pointing to head which tells
        that the new node is present before the head node
    */
    new_node -> next = head;

    // move head to new node. Therefore a new node is inserted in start position.
    head = new_node;

}

// inserting a node at tail / end
void insertAtTail(Node* &head, int new_data){

    Node* new_node = new Node(new_data);

    Node* temp = head;

    // Due to this loop temp is now pointing to NULL.
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    // insert temp of null in the new_node
    temp -> next = new_node;

} 

// inserting at a position
void insertAtPosition(Node* &head, int new_data, int pos){
    Node* new_node = new Node(new_data);

    Node* temp = head;

    /*
        Create a new node and point it to the next node.
        Then point the previous node to the new_node.
    */

    int current = 0; // keeping track of the current position.
    while(current != pos-1){
        temp = temp -> next;
        current++;
    }
    // now temp is pointing to pos - 1.
    new_node -> next = temp -> next; // point new_node to pos
    temp -> next = new_node; // point previous node to new_node.

}

// deletion at head
void deleteAtHead(Node * &head){
    Node* temp = head;

    head = head -> next;
    free(temp);
}

// deletion at tail
void deleteAtTail(Node* &head){
    Node* secLast = head;
    while(secLast->next->next != NULL){
        secLast = secLast -> next;
    }

    Node* temp = secLast -> next;

    secLast -> next = NULL;
    free(temp);
}

// delete at position
void deleteAtPosition(Node* &head, int pos){

    if(pos == 0){
        deleteAtHead(head);
        return;
    }

    Node* prev = head;
    int current = 0;

    while(current != pos - 1){
        prev = prev -> next;
        current++;
    }

    // now prev is pointing to the pos-1
    // now point its next to pos + next such that the pos is deleted
    Node* temp = prev -> next;
    prev -> next = prev -> next -> next;
    free(temp);

}

// display linked list
void display(Node* &head){
    // head is pointing to new_node thus the temp will traverse thru the new_node
    Node* temp = head;

    while(temp != NULL){

        cout << temp->val <<" ";

        temp = temp -> next;
    }cout << "NULL" << endl;
}

int main(){

    Node* new_node = new Node(10);

    // here head is pointing to the new_node
    Node* head = new_node;

    cout << "Insertion Of Node" << endl;

    insertingAtHead(head, 12);
    display(head);
    insertingAtHead(head, 15);
    display(head);

    insertAtTail(head, 20);
    display(head);
    
    insertAtPosition(head, 4, 1);
    display(head);

    cout << "Deletion Of Node" << endl;

    // deleteAtHead(head);
    // display(head);

    // deleteAtTail(head);
    // display(head);

    deleteAtPosition(head, 1);
    display(head);
 

    

    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}
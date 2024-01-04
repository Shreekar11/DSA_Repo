// Delete the node having same neighbours on its right and left.
// traversing thru right of the linked list
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

void deleteSameNeighbour(Node* &head, Node* &tail){
    Node* curr = tail->prev;

    while(curr != head){
        Node* prevNode = curr->prev;
        Node* nextNode = curr->next;

        if(prevNode->val == nextNode->val){
            prevNode->next = curr->next;
            nextNode->prev = curr->prev;

            free(curr);
        }

        curr = prevNode;
    }
}

int main(){

    DoublyLinkedList dll;

    dll.insertAtTail(2);
    dll.insertAtTail(1);
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(1);

    dll.display();
    deleteSameNeighbour(dll.head, dll.tail);
    dll.display();

    return 0;
}
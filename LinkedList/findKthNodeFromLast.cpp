// find the k-th node from end
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

int kthPositionFromLast(Node* &head, int k){
    Node* slow = head;
    Node* fast = head;

    int curr = 0;
    while(curr != k){
        fast = fast->next;
        curr++;
    }

    while(fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow->val;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

    cout << kthPositionFromLast(ll.head, 4) << endl;

    return 0;
}
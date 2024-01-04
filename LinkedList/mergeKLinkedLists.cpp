/*
Merge K sorted linked list
Approach - Suppose k = 3, thus three linked lists are to be merged. So start with 
           merging the first two linked lists and then merge the resulting linked list 
           with the third linked list. Keep a note of adding the merged linked list in 
           the vector and removing the two linked list after merging together.
*/ 



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

Node* mergeTwoLinkedList(Node* head1 , Node* head2){

    Node* temp = new Node(-1);

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    Node* ptr3 = temp;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 -> val < ptr2 -> val){
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }

        ptr3 = ptr3 -> next; 
    }

    if(ptr1 != NULL){
        ptr3 -> next = ptr1;
    }else{
        ptr3 -> next = ptr2;
    }

    return temp -> next;
}

Node* mergeKlinkedLists(vector <Node*> &lists){
    // the vector lists containes the head of all the linked lists


    // loop till the size of lists is one, which means after merging only a single 
    // merged sorted linked list is present
    while(lists.size() > 1){

        // merge the first two linked lists
        Node* mergeHead = mergeTwoLinkedList(lists[0], lists[1]);

        // push back the merged linked list in the vector of lists
        lists.push_back(mergeHead);
        // then remove the two merged linked lists
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }

    return lists[0];
}

int main(){

    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(5);
    ll1.insertAtTail(7);
    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(2);
    ll2.insertAtTail(6);
    ll2.insertAtTail(8);
    ll2.display();

    LinkedList ll3;
    ll3.insertAtTail(3);
    ll3.insertAtTail(9);
    ll3.insertAtTail(11);
    ll3.display();

    vector<Node*> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    LinkedList mergedLL;
    mergedLL.head = mergeKlinkedLists(lists);
    mergedLL.display();

    return 0;
}

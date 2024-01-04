#include<iostream>
#include<list>
using namespace std;

void display (list <int> &lst) { 
    // declaring an iterator 
    list <int> :: iterator it;

    // iterator points to specific element in the container.
    // iterator 'it' stores the address of the list element
    // So using '*' operator we can fetch the element it points to '*it'. 
 
    for(it = lst.begin(); it != lst.end(); it++){
        cout<< *it <<" ";
    }
    cout<<endl;
}

int main(){

    // declaring list
    list <int> list1; // similar to vector
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);

    // Remove element from the list
    // list1.remove(3);
    // list1.pop_front(); // removes first element from front
    // list1.pop_back(); // removes last element from back


    // list1 = [1,2,3,4]

    // creating a function to display the list.
    cout<<"List1 - ";
    display(list1);

    list <int> list2(3);
    list <int> :: iterator iter;

    iter = list2.begin();
    *iter = 5;
    iter++;
    
    *iter = 6;
    iter++;
    
    *iter = 7;
    iter++;

    cout<<"List2 - ";
    display(list2);

    // Merging two lists using merge function - " list_name.merge(list_name)" 
    cout<<"Merging List1 and List2 - ";
    list1.merge(list2);
    display(list1);
}
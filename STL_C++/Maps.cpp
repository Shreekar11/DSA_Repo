#include<iostream>
#include<map>
using namespace std;

void display ( map< string, int> &m){

    // using iterators we can print the maps
    map <string, int> :: iterator it; // points to an element in the map

    // first points to the key - i.e 'string' & second points to the value - i.e 'int'
    for(it = m.begin(); it != m.end(); it++){
        cout<< (*it).first <<" : "<< (*it).second<<endl;
        // or
        // cout<< (it -> first) <<" : "<< (it -> second)<<endl;
    }
    // for(auto &val : m){
    //     cout<< val.first << " : "<< val.second<<endl; 
    // }
}

int main(){
    /* Map is a data-structure consisting of a key-value pair which stores data is a 
       sorted order . */ 

    // Declaration of a map
    map <string, int> m;
    // Here 'string' is a key & 'int' is a value

    m["Harry"] = 95;
    m["Rohan"] = 56;
    m["Shubh"] = 70;
    m.insert({ "John" , 50});
    m.insert({ "Ahan" , 0});

    display(m);

    // Finding an element in a map using .find() function.
    // map<string , int> :: iterator i = m.find("Ahan");
    // if(i == m.end()){
    //     cout<<"No value"<<endl;
    // }
    // else{
    //     cout<< (i -> first) <<":"<< (i -> second) <<endl;
    // }


    return 0;
}
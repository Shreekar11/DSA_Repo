<<<<<<< HEAD
#include<iostream>
#include<map>
using namespace std;

int main(){
    
    map <string, int> m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;

        // m[s] = m[s] + 1;
        m[s] ++;
    }
    map <string , int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout<< (*it).first <<" "<< (*it).second <<endl;
    }

    // more clean code would be 
    for(auto itr : m){
        cout<< itr.first <<" "<< itr.second <<endl;
    }

=======
#include<iostream>
#include<map>
using namespace std;

int main(){
    
    map <string, int> m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;

        // m[s] = m[s] + 1;
        m[s] ++;
    }
    map <string , int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout<< (*it).first <<" "<< (*it).second <<endl;
    }

    // more clean code would be 
    for(auto itr : m){
        cout<< itr.first <<" "<< itr.second <<endl;
    }

>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}
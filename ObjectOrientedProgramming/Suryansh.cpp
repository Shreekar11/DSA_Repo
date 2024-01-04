#include <iostream> 
// #include <algorithm> 
#include <vector> 
using namespace std;
class Item 
{
 public:
 char name[10];
 int quantity;
 int cost;
 int code;
 bool operator==(const Item & i1) // bool 1 or 0
 {
 if(code==i1.code) 
 return 1;
 return 0;
 }
 bool operator<(const Item& i1)
 {
 if(code<i1.code) 
 return 1;
 return 0;
 }
};
vector<Item> o1;
void print(Item &i1);
void display();
void insert();
void search();
void delt();
bool compare(const Item &i1, const Item &i2)
{
 if (i1.name != i2.name){
    return i1.cost < i2.cost;
  }
}
int main()
{
 int ch;
 do
 {
 cout<<"OPTIONS"<<endl;
 cout<<"1.Insert"<<endl;
 cout<<"2.Display"<<endl;
 cout<<"3.Search"<<endl;
 cout<<"4.Sort"<<endl;
 cout<<"5.Delete"<<endl;
 cout<<"6.Exit"<<endl;
 cout<<"Enter your option : "<<endl;
 cin>>ch;

 switch(ch)
 {
 case 1:
 insert();
 break;

 case 2:
 display();
 break;

 case 3:
 search();
 break;

 case 4:
 sort(o1.begin(),o1.end(),compare);
 cout<<"\n\n Sorted on the basis of their cost : ";
 display();
 break;

 case 5:
 delt();
 break;

 case 6:
 exit(0);
 }
 
 }while(ch!=7);
 return 0;
}
void insert()
{
 Item i1;
 cout<<"\nEnter Item Name : ";
 cin>>i1.name;
 cout<<"\nEnter Item Quantity : ";
 cin>>i1.quantity;
 cout<<"\nEnter Item Cost : ";
 cin>>i1.cost;
 cout<<"\nEnter Item Code : ";
 cin>>i1.code;
 o1.push_back(i1);
}
void display()
{
 for_each(o1.begin(),o1.end(),print);
}
void print(Item &i1)
{
 cout<<"\n";
 cout<<"\nItem Name : "<<i1.name;
 cout<<"\nItem Quantity : "<<i1.quantity;
 cout<<"\nItem Cost : "<<i1.cost;
 cout<<"\nItem Code : "<<i1.code;
 cout<<"\n\n";
}
void search()
{
//  vector<Item>::iterator p;
 auto p=o1.begin();
 Item i1;
 cout<<"\nEnter Item Code to search : ";
 cin>>i1.code;
 p=find(o1.begin(),o1.end(),i1);
 if(p==o1.end())
 {
 cout<<"\nNot found!!!";
 }
 else
 {
 cout<<"\nFound!!!";
 }
}

void delt()
{
//  vector<Item>::iterator p;
 auto p=o1.begin();
 Item i1;
 cout<<"\nEnter Item Code to delete : ";
 cin>>i1.code;
 p=find(o1.begin(),o1.end(),i1);
 if(p==o1.end())
 {
 cout<<"\nNot found!!!";
 }
 else
 {
 o1.erase(p);
 cout<<"\nDeleted!!!";
}
}

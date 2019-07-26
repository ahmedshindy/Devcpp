#include <iostream>
using namespace std; 
class A
{
    int id;
    static int count;
public:
    A() {
        count++;
        id = count;
        cout << "constructor for id " << id << endl;
    }
    ~A() {
        cout << "destructor for id " << id << endl;
    }
};
  
int A::count = 0; 
  void func () {
       A ob;
    ob.~A();
    
    cout<<"all is well in func "<<endl;  
  }
  
int main() {
   func();
       cout<<"all is well in main\n the constructor gets "<<
       "called by default even if you called it  "<<endl;  

}
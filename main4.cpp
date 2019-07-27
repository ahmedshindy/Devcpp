#include<iostream> 
using namespace std; 

// An abstract class with constructor 
class Base 
{ 
protected: 
int x; 
public: 
virtual void fun() = 0; 
Base(int i) { x = i; } 
}; 

class Derived: public Base 
{ 
	int y; 
public: 
	Derived(int i, int j):Base(i) { y = j; }  // the second constructor does two things set x of the base and y of the derived class;
	void fun() { cout << "x = " << x << ", y = " << y<<endl; } 
}; 

int main(void) 
{ 
	Derived d(4, 5); 
    Derived d2(6,7);
	d.fun(); 
    d2.fun();
      
	return 0; 
} 

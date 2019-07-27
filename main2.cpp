/* / example 2
#include<iostream> 
using namespace std; 

class Base 
{ 
public: 
	virtual void show() = 0; 
}; 

class Derived: public Base 
{ 
public: 
	void show() { cout << "show is called in Derived \n"; } 
}; 

int main(void) 
{ 
	Base *bp = new Derived();           // heap allocated 
	bp->show(); 
    delete bp;
	return 0; 
}
*/
// deriv_VirtualFunctions2.cpp
// compile with: /EHsc
// done ahmed shindy: 
/*
#include <iostream>
using namespace std;


class Base {
public:
   virtual void NameOf();   // Virtual function.
   void InvokingClass();   // Nonvirtual function.
};


// Implement the two functions.
void Base::NameOf() {
   cout << "Base::NameOf virtual fn \n";
}

void Base::InvokingClass() {
   cout << "Invoked by Base non virtual function \n";
}

class Derived : public Base {
public:
   void NameOf();   // Virtual function.
   void InvokingClass();   // Nonvirtual function.
};

// Implement the two functions.
void Derived::NameOf() {
   cout << "Derived::NameOf\n";
}

void Derived::InvokingClass() {
   cout << "Invoked by Derived\n virtual inside this is coming next \n0 ";
    NameOf();
    cout << "Ihas it done ?? above ";
  
}

int main() {
   // Declare an object of type Derived.
   Derived aDerived;

   // Declare two pointers, one of type Derived * and the other
   //  of type Base *, and initialize them to point to aDerived.
   Derived *pDerived = &aDerived;
   Base    *pBase    = &aDerived;

   // Call the functions.
   pBase->NameOf();           // Call virtual function. derived 
   pBase->InvokingClass();    // Call nonvirtual function. base 
   pDerived->NameOf();        // Call virtual function.  derived 
   pDerived->InvokingClass(); // Call nonvirtual function.  derived and calls name of derived
}*/
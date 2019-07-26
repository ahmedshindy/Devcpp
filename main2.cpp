/* deriv_VirtualFunctions.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
class player {
public: 
    player (int a) { x=a; }
    int x=4;
  virtual  void dispx(){   cout<<" in the base class is: " <<x<<endl;  }
    
    };


class wears: public player {
public: 
        wears (int a) { x=a; }
        void dispx(){   cout<<" in the sub class is: " <<x<<endl;  }
            

    
    };



int main() {
    
    player p1(88);

}
*/
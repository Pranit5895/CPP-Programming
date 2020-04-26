#include <iostream>
using namespace std;
 
class Box 
{
   double width;
   public:
      friend void Print_width( Box box );
      void Set_width( double Entered_wid );
};


void Box::setWidth( double Entered_wid )
{
   width = Entered_wid;
}

void Print_width( Box box ) 
{
   cout << "Width of box : " << box.width <<endl;
}
 

int main() 
{
   Box box;
   box.Set_width(10.0);
   Print_width( box );
   return 0;
}

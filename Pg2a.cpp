#include <iostream>
using namespace std;

#define Square(a) (a*a)

int main () {
   int i=5;
      
   cout <<"The square is " << Square(i++) << endl;
   
   cout<<"\n New value of i = "<<i<<endl;

   return 0;
}

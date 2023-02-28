#include <iostream>
using namespace std;

#define MYFUN( x ) #x

int main () {

   cout << MYFUN("C++" is a 'programming' language) << endl;
   
   cout<<"hi this is \"me\""<<endl;

   return 0;
}

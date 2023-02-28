#include <iostream>
using namespace std;

int square(int a) 
{
	return a*a;
}

int main () {
   int i=5;
      
   cout <<"The square is " << square(i++) << endl;
   
   cout<<"\n New value of i = "<<i<<endl;

   return 0;
}

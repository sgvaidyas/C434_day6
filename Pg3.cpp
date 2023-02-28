#include <iostream>
using namespace std;
#define MYSTATUS "COMPLETED"


int main () {
	#ifdef MYSTATUS
	   cout <<"MYSTATUS is defined = " <<MYSTATUS<< endl;
	#endif
	
	#ifndef STATE
	   cout <<"STATE is not defined  " << endl;
	#endif


   return 0;
}

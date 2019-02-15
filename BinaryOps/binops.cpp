	#include <stdio.h>
#include <iostream>
using namespace std;
	//Veremeenko
	int main1(){

		int x = 31;
	
		//printf("%d\n", x<<1);
		for(int i=0; i <32; i++) {
			x = x << 1;
			cout << x << endl;
		}
		// Вывод: "<<" является нециклическим 
		return 0;
	}
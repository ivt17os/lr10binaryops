#include <stdio.h>
#include <iostream>

//.......


int main(){

	int x = 31;
	for (int i = 0; i < 33; i++) 
	{
		printf("%d)   %d\n", i, x);
		x = x<<1;
	}

	// не циклично


	system("pause");
	return 0;
	}
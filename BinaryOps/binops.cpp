//Kychkin

#include <stdio.h>

	int main12(){

		int i=0, x = 31;
	
		for (i=0; i<100; i++) {
			x = x + 1;
			printf("%d\n", x<<1);
		}

		return 0;
	
		//ВЫВОД: Не циклический сдвиг 
	}
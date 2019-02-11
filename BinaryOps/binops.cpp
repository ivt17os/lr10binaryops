	#include <stdio.h>

	int main(){

		int x = 31; i=0;
		
		for(i=1; i<=32;i++){
			x=x<<1;
			printf("%d\n", x<<1);
		}
		//Сдвиг цикличен

		return 0;
	}
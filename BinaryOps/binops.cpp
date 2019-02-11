	#include <stdio.h>
// LVOV
	int main(){

		int x = 31;
		for(int i = 1; i <= 32; i++){
			x = x << 1;
			printf("%d\n", x);
		}
		//cсдвиг не циклический пушто не возвращается 
		return 0;
	}
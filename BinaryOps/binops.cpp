//kononov
#include <stdio.h>

	int main(){

		int x = 31;
	for(int i = 0; i < 100; i++){
		x = x << 1;
		printf("%d\n", x<<1);
	}
		return 0;
		// ВЫВОД: << является обычным сдвигом
	}
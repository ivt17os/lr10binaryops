	#include <stdio.h>

	// Tudupov

	int main(){

		int x = 31,i;
	
		for (i=1; i<=32; i++) {
			x = x << 1;
			printf("%d\n", x);
		}

		// Сдвиг не является циклическим, потому что не возврощается.
		return 0;
	}
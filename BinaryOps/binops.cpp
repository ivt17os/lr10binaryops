	#include <stdio.h>

	int main(){
		int i;
		int x = 31;
	
		for (i=1; i<=32; i++){
			x = x << 1;
		printf("%d\n", x<<1);
		}
		return 0;

		//Сдвиг неявляется циклическим потому что не возвращается 
	}
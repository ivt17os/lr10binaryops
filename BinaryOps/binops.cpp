	#include <stdio.h>

	int main(){

		int x = 31;

		for (int i=1; i<=32; i++)
		{
			x = x << 1;
			printf("%d\n", x);
		}
		return 0;
	}

	//сдвиг не циклический потому что в конце возвращает 0
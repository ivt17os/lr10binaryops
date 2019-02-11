// Kilroy was here

#include <stdio.h>

int main() {

	int x = 31;

	while (x <<= 1)
		printf("%d\n", x);

	return 0;
}
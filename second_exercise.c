#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	int number;
	
	printf("Proporcione un dato entre 0 y 5: ");
	scanf("%d", &number);
	
	bool result = number >= 0 && number <= 5;
	
	printf("\nResultado: %d",  result);
	return 0;
}


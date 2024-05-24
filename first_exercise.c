#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int sizeCharacterFullName =50;
	char fullName[sizeCharacterFullName];
	int age;
	float salary;
	bool loyaltyEmploye;
	int loyaltyEmployeTemp;
	
	printf("Proporciona tu nombre:\n");
	fgets(fullName, sizeCharacterFullName, stdin);
	fullName[strcspn(fullName, "\n")] = '\0';
	
	printf("Proporciona tu edad:\n");
	scanf("%d", &age);
	
	printf("Proporciona tu sueldo (USD):\n");
	scanf("%f", &salary);
	
	printf("Eres empleado de confianza (1/0)?:\n");
	scanf("%d", &loyaltyEmployeTemp);
	loyaltyEmploye = loyaltyEmployeTemp;
	
	// 3. Imprimimos la informacion
	printf("\nLa informacion proporcionada es:");
	printf("\nNombre: %s", fullName);
	printf("\nEdad: %d", age);
	printf("\nSueldo: $%.2f", salary);
	printf("\nEmpleado de confianza: %d", loyaltyEmploye);
	
	return 0;
}


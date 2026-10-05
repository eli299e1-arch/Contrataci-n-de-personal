#include <stdio.h> 

int main() { 
	int experiencia, habilidades; 
	
	printf("Ingrese los anos de experiencia: "); 
	scanf("%d", &experiencia); 
	
	printf("Tiene buenas habilidades tecnicas? (1 = Si, 0 = No): "); 
	scanf("%d", &habilidades); 
	
	if (experiencia >= 5) { 
		printf("El candidato puede ser contratado.\n"); 
	} 
	else if (experiencia >= 3 && habilidades == 1) { 
		printf("El candidato puede ser contratado.\n"); 
	} 
	else { 
		printf("El candidato no cumple con los requisitos.\n"); 
	} 
	return 0; 
}

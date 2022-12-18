//inicio de um programa de conversão de graus celsius para fahrenheit


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale (LC_ALL,"Portuguese");
    
	float c;
	float f;
	float covers;
	
	printf ("Digite uma temperatura em graus Ceusius: ");
	scanf ("%f", &c); 
	
	covers=(c*(9/5)+32);
	
	printf ("a temperatura em graus Fahrenheit é: %.2f", covers );
}

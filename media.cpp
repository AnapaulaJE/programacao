//programa para calcular a m�dia de n�meros.

//tanto %d quanto %i leem n�meros inteiros.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main (){

setlocale (LC_ALL,"Portuguese");
    
	int num ;
	float m;
	int i;
	
	for(i=0; i<3; i++){
	printf ("Digite o %d� n�mero: ",i+1);
	scanf ("%d", &num);
	m= (num+i/3);
}
	printf ("A m�dia �: %.2f", m);
}

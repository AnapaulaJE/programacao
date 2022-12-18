//programa para calcular a média de números.

//tanto %d quanto %i leem números inteiros.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main (){

setlocale (LC_ALL,"Portuguese");
    
	int num ;
	float m;
	int i;
	
	for(i=0; i<3; i++){
	printf ("Digite o %dº número: ",i+1);
	scanf ("%d", &num);
	m= (num+i/3);
}
	printf ("A média é: %.2f", m);
}

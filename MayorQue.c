#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int	numeroUno=15;
	int numeroDos=10;
	
	if(numeroUno > numeroDos){
		
		printf("El n�mero %i es mayor que %i \n", numeroUno,numeroDos);
	}if(numeroUno == numeroDos){
		
		printf("El n�mero %i es igual que %i \n",numeroUno, numeroDos);
	}else{
		printf("El n�mero %i es mayor que %i \n",numeroDos, numeroUno);
	}
	return 0;
}

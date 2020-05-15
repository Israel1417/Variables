/*Tipos de variables*/
	
	#include <stdio.h>




	int main(){
		
		
		
		/*int		numero=2147483648;
				printf("El numero es: %i \n", numero);

	
		char	letra[2]="HO";
		float	a=21.515;
		bool miBooleana=true;
		bool miBooleanaDos=false;
		double	c=215.168945345;
		short   f=14;
		long	l=465464;
		
		printf("La letra es: %s\n", letra);
		printf("El numero a es: %f\n", a);
		printf("El valor de mi booleana es: %d \n", miBooleana);	
		printf("El valor de mi booleana 2 es: %d \n", miBooleanaDos);
		printf("El valor de mi double es: %f \n", c);
		printf("El valor de mi long l es: %l \n", l);
		

		printf("%c de %crbol\n",160, 160);
		printf("%c de %clite\n",130, 130);
		printf("%c de %cman\n",161, 161);
		printf("%c de cami%cn\n", 162, 162);
		printf("%c de t%c\n", 163, 163);
	*/
	
		signed int	numeroUno=-2147483647;
		int numeroDos= 2147483647;
		unsigned int numeroSinSignoUno=0;
		unsigned int numeroSinSignoDos=429496729;	/*borré un digito para que pinte*/
		short int	numeroCorto=-32769;
		short int	numeroCortoDos=32769;
		unsigned short int	numeroCortoSinSignoUno=0;
		unsigned short int	numeroCortoSinSignoDos=65535;
		signed long int	numeroLargoUno=-2147483647;
		signed long int	numeroLargoDos=2147483647;
		unsigned long int	numeroLargoSinSignoUno=0;
		unsigned long int	numeroLargoSinSignoDos=429496729;   /*borré un digito para que pinte*/
		float	numeroFlotanteUno=3.40000000000000000000000000000000000000;
		float	numeFlotanteDos=-00000000000000000000000000000000000003.4;
		
		
		
		printf("%i \n", numeroUno);
		printf("%i \n", numeroDos);
		printf("%i \n", numeroSinSignoUno);
		printf("%i \n", numeroSinSignoDos);
		printf("%i \n", numeroCorto);
		printf("%i \n", numeroCortoDos);
		
		printf("%i \n", numeroCortoSinSignoUno);
		printf("%i \n", numeroCortoSinSignoDos);
		printf("%i \n", numeroLargoUno);
		printf("%i \n", numeroLargoDos);
		printf("%i \n", numeroLargoSinSignoUno);
		printf("%i \n", numeroLargoSinSignoDos);
		printf("%i \n", numeroFlotanteUno);
		printf("%i \n", numeFlotanteDos);
		
			
		return 0;
		}
	
	




	

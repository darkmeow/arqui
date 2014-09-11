/* 

	Desarrollar un programa en C o en Python que
	permita convertir un número en base decimal
	a binario, octal, hexadecimal y base 6.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();

//función menú

void menu(){
	int cmd;
	
	do {

		printf("+-----------------------------------------------+\n");
		printf("|¿Qué desea hacer?\t\t\t\t|\n");
		printf("|\t\t\t\t\t\t|\n");
        printf("|1. Convertir nº base decimal a binario\t\t|\n");
        printf("|2. Convertir nº base decimal a octal\t\t|\n");
        printf("|3. Convertir nº base decimal a hexadecimal\t|\n");
        printf("|4. Convertir nº base decimal a base 6\t\t|\n");
        printf("|0. Salir\t\t\t\t\t|\n");
        printf("+-----------------------------------------------+\n");
        printf("> ");
        scanf("%d", &cmd);
        if(cmd >= 0 && cmd < 10) {
        switch(cmd) {
            
            case 0:
                printf("Chao ^_^ \n");
                exit(0);
                break;
            
            case 1:
            	printf("Estás en la opción 1\n");
            	break;
            
            case 2:
            	printf("Estás en la opción 2\n");
            	break;
			
			case 3:
            	printf("Estás en la opción 3\n");
            	break;

            case 4:
            	printf("Estás en la opción 4\n");
            	break;

            default:
                printf("\n*** Entrada inválida ***\n\n");
                break;
        }
        } else {

                printf("\n*** Entrada inválida ***\n\n");
                break;
        }
    } while(cmd != 0);

}

int main ()
{
   menu(); //llama función que muestra el menú de opciones
   return 0;
}
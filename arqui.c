/* 

	Desarrollar un programa en C o en Python que
	permita convertir un número en base decimal
	a binario, octal, hexadecimal y base 6.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void dec2bin();
void dec2oct();
void dec2hex();
void dec2b6();
void ingresadec();

//funcion para ingresar un numero decimal
void ingresadec(){
	int dec;
	scanf("%d",&dec);
	char *num;
	sprintf(num,"%d",dec);
	printf("El largo del numero %s es %lu\n", num, strlen(num));
	//return(dec);

}


//función decimal a binario
void dec2bin(){
	//printf("decimal_a_binario\n");

}

//función decimal a octal
void dec2oct(){
	printf("decimal_a_octal\n");	
}

//función decimal a hexadecimal
void dec2hex(){
	printf("decimal_a_hexadecimal\n");

}

//función decimal a base 6
void dec2b6(){
	printf("decimal_a_base6\n");

}




//función menú
void menu(){
	int cmd;
	//int entrada;

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
            	printf("Ingresa el nº decimal que deseas convertir a binario\n");
            	printf("> ");
            	ingresadec();
            	
            	//printf("el valor de num es %d\n",num);
            	//dec2bin();
            	break;
            
            case 2:
            	printf("Ingresa el nº decimal que deseas convertir a octal\n");
		      	printf("> ");
				//num=ingresadec();
            	dec2oct();
            	break;
			
			case 3:
            	printf("Ingresa el nº decimal que deseas convertir a hexadecimal\n");
            	printf("> ");
            	//num=ingresadec();
		    	dec2hex();
            	break;

            case 4:
            	printf("Ingresa el nº decimal que deseas convertir a base 6\n");
				printf("> ");
				//num=ingresadec();
            	dec2b6();
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
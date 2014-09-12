/* 

	Desarrollar un programa en C o en Python que
	permita convertir un número en base decimal
	a binario, octal, hexadecimal y base 6.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
char * cambio_base();
void reverse();
long long ingresadec();

//funcion para ingresar un numero decimal
long long ingresadec(){
    long long dec;
	char *entrada=malloc(sizeof(char)*10);
    scanf("%s",entrada);
    dec = atoll(entrada);
    return(dec);
}

//función para invertir un string
void reverse(char s[])
{
      int length = strlen(s) ;
      int c, i, j;

      for (i = 0, j = length - 1; i < j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
      }
}

//función cambio de base
char * cambio_base(long long dec, int base){     
    long long dec2;
    char resto[100];
    int i=0;
    while(dec>0){
        if(((dec%base))<10){ 
            resto[i]=(dec%base)+48;
            dec=dec/base;
            i++;
    }else{
        if((dec%base)==10){
            resto[i]='A';
        } else if(((dec%base))==11){
            resto[i]='B';

        } else if(((dec%base))==12){
            resto[i]='C';

        } else if(((dec%base))==13){
            resto[i]='D';

        } else if(((dec%base))==14){
            resto[i]='E';

        } else if(((dec%base))==15){
            resto[i]='F';

        }
        dec=dec/base;
        i++;
    }
    }
    printf("%s antes del 0000000\n", resto);

    resto[i]='\0';
    printf("%s antes del reverse\n", resto);
    reverse(resto);
    printf("%s antes del reverse\n", resto);
    
    return resto; 

}

//función menú
void menu(){
	int cmd;
    long long dec;
	
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
                dec=ingresadec();
            	printf("El nº %lld en binario es: %s\n", dec, cambio_base(dec,2));  
            	break;
            
            case 2:
            	printf("Ingresa el nº decimal que deseas convertir a octal\n");
		      	printf("> ");
                dec=ingresadec();
                printf("El nº %lld en octal es: %s\n", dec, cambio_base(dec,8)); 
            	break;
			
			case 3:
            	printf("Ingresa el nº decimal que deseas convertir a hexadecimal\n");
            	printf("> ");
                dec=ingresadec();
            	printf("El nº %lld en hexadecimal es: %s\n", dec, cambio_base(dec,16));
            	break;

            case 4:
            	printf("Ingresa el nº decimal que deseas convertir a base 6\n");
				printf("> ");
                dec=ingresadec();
                printf("El nº %lld en base 6 es: %s\n", dec, cambio_base(dec,6));
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

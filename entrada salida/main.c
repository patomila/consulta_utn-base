#include <stdio.h>
#include "func_int.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	do{
	int rst;
	int lado1,lado2;
	printf("ingrese base");
	scanf("%d",&lado1);
	printf("ingrese altura");
	scanf("%d",&lado2);
	if(lado1!=0 && lado2!=0){
		calcuadrado (lado1,lado2);
		rst=1;}

}while(rst!=0);
printf("se deja de calcular");
	return 0;
}

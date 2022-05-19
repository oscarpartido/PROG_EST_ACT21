/*Autor: oscar vivaldi partido ramirez fecha: 31/03/2022
hacer un programa que pida un caracter y diga si es una letra, 
un numero o un caracter de puntuacion 
*/
#include<stdio.h>


int main(){
	unsigned char c;
	//ejemplo de impresion de caracteres especiales
	//printf(pa%cuelo, canci%n \n,164,162);
	printf("Introduce un caracter: ");
	scanf("%c",&c);
	//probar si es una letra
	// mayusculas              minusculas            acentos y ñ          ü        "e
	if (c>='A' && c<='Z' ||   c>='a' && c<='z' ||  c>=160 && c<=165 || c==129 || c==130) {
		printf("<%c> es una letra", c);
	} 
	else if(c>='0' && c<='9'){
		printf("<%c> es un numero \n",c);
	}
	else{
		printf("<%c> es un caracter especial \n",c);
	}
	return 0;
}


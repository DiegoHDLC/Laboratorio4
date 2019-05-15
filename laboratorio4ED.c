#include "lab4ED.h"

int main(){
	FILE *p;

	p = fopen("textoArbol.txt","r");
	AB *unArbol;
	unArbol = malloc(sizeof(AB));
	unArbol = creaArbol(p);
//printf("sale");
system("cls");
	imprimirArbol(unArbol,0);
	printf("\n");
	fclose(p);
}

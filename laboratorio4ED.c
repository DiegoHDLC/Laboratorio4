#include "lab4ED.h"

int main(){
	FILE *p;

	p = fopen("textoArbol.txt","r");
	AB *unArbol;
	unArbol = malloc(sizeof(AB));
	unArbol = creaArbol(p);
	system("cls");
	imprimirArbol(unArbol,0);
	fclose(p);
}

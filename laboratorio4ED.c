#include "lab4ED.h"

int main(){
	FILE *p;
	AB *unArbol;
	p = fopen("textoArbol.txt","r");
	unArbol = malloc(sizeof(AB));
	unArbol = creaArbol(p);
	fclose(p);
}

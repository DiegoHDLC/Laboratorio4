#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _structArbol{
	char dato;
	struct _structArbol *hizq, *hder;
}AB;

//arbol 1247NNN5N8NN36NNN
AB *iniciaAB();
AB *insertaValorAB(AB *, char);
AB *creaNodoAB(char);
void imprimirArbol(AB *, int);

void imprimirArbol(AB *arbol, int cont){
	if(arbol == NULL){
		return;
	}
	else{
		imprimirArbol(arbol->hder,cont+1);
		for(int i = 0; i < cont; i++){
			printf("  ");
		}
		printf("%c\n",arbol->dato);

		imprimirArbol(arbol->hizq,cont+1);
	}
}

AB *iniciaAB(){
	return NULL;
}

AB *creaNodo(char c){
	AB *nuevo;
	nuevo = malloc(sizeof(AB));
	nuevo->dato = c;
	nuevo->hizq = NULL;
	nuevo->hder = NULL;
	return nuevo;
}

AB *creaArbol(FILE *p){
	char c;
	if(feof(p)){
		return NULL;
	}
	c = fgetc(p);
	if(c == 'N'){
		return NULL;
	}
	else{
		AB *nuevoArbol = creaNodo(c);
		nuevoArbol->hizq = creaArbol(p);
		nuevoArbol->hder = creaArbol(p);
		return nuevoArbol;
	}
}

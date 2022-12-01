#ifndef COLADINAMICA_H_INCLUDED
#define COLADINAMICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MINIMO(x,y)  (((x)<(y))?(x):(y))
typedef struct s_nodo{
    void *info;
    unsigned tamInfo;
    struct s_nodo *sig;
}t_nodo;
typedef struct
{
    t_nodo *pri,*ult;
}t_cola;


void crearCola(t_cola *c);
void vaciarCola(t_cola *c);
int colaLlena(const t_cola *c,unsigned tam);
int sacarDeCola(t_cola *c,void *d,unsigned tam);
int ponerEnCola(t_cola *c,const void *d,unsigned tam);
int verTope(const t_cola *c,void *d,unsigned tam);
int colaVacia(const t_cola *c);

#endif // COLADINAMICA_H_INCLUDED

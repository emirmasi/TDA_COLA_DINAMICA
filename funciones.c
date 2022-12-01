#include "ColaDinamica.h"

void crearCola(t_cola *c)
{
    c->pri = NULL;
    c->ult = NULL;
}
void vaciarCola(t_cola *c)
{
    while(c->pri)
    {
        t_nodo *aux = c->pri;
        c->pri = aux->sig;
        free(aux->info);
        free(aux);
    }
}
int colaLlena(const t_cola *c,unsigned tam)
{
    t_nodo *aux = (t_nodo*)malloc(sizeof(t_nodo));
    aux->info = malloc(tam);
    free(aux->info);
    free(aux);
    return aux == NULL || aux->info == NULL;

}
int sacarDeCola(t_cola *c,void *d,unsigned tam)
{
    if(c->pri == NULL)
        return 0;
    t_nodo *elim = c->pri;
    c->pri = elim->sig;
    ///c->pri = c->pri->sig;
    memcpy(d,elim->info,MINIMO(tam,elim->tamInfo));
    free(elim->info);
    free(elim);
    if(c->pri == NULL)
        c->ult = NULL;
    return 1;
}
int ponerEnCola(t_cola *c,const void *d,unsigned tam)
{
    t_nodo *nue = (t_nodo*)malloc(sizeof(t_nodo));
    if(!nue)
        return 0;
    nue->info = malloc(tam);
    if(!nue->info)
    {
        free(nue);
        return 0;
    }
    memcpy(nue->info,d,tam);
    nue->tamInfo = tam;
    nue->sig = NULL;
    ///ACA ME FIJO SI EL QUE INGRESAMOS EN EL PRIMERO DE LA COLA O SI YA HABIA ALGO
    ///si es el primero de la cola , cambio c->pri, si no el ultimo apunta al signuiente
    if(c->ult)///si el ultimo no es nulo
        c->ult->sig = nue;
    else
        c->pri = nue;
    c->ult = nue;
    return 1;
}
int verTope(const t_cola *c,void *d,unsigned tam)
{
    if(c->pri == NULL)
        return 0;
    memcpy(d,c->pri->info,tam);
    return 1;
}
int colaVacia(const t_cola *c)
{
    return c->pri == NULL;

}

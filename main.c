#include "ColaDinamica.h"

int main()
{
    int i;
//    int dato1=1, dato2 = 2,dato3 = 3,datoRec;
//    crearCola(&cola);
//    ponerEnCola(&cola,&dato1,sizeof(int));
//    ponerEnCola(&cola,&dato2,sizeof(int));
//    ponerEnCola(&cola,&dato3,sizeof(int));
//
//    //sacarDeCola(&cola,&datoRec,sizeof(int));
//    //verTope(&cola,&datoRec,sizeof(int));
//    printf("dato recuperado : %d",datoRec);
    for(i = 0;i<10;i++)
    {
        printf("%d\n",(rand()*2)%3 );
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

    typedef struct
    {
        int id;
        char nombre[20];
        int infectados;
        int recuperados;
        int muertos;
    } ePais;

int main()
{
    ePais arg= {22,"arg",23,20,10};
    int recuperadosAcum;
    recuperadosAcum=actualizarRecuperados(arg,25);
    printf("%d",recuperadosAcum);

    char nombre[20]= {"mica"};

    if(!invertirCadena(nombre))
    {
        printf("hubo un problema al invertir la cadena.\n");
    }
    if(!ordenarCaracteres(nombre))
    {
        printf("hubo un problema al ordenar los caracteres de la cadena.\n");
    }

    return 0;
}


void actualizarRecuperados(ePais unPais,int recuperadosDia)
{
    unPais.recuperados+=recuperadosDia;
}

int ordenarCaracteres(char cadena[],int tamcadena)
{
        int todoOk=0;
    if(cadena!=NULL)
    {
        char aux;
        int i;
        while(cadena[i]!="\0")
        {
            for(int k=0;k<i-1;k++)
            {
            for (int j=k+1; j>i; j++)
            {
                if(j>k)
                {
                    aux=j;
                    j=k;
                    k=aux;
                    todoOk=1;
                }
            }
        }
    }
}
    return todoOk;
}

int  invertirCadena(char cadena[])
{
    int todoOk=0;
    if(cadena!=NULL)
    {
        int i;
        while(cadena[i]!="\0")
        {
            i++;
            for (int j=i-1; j>=0; j--)
            {
                printf("%c", cadena[j]);
                todoOk=1;
            }
        }
    }
    return todoOk;
}

/*  Program treba recenicu napisat naopacke.  */

#include <stdio.h>

int main()
{

    char str[100],tekst[100];
    int i=0,j=0;
    printf("Unesi neku recenicu : ");
    gets(str);

// Zapocinjemo obrnut rijeci.
        while(str[i]!='\0')
                i++;
        while(i>0)
    {

                tekst[j]=str[--i];
                ++j;

        }
        tekst[j]='\0';
// Zavrsavamo s obrtanjem rijeci.
        printf("\nObrnuta recenica: ");

    for(i=0;tekst[i]!='\0';i++)
    {

       if(tekst[i+1]==' ' || tekst[i+1]==NULL)
       {

           for(j=i;j>=0 && tekst[j]!=' ';j--)
                        printf("%c",tekst[j]);

                printf(" ");
        }


    }

    return 0;
}

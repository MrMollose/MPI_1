/*
ex nb 1:
enlever les espaces et les blanscs en exes comme example(' ' , '\t' , '\n')
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100];
    char array2[100];
    int j=0;
    int spacecount = 0 ;

    printf("donner une chaine \n");
    gets(array);

    for (int i=0 ; i <= strlen(array) ;i++){
        if (array[i]=='\n' || array[i]=='\t' || array[i]==' ')

            {
                if (j == 0){

                continue;     // verifier si c'est la premier caractere en array2

            }
            else
                {
                while (spacecount == 0)
                    {
                        array2[j] = ' '; // ecrire une espace dans array2 si ce n'est pas la premier caractére
                        j++;
                        spacecount = 1 ; // incrementer la compteur d'espace
                    }
                 }
        }else
        {
            array2[j]=array[i]; // ecrire les caracteres qui ne sont pas des blancs dans array2
            j ++;
            spacecount = 0 ; // reinstaller le contuer d'espace a 0
        }
    }
    printf("%s", array2);
}

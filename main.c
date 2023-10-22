/*
ex nb 2
donner le nombre de recurence d'une mot dans une phrase donnee
*/
#include <stdio.h>
#include <string.h>

int main() {
    char String[1000];
    char words[1000][100];
    int counts[1000] = {0};
    int numWords = 0;


    printf("donner une chaine: "); // entrer le String a traiter
    gets(String);

    strcat(String," error") ; // ajouter un caractere a la fini de String pour depasser un erreur

    int i = 0, j = 0, k = 0;
    while (String[i] != '\0') {   //remplir le tableau de words et compter le recurrence
        if (String[i] == ' ')
            {
            words[numWords][k] = '\0';
            k = 0;
            int found = 0;
            for (int n = 0; n < numWords; n++)
            {
                if (strcmp(words[n], words[numWords]) == 0)
                {
                    counts[n]++;
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                if (numWords < 1000)
                {
                    counts[numWords] = 1;
                    numWords++;
                }
            }
        } else
        {
            words[numWords][k] = String[i];
            k++;
        }
        i++;
    }

    printf("mots \t recurences \n"); // donner la liste des mots et les nombres de reccurence
    for (int n = 0; n < numWords; n++)
    {
        printf("%s \t %d fois \n", words[n], counts[n]);
    }
    return 0;
}

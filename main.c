#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 1000

int main()
{
    char file_name[100];
    printf("Hello please enter the name of the file you want to read\n");
    scanf("%s", file_name);
    FILE* source = NULL;
    char ligne[TAILLE_MAX] = "";
    int compteur_lettre =0;
    char lettre = 'a';
    int longueur=0;
    int i=0;
                                                                                //ouverture du fichier source
    source= fopen("file_name", "r");
      if (source != NULL)
    {
       compteur_lettre = 0;
       lettre = 'a';
                                                                                //ire ligne par ligne
        while(fgets(ligne,TAILLE_MAX,source)!=NULL)
        {
            printf("%s", ligne);
            longueur = strlen(ligne);
                                                                                //compteur les caractères
            for(i=0;i<longueur;i++)
            {
                if(ligne[i]==lettre||ligne[i]==(lettre+32))
                {
                    compteur_lettre++;
                }
            }
        }
        printf("le nomdre de lettre 'a' est %d",compteur_lettre);
        fclose(source);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    return 0;
}

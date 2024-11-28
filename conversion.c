#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int afficher_caractere(va_list arguments)
{
    char caractere = va_arg(arguments, int);
    write(1, &caractere, 1);
    return 1; /*Retourne le nombre de caractères écrits*/
}
int afficher_chaine(va_list arguments)
{
    char *chaine = va_arg(arguments, char *);
    int nombrecaractere = 0;
    while (*chaine != '\0')
    {
        write(1, chaine, 1);
        chaine++;
        nombrecaractere++;
    }
    return nombrecaractere; /*Retourne le nombre de caractères écrits*/
}
int afficher_pourcentage(va_list arguments)
{
    char pourcentage = '%';
    (void)arguments;
    write(1, &pourcentage, 1);
    return 1; /*Retourne le nombre de caractères écrits*/
}
int afficher_entier(va_list arguments)
{
    int entier = va_arg(arguments, int);
    char tampon[50];
    int nombrecaractere = snprintf(tampon, 50, "%d", entier);
    write(1, tampon, nombrecaractere);
    return nombrecaractere; /*Retourne le nombre de caractères écrits*/
}
int afficher_decimal(va_list arguments)
{
    int decimal = va_arg(arguments, int);
    char tampon[50];
    int nombrecaractere = snprintf(tampon, 50, "%d", decimal);
    write(1, tampon, nombrecaractere);
    return nombrecaractere; /*Retourne le nombre de caractères écrits*/
}
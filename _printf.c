#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
* _printf - Fonction qui imite le comportement de printf.
* @format: La chaîne de caractères qui peut contenir des spécificateurs de format.
* 
* Return: Le nombre de caractères imprimés (ou -1 si une erreur se produit).
*/
int _printf(const char *format, ...)
{
va_list arguments; /*Liste des arguments passés à _printf*/
int compteur; /*Compteur pour parcourir la chaîne format*/
int compteur2; /*Compteur pour parcourir le tableau des caractères spéciaux*/
int nombrecaractere = 0; /*Compteur pour le nombre total de caractères imprimés*/
CaractereSpeciale Speciale[] = { /*Tableau associant les caractères spéciaux à leurs fonctions respectives*/
    {'c', afficher_caractere},
    {'s', afficher_chaine},
    {'%', afficher_pourcentage},
    {'d', afficher_decimal},
    {'i', afficher_entier},
};
va_start(arguments, format); /*Initialise la liste des arguments*/
if (format == NULL)
return (-1);
for (compteur = 0; format[compteur] != '\0'; compteur++) {
if (format[compteur] == '%') { /*Si le caractère courant est un '%', chercher le spécificateur*/
compteur++;
for (compteur2 = 0; Speciale[compteur2].lettreachanger != '\0'; compteur2++) 
{ /*Recherche du spécificateur de format correspondant*/
if (format[compteur] == Speciale[compteur2].lettreachanger) /*Si le spécificateur correspond, appel de la fonction associée*/
{
nombrecaractere += Speciale[compteur2].pointeurdefonction(arguments);
/*Ajoute le nombre de caractères imprimés par la fonction associée*/
}
}
}
else
{write(1, &format[compteur], 1); /* Si ce n'est pas un spécificateur, affiche le caractère tel quel*/
nombrecaractere++;}
}
va_end(arguments);
return (nombrecaractere);
}
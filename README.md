# _printf Project

## Description
Ce projet implémente une version personnalisée de la fonction `printf` en C. La fonction `_printf` supporte divers spécificateurs de format pour afficher des caractères, des chaînes, des pourcentages, des entiers et des décimaux.
## Fonctionnalités
- Supporte les spécificateurs de format suivants : `c`, `s`, `%`, `d`, `i`.
- Utilise une structure pour associer les spécificateurs de format à leurs fonctions correspondantes.
## Utilisation
```c
#include "main.h"

int main(void) {
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percentage: %%\n");
    _printf("Integer: %d\n", 123);
    _printf("Decimal: %i\n", 456);
    return (0);
}

```markdown
## Difficultés rencontrées
Nous avons rencontré plusieurs défis lors de la réalisation de ce projet :
- Problèmes de normes de compilation (espaces en trop, points-virgules manquants, accolades manquantes).
- Segmentation fault à cause de l'ordre des lignes et de l'indentation des blocs.
- Définition de la structure et des fonctions dans `main.h`, ce qui a causé des erreurs.

Merci à Arthur et Mathieu (les SWE) pour leur aide précieuse et leurs conseils.

## Diagramme de flux
```mermaid
flowchart TD
    A[Début] --> B[Initialisation des arguments avec va_start]
    B --> C{Parcourir le format jusqu'à '\0'}
    C -->|Non| D[Retourner caractère tel quel]
    C -->|Oui| E{Est-ce un '%'}
    E -->|Non| F[Afficher le caractère tel quel]
    E -->|Oui| G[Rechercher le spécificateur]
    G --> H[Appeler la fonction associée]
    H --> I[Ajouter au compteur le nombre de caractères écrits]
    I --> C
    C -->|Fin du format| J[Terminer]


### Étape 7 : Notes supplémentaires
Enfin, ajoute quelques notes pour compléter le README :

```markdown
## Notes
- Utilisez draw.io pour créer et sauvegarder des diagrammes de flux dans Google Drive.
- Pour plus d'informations sur les diagrammes de flux et leurs symboles, une recherche rapide sur Google avec le terme "flowchart" est recommandée.


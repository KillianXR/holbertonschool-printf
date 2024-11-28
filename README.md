# Projet `_printf` 

Ce projet implémente une version personnalisée de la fonction printf en C. La fonction _printf supporte divers spécificateurs de format pour afficher des caractères, des chaînes, des pourcentages, des entiers et des décimaux.

## Description

La fonction `_printf` permet de traiter des chaînes de caractères avec des spécificateurs de format et d'afficher des informations telles que des caractères, des chaînes de texte, des entiers ou des pourcentages.

## Fonctionnalités

- Afficher un caractère (`%c`).
- Afficher une chaîne de caractères (`%s`).
- Afficher un pourcentage (`%%`).
- Afficher un entier ou un nombre décimal (`%d`, `%i`).

Lors de l'implémentation de ce projet, plusieurs défis ont été rencontrés :

1. **Problèmes de compilation** : Nous avons dû corriger des erreurs liées aux espaces en trop, à des points-virgules manquants et à des accolades non fermées correctement. Cela a conduit à des erreurs de syntaxe récurrentes.
   
2. **Segmentation fault** : Nous avons observé des erreurs de segmentation à cause de problèmes dans l'ordre des lignes de code et l'indentation des blocs de fonctions.

3. **Structure dans le header** : Une des difficultés majeures a été la gestion de la définition des structures et des fonctions dans le fichier `main.h`. Nous avons réalisé qu'il n'était pas optimal de déclarer à la fois la structure `CaractereSpeciale` et les fonctions associées dans le même fichier d'en-tête, ce qui a causé des conflits et de la confusion.

4. **Logique de boucle** : Le projet impliquait des boucles pour parcourir la chaîne de caractères de format et traiter les spécificateurs. Ce processus a demandé une attention particulière pour s'assurer que chaque spécificateur était correctement détecté et que la fonction correspondante était appelée.

Ce projet a été réalisé avec l'aide d'**Arthur** et de **Mathieu**, les développeurs SWE, qui nous ont guidés dans la bonne direction. Ils ont particulièrement contribué à :

- Nous conseiller sur la gestion des boucles pour parcourir la chaîne de format.
- Aider à surmonter les problèmes de compréhension sur les fonctions variadiques.
- Discuter de l'optimisation de la structure du code et de la gestion des spécificateurs de format.

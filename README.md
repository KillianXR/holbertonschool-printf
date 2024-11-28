# Projet `_printf` 

Ce projet implémente une version personnalisée de la fonction printf en C. La fonction _printf supporte divers spécificateurs de format pour afficher des caractères, des chaînes, des pourcentages, des entiers et des décimaux.

## Description

La fonction `_printf` permet de traiter des chaînes de caractères avec des spécificateurs de format et d'afficher des informations telles que des caractères, des chaînes de texte, des entiers ou des pourcentages.

## Fonctionnalités

- Afficher un caractère (`%c`).
- Afficher une chaîne de caractères (`%s`).
- Afficher un pourcentage (`%%`).
- Afficher un entier ou un nombre décimal (`%d`, `%i`).

## Diagramme de flux

Le diagramme de flux ci-dessous montre comment la fonction `_printf` fonctionne à un niveau élevé. Il illustre la manière dont la chaîne de format est traitée et comment chaque spécificateur est géré.

### Flowchart du processus `_printf` :

```mermaid
flowchart TD
    A[Début de _printf] --> B[Initialisation des arguments]
    B --> C[Parcourir chaque caractère dans la chaîne format]
    C --> D{Caractère = '%'?}
    D -->|Oui| E[Spécificateur trouvé ?]
    E -->|Oui| F[Appel de la fonction correspondante]
    F --> G[Incrémenter le compteur de caractères]
    E -->|Non| H[Afficher caractère normal]
    H --> G
    G --> C
    D -->|Non| H
    G --> I[Fin du traitement de la chaîne]
    I --> J[Retour du nombre de caractères imprimés]

Lors de l'implémentation de ce projet, plusieurs défis ont été rencontrés :

1. **Problèmes de compilation** : Nous avons dû corriger des erreurs liées aux espaces en trop, à des points-virgules manquants et à des accolades non fermées correctement. Cela a conduit à des erreurs de syntaxe récurrentes.
   
2. **Segmentation fault** : Nous avons observé des erreurs de segmentation à cause de problèmes dans l'ordre des lignes de code et l'indentation des blocs de fonctions.

3. **Structure dans le header** : Une des difficultés majeures a été la gestion de la définition des structures et des fonctions dans le fichier `main.h`. Nous avons réalisé qu'il n'était pas optimal de déclarer à la fois la structure `CaractereSpeciale` et les fonctions associées dans le même fichier d'en-tête, ce qui a causé des conflits et de la confusion.

4. **Logique de boucle** : Le projet impliquait des boucles pour parcourir la chaîne de caractères de format et traiter les spécificateurs. Ce processus a demandé une attention particulière pour s'assurer que chaque spécificateur était correctement détecté et que la fonction correspondante était appelée.

Ce projet a été réalisé avec l'aide d'**Arthur** et de **Mathieu**, les développeurs SWE, qui nous ont guidés dans la bonne direction. Ils ont particulièrement contribué à :

- Nous conseiller sur la gestion des boucles pour parcourir la chaîne de format.
- Aider à surmonter les problèmes de compréhension sur les fonctions variadiques.
- Discuter de l'optimisation de la structure du code et de la gestion des spécificateurs de format.

### Diagramme de flux en Mermaid

Le diagramme de flux utilise **Mermaid**, un langage de création de diagrammes qui peut être interprété par des outils comme GitHub ou GitLab. Une fois intégré dans le README, il permet de visualiser facilement le processus de la fonction `_printf`, de la gestion des arguments à l'affichage des caractères.

### Utilisation du flowchart

Le flowchart permet de mieux comprendre comment le programme fonctionne en parcourant chaque caractère de la chaîne de format, en détectant les spécificateurs et en appelant les fonctions appropriées pour afficher les valeurs correspondantes. Il peut être utile pour clarifier le fonctionnement interne du programme et pour faciliter les résolutions de bugs en permettant d'identifier les étapes du processus.
<p align="left">
  <a href="#--------libft--">🇬🇧 English</a> |
  <a href="#--------libft---1">🇫🇷 Français</a>
</p>

<h1 align="center">
  <br>
  <img src="https://i.ibb.co/4RBQNHRh/logo-libft-bonus.png" width="150">
  <br>
  libft
  <br>
</h1>

<h4 align="center"><em>A custom C library that reimplements standard functions for string manipulation, memory management, and linked lists.</em></h4>

<p align="center">
  <img src="https://img.shields.io/badge/languages-1-orange">
  <img src="https://img.shields.io/badge/C-100%25-blue">
  <img src="https://img.shields.io/badge/Grade-125%2F100-brightgreen">
</p>

<p align="center">
  <a href="https://drive.google.com/file/d/1c5uZyrkZq_jm7kEUhXKCTXwW80Ru3HgT/view?usp=sharing">Subject</a> |
  <a href="#-project-overview">Overview</a> •
  <a href="#-implemented-functions">Functions</a> •
  <a href="#%EF%B8%8F-compilation">Compilation</a>
</p>

---

## 📌 **Project Overview**
**Libft** is a custom C library that replicates standard functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`. It also includes additional functions to manipulate strings, memory, and linked lists.  

### 🔹 **Key Features**  
✅ Re-implementation of standard C functions.  
✅ Additional utility functions to simplify C programming.  
✅ Bonus functions for linked list manipulation.  

---

## 🔥 Implemented Functions

### 🏛 Libc Functions
| Function      | Description |
|--------------|------------|
| `ft_isalpha` | Checks if a character is a letter (A-Z, a-z). |
| `ft_isdigit` | Checks if a character is a digit (0-9). |
| `ft_isalnum` | Checks if a character is alphanumeric. |
| `ft_isascii` | Checks if a character belongs to the ASCII set. |
| `ft_isprint` | Checks if a character is printable. |
| `ft_strlen`  | Returns the length of a string. |
| `ft_memset`  | Fills a memory block with a specific value. |
| `ft_bzero`   | Sets a memory block to zero. |
| `ft_memcpy`  | Copies memory from source to destination. |
| `ft_memmove` | Copies memory safely even if regions overlap. |
| `ft_strlcpy` | Copies a string with size constraints. |
| `ft_strlcat` | Concatenates two strings with size constraints. |
| `ft_toupper` | Converts a character to uppercase. |
| `ft_tolower` | Converts a character to lowercase. |
| `ft_strchr`  | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to `n` characters. |
| `ft_memchr`  | Finds a byte in a memory block. |
| `ft_memcmp`  | Compares two memory blocks. |
| `ft_strnstr` | Searches for a substring within a string. |
| `ft_atoi`    | Converts a string to an integer. |
| `ft_calloc`  | Allocates and zero-initializes memory. |
| `ft_strdup`  | Duplicates a string. |

### 🚀 Additional Functions
| Function       | Description |
|---------------|------------|
| `ft_substr`   | Extracts a substring from a given string. |
| `ft_strjoin`  | Joins two strings together. |
| `ft_strtrim`  | Trims leading and trailing characters from a string. |
| `ft_split`    | Splits a string based on a delimiter. |
| `ft_itoa`     | Converts an integer to a string. |
| `ft_strmapi`  | Maps a function to each character of a string. |
| `ft_striteri` | Iterates over a string and applies a function. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd`  | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor. |

### 🌟 Bonus Functions (Linked List)
| Function        | Description |
|----------------|------------|
| `ft_lstnew`    | Creates a new linked list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize`   | Returns the size of a linked list. |
| `ft_lstlast`   | Returns the last node of a linked list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes a single node from a list. |
| `ft_lstclear`  | Deletes an entire linked list. |
| `ft_lstiter`   | Iterates over a list and applies a function. |
| `ft_lstmap`    | Maps a function to each element of a list and returns a new list. |

---

## ⚙️ **Compilation**
To generate the library:
```bash
make
```

To remove object files:
```bash
make clean
```

To remove object files and the compiled library:
```bash
make fclean
```

To compile with bonus functions:
```bash
make bonus
```

---
<h1 align="center">
  <br>
  <img src="https://i.ibb.co/4RBQNHRh/logo-libft-bonus.png" width="150">
  <br>
  libft
  <br>
</h1>

<h4 align="center"><em>Une bibliothèque C personnalisée réimplémentant des fonctions standards pour la manipulation de chaînes, la gestion de la mémoire et les listes chaînées.</em></h4>

<p align="center">
  <img src="https://img.shields.io/badge/langages-1-orange">
  <img src="https://img.shields.io/badge/C-100%25-blue">
  <img src="https://img.shields.io/badge/Note-125%2F100-brightgreen">
</p>

<p align="center">
  <a href="https://drive.google.com/file/d/1XFjcbB72ds1LnqsellgGJX-EAhS280fM/view?usp=sharing">Sujet</a> |
  <a href="#-aper%C3%A7u-du-projet">Aperçu</a> •
  <a href="#-fonctions-impl%C3%A9ment%C3%A9es">Fonctions</a> •
  <a href="#%EF%B8%8F-compilation-1">Compilation</a>
</p>

---

## 📌 **Aperçu du projet**
**Libft** est une bibliothèque C personnalisée qui réimplémente des fonctions standards issues de `<string.h>`, `<ctype.h>`, et `<stdlib.h>`. Elle comprend également des fonctions supplémentaires pour manipuler les chaînes, la mémoire et les listes chaînées.  

### 🔹 **Caractéristiques principales**  
✅ Réimplémentation des fonctions standard du C.  
✅ Fonctions utilitaires supplémentaires pour simplifier la programmation en C.  
✅ Fonctions bonus pour manipuler les listes chaînées.  

---

## 🔥 **Fonctions implémentées**

### 🏛 Fonctions Libc
| Fonction      | Description |
|--------------|------------|
| `ft_isalpha` | Vérifie si un caractère est une lettre (A-Z, a-z). |
| `ft_isdigit` | Vérifie si un caractère est un chiffre (0-9). |
| `ft_isalnum` | Vérifie si un caractère est alphanumérique. |
| `ft_isascii` | Vérifie si un caractère appartient au jeu ASCII. |
| `ft_isprint` | Vérifie si un caractère est imprimable. |
| `ft_strlen`  | Renvoie la longueur d'une chaîne. |
| `ft_memset`  | Remplit un bloc mémoire avec une valeur spécifique. |
| `ft_bzero`   | Initialise un bloc mémoire à zéro. |
| `ft_memcpy`  | Copie des données d'une mémoire source à une mémoire destination. |
| `ft_memmove` | Copie des données en gérant le chevauchement des mémoires. |
| `ft_strlcpy` | Copie une chaîne avec des contraintes de taille. |
| `ft_strlcat` | Concatène deux chaînes avec des contraintes de taille. |
| `ft_toupper` | Convertit un caractère en majuscule. |
| `ft_tolower` | Convertit un caractère en minuscule. |
| `ft_strchr`  | Trouve la première occurrence d'un caractère dans une chaîne. |
| `ft_strrchr` | Trouve la dernière occurrence d'un caractère dans une chaîne. |
| `ft_strncmp` | Compare deux chaînes jusqu'à `n` caractères. |
| `ft_memchr`  | Recherche un octet dans un bloc mémoire. |
| `ft_memcmp`  | Compare deux blocs mémoire. |
| `ft_strnstr` | Recherche une sous-chaîne dans une chaîne. |
| `ft_atoi`    | Convertit une chaîne en entier. |
| `ft_calloc`  | Alloue et initialise un bloc mémoire à zéro. |
| `ft_strdup`  | Duplique une chaîne de caractères. |

### 🚀 Fonctions supplémentaires
| Fonction       | Description |
|---------------|------------|
| `ft_substr`   | Extrait une sous-chaîne d'une chaîne donnée. |
| `ft_strjoin`  | Concatène deux chaînes de caractères. |
| `ft_strtrim`  | Supprime les caractères en début et fin de chaîne. |
| `ft_split`    | Divise une chaîne en plusieurs sous-chaînes selon un délimiteur. |
| `ft_itoa`     | Convertit un entier en chaîne de caractères. |
| `ft_strmapi`  | Applique une fonction à chaque caractère d'une chaîne. |
| `ft_striteri` | Itère sur une chaîne et applique une fonction. |
| `ft_putchar_fd` | Écrit un caractère sur un descripteur de fichier. |
| `ft_putstr_fd`  | Écrit une chaîne sur un descripteur de fichier. |
| `ft_putendl_fd` | Écrit une chaîne suivie d'un saut de ligne sur un descripteur de fichier. |
| `ft_putnbr_fd`  | Écrit un entier sur un descripteur de fichier. |

### 🌟 Fonctions bonus (Listes chaînées)
| Fonction        | Description |
|----------------|------------|
| `ft_lstnew`    | Crée un nouveau nœud de liste chaînée. |
| `ft_lstadd_front` | Ajoute un nœud au début d'une liste chaînée. |
| `ft_lstsize`   | Renvoie la taille d'une liste chaînée. |
| `ft_lstlast`   | Renvoie le dernier nœud d'une liste chaînée. |
| `ft_lstadd_back` | Ajoute un nœud à la fin d'une liste chaînée. |
| `ft_lstdelone` | Supprime un seul nœud d'une liste chaînée. |
| `ft_lstclear`  | Supprime entièrement une liste chaînée. |
| `ft_lstiter`   | Applique une fonction à chaque élément d'une liste. |
| `ft_lstmap`    | Applique une fonction à chaque élément d'une liste et renvoie une nouvelle liste. |

---

## ⚙️ **Compilation**
Pour générer la bibliothèque :
```bash
make
```

Pour supprimer les fichiers objets :
```bash
make clean
```

Pour supprimer les fichiers objets et la bibliothèque compilée :
```bash
make fclean
```

Pour compiler avec les fonctions bonus :
```bash
make bonus
```

#0x12. C - Singly linked lists


##General
* Why using linked lists Vs arrays
* How to build and use linked lists
* When to use linked lists

##Resources
1. Google
2. Youtube

###Requirements
+ Editors: Vi|vim, Emacs
+ Compiler: Ubuntu 22.04LTS using gcc, and options -Wall -Werror -Wextra -pedantic -std=gnu89


**Data structure**
```struct
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

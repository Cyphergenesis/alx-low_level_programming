# 0x1A. C - Hash tables
*	By: Julien Barbier
*	 Weight: 1

## Resources
*** Read or watch:  ***
+	What is a HashTable Data Structure - Introduction to Hash Tables , Part 0
+	Hash function
+	Hash table
+	All about hash tables

## Requirements
#### General
+	Allowed editors: vi, vim, emacs
+	Compiler: Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+	All your files should end with a new line

### Data Structures
* Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
# 0x0B. C - malloc, free
## This directory contains answer files for project 0x0A

### 0. Float like a butterfly, sting like a bee
* a function that creates an array of chars, and initializes it with a specific char.
* Prototype: char *create_array(unsigned int size, char c);

### 1. The woman who has no imagination has no wings
* a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* Prototype: char *_strdup(char *str);

### 2. He who is not courageous enough to take risks will accomplish nothing in life 
* a function that concatenates two strings.
* Prototype: char *str_concat(char *s1, char *s2);

### 3. If you even dream of beating me you'd better wake up and apologize
* a function that returns a pointer to a 2 dimensional array of integers.
* Prototype: int **alloc_grid(int width, int height);

### 4. It's not bragging if you can back it up
* a function that frees a 2 dimensional grid previously created by your alloc_grid function.
* Prototype: void free_grid(int **grid, int height);

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
* a function that concatenates all the arguments of your program.
* Prototype: char *argstostr(int ac, char **av);

### 6. I will show you how great I am
* a function that splits a string into words.
Prototype: char **strtow(char *str);

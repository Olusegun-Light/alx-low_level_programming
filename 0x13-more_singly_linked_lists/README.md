# 0x13. C - More singly linked lists
## This directory contains answer files to project 0x12

### 0. Print list
* File: 0-print_listint.c
* a function that prints all the elements of a listint_t list.
* Prototype: size_t print_listint(const listint_t *h);

### 1. List length
* File: 1-listint_len.c
* a function that returns the number of elements in a linked listint_t list.
* Prototype: size_t listint_len(const listint_t *h);

### 2. Add node
* File: 2-add_nodeint.c
* a function that adds a new node at the beginning of a listint_t list.
* Prototype: listint_t *add_nodeint(listint_t **head, const int n);

### 3. Add node at the end
* File: 3-add_nodeint_end.c
* a function that adds a new node at the end of a listint_t list.
* Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);

### 4. Free list
* File: 4-free_listint.c
* a function that frees a listint_t list.
* Prototype: void free_listint(listint_t *head);

### 5. Free
* File: 5-free_listint2.c
* a function that frees a listint_t list.
* Prototype: void free_listint2(listint_t **head);

### 6. Pop
* File: 6-pop_listint.c
* a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
* Prototype: int pop_listint(listint_t **head);

### 7. Get node at index
* File: 7-get_nodeint.c
* a function that returns the nth node of a listint_t linked list.
* Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

### 8. Sum list
* File: 8-sum_listint.c
* a function that returns the sum of all the data (n) of a listint_t linked list.
* Prototype: int sum_listint(listint_t *head);

### 9. Insert
* File: 9-insert_nodeint.c
* a function that inserts a new node at a given position.
* Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

### 10. Delete at index
* 10-delete_nodeint.c
* a function that deletes the node at index index of a listint_t linked list.
* Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);

### 11. Reverse list
* File: 100-reverse_listint.c
* a function that reverses a listint_t linked list.
* Prototype: listint_t *reverse_listint(listint_t **head);

### 12. Print (safe version)
* File: 101-print_listint_safe.c
* a function that prints a listint_t linked list.
* Prototype: size_t print_listint_safe(const listint_t *head);

### 13. Free (safe version)
* File: 102-free_listint_safe.c
* a function that frees a listint_t list.
* Prototype: size_t free_listint_safe(listint_t **h);

### 14. Find the loop
* File: 103-find_loop.c
* a function that finds the loop in a linked list.
* Prototype: listint_t *find_listint_loop(listint_t *head);

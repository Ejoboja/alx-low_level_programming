0X17. C - DOUBLY LINKED LISTS

Tasks Overview

Task 0: Print List
Function: size_t print_dlistint(const dlistint_t *h)
Description: Prints all elements of a dlistint_t list.
Returns: Number of nodes printed.
Example: Refer to sample execution in 0-main.c.

Task 1: List Length
Function: size_t dlistint_len(const dlistint_t *h)
Description: Returns the number of elements in a linked dlistint_t list.

Task 2: Add Node
Function: dlistint_t *add_dnodeint(dlistint_t **head, const int n)
Description: Adds a new node at the beginning of a dlistint_t list.
Returns: Address of the new element added, or NULL if failed.

Task 3: Add Node at the End
Function: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
Description: Adds a new node at the end of a dlistint_t list.
Returns: Address of the new element added, or NULL if failed.

Task 4: Free List
Function: void free_dlistint(dlistint_t *head)
Description: Frees a dlistint_t list.

Task 5: Get Node at Index
Function: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
Description: Returns the nth node of a dlistint_t linked list.

Task 6: Sum List
Function: int sum_dlistint(dlistint_t *head)
Description: Returns the sum of all the data (n) of a dlistint_t linked list.

Task 7: Insert at Index
Function: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
Description: Inserts a new node at a given position in the list.
Returns: Address of the new node added, or NULL if failed.

Task 8: Delete at Index
Function: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
Description: Deletes the node at a given index of a dlistint_t linked list.
Returns: 1 if succeeded, -1 if failed.

Task 9: Crackme4
Description: Find the password for crackme4 and save it in the file 100-password.
Hint: The program prints “OK” when the password is correct.

Task 10: Palindromes
Description: Find the largest palindrome made from the product of two 3-digit numbers and save it in the file 102-result.

Task 11: Crackme5 Keygen
Description: Write a keygen for crackme5. The usage of the crackme and keygen is provided in the README.

Each task includes its associated functions, descriptions, and hints where applicable. Explore the respective files in the repository for implementations and usage examples.

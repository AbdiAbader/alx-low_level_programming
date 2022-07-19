#include "lists.h"
size_t detect_loop(const listint_t *head);
/**
* detect_loop - Counts
* @head: A pointer to th
* Return: 0 , 1 , -1
*/
size_t detect_loop(const listint_t *head)
{
const listint_t *fast, *slow;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
slow = head->next;
fast = (head->next)->next;
while (fast)
{
if (slow == fast)
{
slow = head;
while (slow != fast)
{
nodes++;
slow = slow->next;
fast = fast->next;
}

slow = slow->next;
while (slow != fast)
{
nodes++;
slow = slow->next;
}

return (nodes);
}
slow = slow->next;
fast = (fast->next)->next;
}

return (0);
}

/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = detect_loop(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}

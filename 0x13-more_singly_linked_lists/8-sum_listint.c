#include "lists.h"
/**
 *sum_listint - add all value in the list
 *@head: linked list head
 *Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

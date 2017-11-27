#include "list.h"

int node_count(LINK first, LINK head)
{
	int count = 0;
	head = first;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

void print_forword(LINK first, LINK head, int num)
{
	printf("\nPrint Forword  : ");
	head = first;
	for (int i = 0; i < num; i++)
	{
		printf("%d ", head->value);
		head = head->next;
	}
}

void del_odd_element(LINK first, LINK head, int num)
{
	first = first->next;
	head = first;
}
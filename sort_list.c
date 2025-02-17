
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *current;
	int temp;
	int sorted;

	temp = 0;
	sorted = 0;
	while (sorted != 1)
	{
		sorted = 1;
		current = lst;
		while (current && current->next)
		{
			if (cmp(current->data, current->next->data) == 0)
			{
				temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
				sorted = 0;
			}
			current = current->next;
		}
	}
	return (lst);
}

int cmp(int a, int b)
{
	return (a <= b);
}

t_list *new_node(int data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);

}

void add_node_end(t_list **lst, int data)
{
	t_list *new;
	t_list *current;

	new = new_node(data);;

	if (*lst == NULL)
		*lst = new;
	else
	{
	current = *lst;
		while (current->next)
		{
		current = current->next;
		}
		current->next = new;
	}
}

 int main(void)
{
 	t_list *lst = NULL;
	t_list *current;

	add_node_end(&lst, 50);
	add_node_end(&lst, 10);
	add_node_end(&lst, 0);
	add_node_end(&lst, 80);
	add_node_end(&lst, -20);
	sort_list(lst, &cmp);
	current = lst;
	while (current)
	{
		printf("%d\n", current->data);
		current = current->next;
	}

	free(lst);
	return (0);
}
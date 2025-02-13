#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *temp;
	t_list *prev;

	if (!begin_list || !*begin_list)
		return ;
	current = begin_list;
	prev = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			temp = current->next;
			if (prev != NULL)
				prev->next = temp;
			else
				*begin_list = temp;
			free(current);
			current = temp;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

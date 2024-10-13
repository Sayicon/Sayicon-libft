#include "libft.h"

static void lstprint(t_list **lst)
{
	if (!lst)
		return ;
	while (*lst)
	{
		printf("%s\n", (char *)(*lst)->content);
		*lst = (*lst)->next;
	}
}

static void delContent(void *content)
{
	free(content);
}

int	main(void)
{
	/*
	t_list *myNode = ft_lstnew("Merhaba");
	printf("Node Size: %d", sizeof(*myNode));
	printf("\nNode Content: %s", (char *)myNode->content);
	*/
	/*
	t_list *node1 = ft_lstnew("Merhaba ben node 1");
	t_list *node2 = ft_lstnew("Merhaba ben node 2");
	t_list *node3 = ft_lstnew("Merhaba ben node 3");
	t_list *node4 = ft_lstnew("Merhaba ben node 4");
	t_list *node5 = ft_lstnew("Merhaba ben node 5");

	ft_lstadd_front(&node1,node2);
	ft_lstadd_front(&node2,node3);
	ft_lstadd_front(&node3,node4);
	ft_lstadd_front(&node4,node5);

	t_list *currenNode = node5;
	*/
	/*
	t_list	*new = ft_lstnew("Sona eklencem");
	ft_lstadd_back(&currenNode, new);
	
	while (currenNode)
	{
		printf("%s\n", (char *)currenNode->content);
		currenNode = currenNode->next;
	}
	//printf("list size: %d\n", ft_lstsize(currenNode));
	
	//printf("Lst last node: %s", (char *)ft_lstlast(currenNode)->content);
	*/
	
	t_list	*node1 = ft_lstnew("node1");
	t_list	*node2 = ft_lstnew("node2");
	t_list	*node3 = ft_lstnew("node3");
	t_list	*node4 = ft_lstnew("node4");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node2, node3);
	ft_lstadd_back(&node3, node4);

	//printf("%s\n", (char *)ft_lstlast(node1)->content);

	lstprint(&node1);
	ft_lstclear(&node1,delContent);
	lstprint(&node1);
	printf("%p\n", node1);


	return (0);
}
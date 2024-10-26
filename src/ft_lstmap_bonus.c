/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:50:08 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:11:12 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_lst;
	void	*temp_content;

	if (lst == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		temp_content = f(lst->content);
		temp = ft_lstnew(temp_content);
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			free(temp_content);
			return (0);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}

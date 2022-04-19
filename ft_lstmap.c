/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:07:25 by kyuzu             #+#    #+#             */
/*   Updated: 2022/04/18 10:57:26 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = NULL;
	while (lst != NULL)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(ft_strdup(lst->content))));
		if (newlst == NULL)
		{
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		lst = lst->next;
	}
	return (newlst);
}

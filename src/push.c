/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:07:25 by lrecine-          #+#    #+#             */
/*   Updated: 2025/01/14 17:42:16 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../printf/ft_printf.h"

void	push_a(t_piles *pile, int bonus)
{
	int	i;

	if (pile->size_b)
	{
		pile->size_a++;
		i = pile->size_a;
		while (--i > 0)
			pile->a[i] = pile->a[i - 1];
		pile->a[0] = pile->b[0];
		i = -1;
		pile->size_b--;
		while (++i < pile->size_b)
			pile->b[i] = pile->b[i + 1];
		if (!bonus)
			ft_printf("pa\n");
	}
	else
		return ;
}

void	push_b(t_piles *pile, int bonus)
{
	int	i;

	if (pile->size_a)
	{
		pile->size_b++;
		i = pile->size_b;
		while (--i > 0)
			pile->b[i] = pile->b[i - 1];
		pile->b[0] = pile->a[0];
		i = -1;
		pile->size_a--;
		while (++i < pile->size_a)
			pile->a[i] = pile->a[i + 1];
		if (!bonus)
			ft_printf("pb\n");
	}
	else
		return ;
}

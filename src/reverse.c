/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:04:29 by lrecine-          #+#    #+#             */
/*   Updated: 2025/01/14 17:42:53 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../printf/ft_printf.h"

void	rev_rotate_a(t_piles *pile, int bonus)
{
	int	i;
	int	tmp;

	if (pile->size_a == 0 || pile->size_a == 1)
		return ;
	i = pile->size_a - 1;
	tmp = pile->a[i];
	while (i)
	{
		pile->a[i] = pile->a[i - 1];
		i--;
	}
	pile->a[i] = tmp;
	if (!bonus)
		ft_printf("rra\n");
}

void	rev_rotate_b(t_piles *pile, int bonus)
{
	int	i;
	int	tmp;

	if (pile->size_b == 0 || pile->size_b == 1)
		return ;
	i = pile->size_b - 1;
	tmp = pile->b[i];
	while (i)
	{
		pile->b[i] = pile->b[i - 1];
		i--;
	}
	pile->b[i] = tmp;
	if (!bonus)
		ft_printf("rrb\n");
}

void	rev_rotate_r(t_piles *pile, int bonus)
{
	int	tmp;
	int	i;

	if (pile->size_a == 0 || pile->size_a == 1
		|| (pile->size_b == 0 || pile->size_b == 1))
		return ;
	i = pile->size_a - 1;
	tmp = pile->a[i];
	while (i)
	{
		pile->a[i] = pile->a[i - 1];
		i--;
	}
	pile->a[i] = tmp;
	i = pile->size_b - 1;
	tmp = pile->b[i];
	while (i--)
		pile->b[i] = pile->b[i - 1];
	pile->b[i] = tmp;
	if (!bonus)
		ft_printf("rrr\n");
}

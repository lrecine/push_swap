/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:07:18 by lrecine-          #+#    #+#             */
/*   Updated: 2024/12/12 18:07:19 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../printf/ft_printf.h"

void	swap_a(t_piles *pile, int bonus)
{
	int	tmp;

	if (pile->size_a == 0 || pile->size_a == 1)
		return ;
	tmp = 0;
	tmp = pile->a[0];
	pile->a[0] = pile->a[1];
	pile->a[1] = tmp;
	if (!bonus)
		ft_printf("sa\n");
}

void	swap_b(t_piles *pile, int bonus)
{
	int	tmp;

	if (pile->size_b == 0 || pile->size_b == 1)
		return ;
	tmp = 0;
	tmp = pile->b[0];
	pile->b[0] = pile->b[1];
	pile->b[1] = tmp;
	if (!bonus)
		ft_printf("sb\n");
}

void	swap_s(t_piles *pile, int bonus)
{
	int	tmp;

	if (pile->size_a == 0 || pile->size_a == 1
		|| (pile->size_b == 0 || pile->size_b == 1))
		return ;
	tmp = 0;
	tmp = pile->a[0];
	pile->a[0] = pile->a[1];
	pile->a[1] = tmp;
	tmp = pile->b[0];
	pile->b[0] = pile->b[1];
	pile->b[1] = tmp;
	if (!bonus)
		ft_printf("ss\n");
}

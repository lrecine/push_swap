/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrecine- <lrecine-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:04:06 by lrecine-          #+#    #+#             */
/*   Updated: 2024/12/15 15:11:54 by lrecine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../printf/ft_printf.h"

void	temporary_sort(int *pile_temporaire, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (pile_temporaire[i] > pile_temporaire[j])
			{
				temp = pile_temporaire[i];
				pile_temporaire[i] = pile_temporaire[j];
				pile_temporaire[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	three_numbers_case_pile_a(t_piles *three)
{
	if (three->a[0] > three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] < three->a[2])
		swap_a(three, 0);
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
	{
		swap_a(three, 0);
		rev_rotate_a(three, 0);
	}
	if (three->a[0] > three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] < three->a[2])
		rotate_a(three, 0);
	if (three->a[0] < three->a[1] && three->a[0] < three->a[2]
		&& three->a[1] > three->a[2])
	{
		swap_a(three, 0);
		rotate_a(three, 0);
	}
	if (three->a[0] < three->a[1] && three->a[0] > three->a[2]
		&& three->a[1] > three->a[2])
		rev_rotate_a(three, 0);
}

int	sort(t_piles *pile, int size)
{
	if (check_sorted(pile->a, size, 0) == 0)
	{
		if (size == 2)
			swap_a(pile, 0);
		else if (size == 3)
			three_numbers_case_pile_a(pile);
		else
			quicksort_pile_a(pile, size, 0);
	}
	return (0);
}

int	ft_push(t_piles *pile, int len, int push)
{
	if (push == 0)
		push_b(pile, 0);
	else
		push_a(pile, 0);
	len--;
	return (len);
}

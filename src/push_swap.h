#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_piles
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_piles;

void	push_swap(char **av);
int		push_swap_atoi(char *str, int *pile);
int		push_swap_strlen(char **av);
int		check_sorted(int *pile, int size, int order);
void	check_doubles(int *pile, int size);
void	error_detected(int *pile);
void	push_a(t_piles *pile, int bonus);
void	push_b(t_piles *pile, int bonus);
void	rotate_a(t_piles *pile, int bonus);
void	rotate_b(t_piles *pile, int bonus);
void	rotate_r(t_piles *pile, int bonus);
void	rev_rotate_a(t_piles *pile, int bonus);
void	rev_rotate_b(t_piles *pile, int bonus);
void	rev_rotate_r(t_piles *pile, int bonus);
void	swap_a(t_piles *pile, int bonus);
void	swap_b(t_piles *pile, int bonus);
void	swap_s(t_piles *pile, int bonus);
void	quicksort_three_pile_a_and_b(t_piles *pile, int len);
int		sort_three_b(t_piles *pile, int len);
int		mediane_of_numbers(int *pivot, int *pile, int size);
int		quicksort_pile_a(t_piles *pile, int len, int count_r);
int		quicksort_pile_b(t_piles *pile, int len, int count_r);
void	temporary_sort(int *pile_temporaire, int size);
void	three_numbers_case_pile_a(t_piles *three);
int		sort(t_piles *pile, int size);
int	ft_push(t_piles *pile, int len, int push);

#endif
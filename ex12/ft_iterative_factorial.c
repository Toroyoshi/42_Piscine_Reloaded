/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:14:19 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/22 16:59:29 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (nb >= 1)
		{
			r = r * nb;
			nb--;
		}
	}
	return (r);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-1));
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(22));

// 	return (0);
// }
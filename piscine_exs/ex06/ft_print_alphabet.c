/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:32:16 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/20 16:39:43 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    while(c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}

// int main(void)
// {
//     ft_print_alphabet();
//     return 0;
// }
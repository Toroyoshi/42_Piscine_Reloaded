/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:40:58 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/20 16:41:44 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char c;
    c = '0';
    while(c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}

int main(void)
{
    ft_print_numbers();
    return 0;
}
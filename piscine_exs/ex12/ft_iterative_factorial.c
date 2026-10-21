/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:14:19 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/20 17:17:58 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int r;
    
    r = 0;
    if (nb < 0 || nb > 12)
        return (0);
    
    else if(nb == 0 || nb == 1)
    {
        r = 1;
    }
    
    else
    {
        while(nb >= 1)
        {
            r = r * nb;
            nb--;
        }
    }

    return (r);
}
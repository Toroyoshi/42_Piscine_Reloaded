/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:13:24 by jovitor           #+#    #+#             */
/*   Updated: 2026/10/22 16:49:45 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	return ((s1[i] - s2[i]));
}

int	ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	ft_sort(ac, av);
	if (ac < 1)
		return (0);
	else
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

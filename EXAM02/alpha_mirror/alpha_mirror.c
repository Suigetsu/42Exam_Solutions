/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:29:29 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/11 13:15:06 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (25 - (str[i] - 'a')) + 'a';
			write (1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (25 - (str[i] - 'A')) + 'A';
			write (1, &str[i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write (1, "\n", 1);
	return (0);
}

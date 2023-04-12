/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:43:54 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/12 09:11:13 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_wstr(char *str)
{
	int	i;
	int	len;
	int	to_continue_from;
	int	temp;

	len = ft_strlen(str);
	i = len;
	temp = len;
	while (i > -1)
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && i > -1)
		{
			write (1, &str[i], 1);
			i--;
		}
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && i > -1)
			i--;
		to_continue_from = i;
		i++;
		while (str[i] && i < temp)
		{
			write (1, &str[i], 1);
			i++;
		}
		temp = to_continue_from;
		i = to_continue_from;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write (1, "\n", 1);
	return (0);
}
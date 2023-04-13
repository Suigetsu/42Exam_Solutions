/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 07:18:02 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/13 07:47:43 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n_a;
	int	n_b;

	n_a = a;
	n_b = b;
	if (n_a <= 0 || n_b <= 0)
		return (0);
	while (n_b != n_a)
	{
		if (n_b < n_a)
			n_b += b;
		else if (n_b > n_a)
			n_a += a;
	}
	return (n_b);
}

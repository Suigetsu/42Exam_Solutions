/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrini <mlagrini@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:35:54 by mlagrini          #+#    #+#             */
/*   Updated: 2023/04/12 08:41:41 by mlagrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	tmp;
	int	count;
	int	index;
	
	index = 0;
	count = 0;
	tmp = start;
	if (start < end)
	{
		while (tmp <= end)
		{
			count++;
			tmp++;
		}
		arr = malloc ((count + 1)* sizeof(int));
		while (start <= end)
		{
			arr[index++] = start;
			start++;
		}
	}
	else if (start > end)
	{
		while (tmp >= end)
		{
			count++;
			tmp--;
		}
		arr = malloc ((count + 1)* sizeof(int));
		while (start >= end)
		{
			arr[index++] = start;
			start--;
		}
	}
	else
	{
		arr = malloc (sizeof(int));
		arr[index++] = start;
	}
	return (arr);
}

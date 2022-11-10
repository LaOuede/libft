/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:41:05 by gle-roux          #+#    #+#             */
/*   Updated: 2022/11/10 14:02:50 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library :
	#include <ctype.h>
Description : 
	The isdigit() function tests for a decimal digit character.
Declaration :
	int	ft_isdigit(int c)
Parameters :
	c - The character to test.
Return value :
	The isdigit() function returns zero if the character tests false and 
	returns non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

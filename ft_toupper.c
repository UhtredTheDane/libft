/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 05:44:48 by alexis            #+#    #+#             */
/*   Updated: 2022/07/19 21:05:31 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description:
 *
 * Convert lowercase letters to uppercase.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 15:00:38 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/05 20:23:39 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_abs(int nbr)
{
	return (nbr < 0 ? -nbr : nbr);
}

long long	ft_abs_ll(long long nbr)
{
	return (nbr < 0 ? -nbr : nbr);
}
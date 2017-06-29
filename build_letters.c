/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_letters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:44:33 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:41:37 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trash_grid.h"

int				letter_cap_pos(char c)
{
	if (ft_isupper(c))
		return (c - 'A');
	else if (ft_islower(c))
		return (c - 'a');
	else
		return (-1);
}

static t_letter	**build_lowercase_helper(t_letter **t)
{
	letter_l(t);
	letter_m(t);
	letter_n(t);
	letter_o(t);
	letter_p(t);
	letter_q(t);
	letter_r(t);
	letter_s(t);
	letter_t(t);
	letter_u(t);
	letter_v(t);
	letter_w(t);
	letter_x(t);
	letter_y(t);
	letter_z(t);
	return (t);
}

t_letter		**build_lowercase(void)
{
	t_letter	**t;

	t = (t_letter**)malloc(sizeof(t_letter*) * 26);
	letter_a(t);
	letter_b(t);
	letter_c(t);
	letter_d(t);
	letter_e(t);
	letter_f(t);
	letter_g(t);
	letter_h(t);
	letter_i(t);
	letter_j(t);
	return (build_lowercase_helper(t));
}

static t_letter	**build_uppercase_helper(t_letter **t)
{
	letter_cap_l(t);
	letter_cap_m(t);
	letter_cap_n(t);
	letter_cap_o(t);
	letter_cap_p(t);
	letter_cap_q(t);
	letter_cap_r(t);
	letter_cap_s(t);
	letter_cap_t(t);
	letter_cap_u(t);
	letter_cap_v(t);
	letter_cap_w(t);
	letter_cap_x(t);
	letter_cap_y(t);
	letter_cap_z(t);
	return (t);
}

t_letter		**build_uppercase(void)
{
	t_letter	**t;

	t = (t_letter**)malloc(sizeof(t_letter*) * 26);
	letter_cap_a(t);
	letter_cap_b(t);
	letter_cap_c(t);
	letter_cap_d(t);
	letter_cap_e(t);
	letter_cap_f(t);
	letter_cap_g(t);
	letter_cap_h(t);
	letter_cap_i(t);
	letter_cap_j(t);
	return (build_uppercase_helper(t));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:05:22 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 22:17:52 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASH_GRID_H
# define TRASH_GRID_H

#include "libft.h"

typedef struct	s_grid
{
	int			**pixels;
	int			width;
	int			height;
}				t_grid;

typedef struct	s_letter
{
	int 		width;
	char		**dots;
}				t_letter;




t_grid 			grid;


void			function(void);


void			letter_A(t_letter **l);
void			letter_B(t_letter **l);
void			letter_C(t_letter **l);
void			letter_D(t_letter **l);
void			letter_E(t_letter **l);
void			letter_F(t_letter **l);
void			letter_G(t_letter **l);
void			letter_H(t_letter **l);
void			letter_I(t_letter **l);
void			letter_J(t_letter **l);
void			letter_K(t_letter **l);
void			letter_L(t_letter **l);
void			letter_M(t_letter **l);
void			letter_N(t_letter **l);
void			letter_O(t_letter **l);
void			letter_P(t_letter **l);
void			letter_Q(t_letter **l);
void			letter_R(t_letter **l);
void			letter_S(t_letter **l);
void			letter_T(t_letter **l);
void			letter_U(t_letter **l);
void			letter_V(t_letter **l);
void			letter_W(t_letter **l);
void			letter_X(t_letter **l);
void			letter_Y(t_letter **l);
void			letter_Z(t_letter **l);
void			letter_a(t_letter **l);
void			letter_b(t_letter **l);
void			letter_c(t_letter **l);
void			letter_d(t_letter **l);
void			letter_e(t_letter **l);
void			letter_f(t_letter **l);
void			letter_g(t_letter **l);
void			letter_h(t_letter **l);
void			letter_i(t_letter **l);
void			letter_j(t_letter **l);
void			letter_k(t_letter **l);
void			letter_l(t_letter **l);
void			letter_m(t_letter **l);
void			letter_n(t_letter **l);
void			letter_o(t_letter **l);
void			letter_p(t_letter **l);
void			letter_q(t_letter **l);
void			letter_r(t_letter **l);
void			letter_s(t_letter **l);
void			letter_t(t_letter **l);
void			letter_u(t_letter **l);
void			letter_v(t_letter **l);
void			letter_w(t_letter **l);
void			letter_x(t_letter **l);
void			letter_y(t_letter **l);
void			letter_z(t_letter **l);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:05:22 by irhett            #+#    #+#             */
/*   Updated: 2017/06/28 23:52:33 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASH_GRID_H
# define TRASH_GRID_H

# include "libft.h"

typedef struct		s_grid
{
	unsigned int	**pixels;
	int				width;
	int				height;
}					t_grid;

typedef struct	s_letter
{
	int				width;
	char			**dots;
}					t_letter;

//t_grid 				grid;

t_letter			**build_uppercase(void);
t_letter			**build_lowercase(void);

void				function(void);

int					letter_pos(char c);

void				del_letters(t_letter **upper, t_letter **lower);
void				del_grid(t_grid *g);
t_grid				*init_grid(int wid, int len);

void				letter_cap_a(t_letter **l);
void				letter_cap_b(t_letter **l);
void				letter_cap_c(t_letter **l);
void				letter_cap_d(t_letter **l);
void				letter_cap_e(t_letter **l);
void				letter_cap_f(t_letter **l);
void				letter_cap_g(t_letter **l);
void				letter_cap_h(t_letter **l);
void				letter_cap_i(t_letter **l);
void				letter_cap_j(t_letter **l);
void				letter_cap_k(t_letter **l);
void				letter_cap_l(t_letter **l);
void				letter_cap_m(t_letter **l);
void				letter_cap_n(t_letter **l);
void				letter_cap_o(t_letter **l);
void				letter_cap_p(t_letter **l);
void				letter_cap_q(t_letter **l);
void				letter_cap_r(t_letter **l);
void				letter_cap_s(t_letter **l);
void				letter_cap_t(t_letter **l);
void				letter_cap_u(t_letter **l);
void				letter_cap_v(t_letter **l);
void				letter_cap_w(t_letter **l);
void				letter_cap_x(t_letter **l);
void				letter_cap_y(t_letter **l);
void				letter_cap_z(t_letter **l);
void				letter_a(t_letter **l);
void				letter_b(t_letter **l);
void				letter_c(t_letter **l);
void				letter_d(t_letter **l);
void				letter_e(t_letter **l);
void				letter_f(t_letter **l);
void				letter_g(t_letter **l);
void				letter_h(t_letter **l);
void				letter_i(t_letter **l);
void				letter_j(t_letter **l);
void				letter_k(t_letter **l);
void				letter_l(t_letter **l);
void				letter_m(t_letter **l);
void				letter_n(t_letter **l);
void				letter_o(t_letter **l);
void				letter_p(t_letter **l);
void				letter_q(t_letter **l);
void				letter_r(t_letter **l);
void				letter_s(t_letter **l);
void				letter_t(t_letter **l);
void				letter_u(t_letter **l);
void				letter_v(t_letter **l);
void				letter_w(t_letter **l);
void				letter_x(t_letter **l);
void				letter_y(t_letter **l);
void				letter_z(t_letter **l);

#endif

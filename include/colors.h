/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:45:32 by drahwanj          #+#    #+#             */
/*   Updated: 2025/02/25 22:10:24 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

# define RESET		"\001\033[0m\002"
# define BOLD		"\001\033[1m\002"
# define DIM		"\001\033[2m\002"
# define UNDERLINE	"\001\033[4m\002"
# define BLINK		"\001\033[5m\002"
# define REVERSE	"\001\033[7m\002"
# define HIDDEN		"\001\033[8m\002"

# define BLACK   "\001\033[30m\002"
# define RED     "\001\033[31m\002"
# define GREEN   "\001\033[32m\002"
# define YELLOW  "\001\033[33m\002"
# define BLUE    "\001\033[34m\002"
# define MAGENTA "\001\033[35m\002"
# define CYAN    "\001\033[36m\002"
# define WHITE   "\001\033[37m\002"

# define BG_BLACK   "\001\033[40m\002"
# define BG_RED     "\001\033[41m\002"
# define BG_GREEN   "\001\033[42m\002"
# define BG_YELLOW  "\001\033[43m\002"
# define BG_BLUE    "\001\033[44m\002"
# define BG_MAGENTA "\001\033[45m\002"
# define BG_CYAN    "\001\033[46m\002"
# define BG_WHITE   "\001\033[47m\002"

#endif
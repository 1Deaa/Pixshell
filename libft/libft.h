/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:30:52 by drahwanj          #+#    #+#             */
/*   Updated: 2025/02/14 19:30:55 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

/*
Return the length of S
*/
int		ft_strlen(const char *s);
/*
Allocate COUNT elements of SIZE bytes each, all initialized to 0.
*/
void	*ft_calloc(size_t count, size_t size);
/*
Append SRC onto DEST.
*/
char	*ft_strcat(char *dest, const char *src);
/*
Finds the first occurence of C in S.
*/
char	*ft_strchr(const char *s, int c);
/*
Checks for whitespace.
*/
int		ft_isspace(char c);
/*
Duplicate of S size of N.
*/
char	*ft_strndup(const char *s, size_t n);
/*
Compare S1 with S2.
*/
int		ft_strcmp(const char *s1, const char *s2);

#endif

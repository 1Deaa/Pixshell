/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:30:52 by drahwanj          #+#    #+#             */
/*   Updated: 2025/02/25 23:19:19 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

/* Return the length of S */
int		ft_strlen(const char *s);

/* Allocate COUNT elements of SIZE bytes each, all initialized to 0. */
void	*ft_calloc(size_t count, size_t size);

/* Append SRC onto DEST. */
char	*ft_strcat(char *dest, const char *src);

/* Finds the first occurence of C in S. */
char	*ft_strchr(const char *s, int c);

/* Checks for whitespace. */
int		ft_isspace(char c);

/* Duplicate of S size of N. */
char	*ft_strndup(const char *s, size_t n);

/* Compare S1 with S2. */
int		ft_strcmp(const char *s1, const char *s2);

/* Copy SIZE bytes from SRC to DST. */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* Saves enough space and duplicates S. */
char	*ft_strdup(const char *s1);

/* Finds the len of matrix M. */
int     ft_len_matrix(char **m);

/* Frees allocated memory in matrix M. */
void	ft_free_matrix(char ***m);

/* Allocates memory for matrix M. */
char	**ft_alloc_matrix(char **m);

#endif

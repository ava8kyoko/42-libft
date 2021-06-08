/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:12:56 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/07 14:30:51 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Libc functions
*/
void	*ft_memset(void *str, int character, size_t len_tofill);
void	ft_bzero(void *str, size_t len_tofill);
void	*ft_memcpy(void *dest, const void *src, size_t maxSize_tocopy);
void	*ft_memccpy(void *dest, const void *src, int character_tostop, 
			size_t size_tocopy);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int char_tosearch, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size_tocompare);
size_t	ft_strlen(const char *s);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
char	*ft_strnstr(const char *inside, const char *tofind, size_t len_tosearch);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
** Additional functions
*/

/*
** Bonus functions
*/

/*
** Extra functions
*/

// char	*strncpy(char *dest, const char *src, size_t n);

#endif

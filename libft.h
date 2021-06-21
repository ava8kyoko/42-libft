/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:12:56 by mchampag          #+#    #+#             */
/*   Updated: 2021/06/21 13:16:52 by mchampag         ###   ########.fr       */
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
void *content;
struct s_list *next;
} t_list;

/*
** Fonctions de la Libc
*/
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t len_tofill);
void	*ft_calloc(size_t number_element, size_t size_element);

void	*ft_memchr(const void *str, int character, size_t size_tosearch);
int		ft_memcmp(const void *str1, const void *str2, size_t size_tocompare);
void	*ft_memcpy(void *dest, const void *src, size_t maxSize_tocopy);
void	*ft_memccpy(void *dest, const void *src, int character_tostop,
			size_t size_tocopy);
void	*ft_memmove(void *dest, const void *src, size_t size_tocopy);
void	*ft_memset(void *str, int character, size_t len_tofill);

char	*ft_strchr(const char *str, int character);
char	*ft_strrchr(const char *str, int character);
char 	*ft_strdup(const char *src_tocopy);
size_t	ft_strlcat(char *dst, const char *src, size_t size_dst);
size_t	ft_strlcpy(char *dst, const char *src, size_t size_tocopy);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t len_tocompare);
char	*ft_strnstr(const char *inside, const char *tofind, size_t len_tosearch);

/*
** Fonctions supplémentaire
*/

char	*ft_itoa(int number);

void 	ft_putchar_fd(char character, int fd);
void 	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int number, int fd);
void	ft_putstr_fd(char *str, int fd);

char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strmapi(char const *str_toIterate, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *str, char const *character_totrim);

char 	**ft_split(char const *str, char separator);
char	*ft_substr(char const *str, unsigned int start, size_t size_tocopy);

/*
** Fonctions bonus
*/


/*
** Fonctions extra
*/

#endif

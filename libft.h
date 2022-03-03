/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:34:54 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/08 18:00:57 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list_split
{
	size_t	i;
	size_t	j;
	size_t	k;
}				t_list_split;

typedef struct s_list_substr
{
	size_t	i;
	size_t	j;
}				t_list_substr;

int		ft_atoi(const char *string);
void	ft_bzero(void *string, size_t number);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *string1, const char *string2, size_t number);
int		ft_memcmp(const void *mem1, const void *mem2, size_t number);
int		ft_tolower(int i);
int		ft_toupper(int i);
void	*ft_memccpy(void *dest, const void *src, int symbol, size_t number);
void	*ft_memchr(const void *source, int symbol, size_t number);
void	*ft_memcpy(void *destin, const void *source, size_t number);
void	*ft_memmove(void *destin, const void *source, size_t number);
void	*ft_memset(void *destin, int symbol, size_t numb);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *string, int i);
char	*ft_strnstr(const char *strbig, const char *strsmall, size_t lent);
char	*ft_strrchr(const char *string, int i);
void	*ft_calloc(size_t elemnum, size_t elemsize);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *prefstr, char const *sufstr);
size_t	ft_strlcat(char *bufdst, const char *source, size_t bufdstsize);
size_t	ft_strlcpy(char *bufdst, const char *source, size_t bufdstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *str, char const *set);
char	*ft_substr(char const *string, unsigned int start, size_t lenght);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:04:09 by agondard          #+#    #+#             */
/*   Updated: 2021/05/31 11:49:52 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t cpt, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint( int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr (void *ptr, int value, size_t num);
int				ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void			*ft_memcpy (void *destination, const void *source, size_t num);
void			*ft_memmove(void *destination, const void *source, size_t size);
void			*ft_memset (void *ptr, int value, size_t num);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(char const *str, int c);
char			*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlen (const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif

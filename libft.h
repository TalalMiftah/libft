/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:30:28 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/26 18:27:33 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<unistd.h>

void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int		ft_strlen(const char *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_isalpha(char str);
int					ft_isascii(int i);
int					ft_isdigit(char c);
int					ft_isalnum(int c);
int					ft_isprint(char c);
void				*ft_memset(void *dest, int c, size_t count);
int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_bzero(void *s, unsigned int n);
void				*ft_memchr(void *str, int c, unsigned int n);
int					ft_memcmp(void *str1, void *str2, unsigned int n);
void				*ft_memmove(void *dst, const void *src, unsigned int ln);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlcpy(char *dest, const char *src, unsigned int size);
void				*ft_memcpy(void *dest, const void *src, unsigned int n);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, unsigned int size);
char				*ft_strnstr(const char *ha, const char *ne, unsigned int n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);

#endif

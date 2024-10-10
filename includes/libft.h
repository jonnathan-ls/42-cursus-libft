/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:46:38 by jlacerda          #+#    #+#             */
/*   Updated: 2024/10/10 20:44:05 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *s, unsigned long n);
void	*ft_memset(void *s, int c, unsigned long n);
void	*ft_memchr(const void *s, int c, unsigned long n);
void *ft_memcpy(void *dest, const void *src, unsigned long n);
void *ft_memmove(void *dest, const void *src, unsigned long n);
int	ft_memcmp(const void *s1, const void *s2, unsigned long n);
int	ft_strncmp(const char *s1, const char *s2, unsigned long n);
char	*ft_strnstr(const char *big, const char *little, unsigned long len);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size);

#endif

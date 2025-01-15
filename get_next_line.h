/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 02:18:43 by cari              #+#    #+#             */
/*   Updated: 2025/01/15 07:51:41 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

size_t	ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_readed_line(char *src);
char	*ft_strchr(char *s, int c);
char	*ft_move_start(char *start);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:41:20 by lahammam          #+#    #+#             */
/*   Updated: 2022/05/29 15:46:06 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

int ft_printf(const char *str, ...);
char *ft_strdup(const char *src);
size_t ft_strlen(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
char **ft_split(const char *str, char c);
char *get_next_line(int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_itoa(int n);
int ft_atoi(const char *str);
int ft_isdigit(int c);
int ft_strcmp(const char *s1, const char *s2);
char *get_next_line(int fd);
// void *ft_calloc(size_t count, size_t size);

#endif
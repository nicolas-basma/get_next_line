/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:16:01 by febasma           #+#    #+#             */
/*   Updated: 2024/02/08 15:25:48 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}					t_list;

int					found_newline(t_list *list);
t_list				*find_last_node(t_list *list);
char				*get_line(t_list *list);
void				cpy_str(t_list *list, char *str);
int					len_to_newline(t_list *list);
void				polish_list(t_list **list);
char				*get_next_line(int fd);
void				dealloc(t_list **list, t_list *clean_node, char *buf);
void				create_list(t_list **list, int fd);

#endif

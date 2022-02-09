/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:19:32 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 12:38:38 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <wchar.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 4096

# define LLONG_MAX 9223372036854775807
# define INT_MIN -2147483647

# define UTF_4BYTES_MASK 2031616
# define UTF_3BYTES_MASK 63488
# define UTF_2BYTES_MASK 1920

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_file
{
	int				fd;
	char			buf[BUFF_SIZE + 1];
	int				i;
}					t_file;

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_iswhitespace(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_putchar(char c);
size_t				ft_strlen(const char *s);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strdup(char const *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstcpy(t_list *lst);
void				ft_lstappend(t_list **lst, t_list *link);
t_list				*ft_strsplitlst(char *s, char c);
void				ft_putstrarray(const char **str);
void				ft_putstrlst(t_list *lst);
void				ft_putfile(int fd);
int					ft_filelinecount(int fd);
void				ft_printbits(char c);
int					ft_putwchar(wchar_t c);
unsigned char		*ft_wchar_to_bytes(wint_t c);
double				ft_double_power(double n, int pow);
void				ft_array_swap(int *array, int i1, int i2);
char				*ft_itoa_base(int n, int base);
long double			ft_ldouble_power(long double n, int pow);
void				ft_tabdel(char ***tab);
t_file				*ft_fopen(const char *path);
int					ft_fclose(t_file **stream);
int					ft_fgetc(t_file *stream);
int					ft_nbdigits(int nb);
int					ft_nbdigits_base(unsigned int nb, int base);

#endif

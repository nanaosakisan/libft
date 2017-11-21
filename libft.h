#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		main(void);
void    ft_putchar(char c);
void    ft_putstr(const char *s);
int     ft_strlen(const char *s);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memalloc(size_t size);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
int     ft_strequ(const char *s1, const char *s2);
int     ft_strnequ(const char *s1, const char *s2, size_t n);
void    ft_putendl(const char *s);
void    ft_putnbr(int n);
void    ft_bzero(void *s, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(const char *s, int fd);
void    ft_putendl_fd(const char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **ap);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strmap(const char *s, char (*f)(char));
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strdup(const char *s);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s);

#endif

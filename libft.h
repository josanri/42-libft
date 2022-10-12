/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:07:25 by josesanc          #+#    #+#             */
/*   Updated: 2022/10/04 19:05:31 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# define LIBFT_H

/** @brief The isalpha() function tests for any character for which
 isupper(3) or islower(3) is true.
 * @param c the char to be checked.
 * @return 1 if it's an alphabetic character.
 * @return 0 in any other case. */
int			ft_isalpha(int c);

/**
 * @brief The isdigit() function tests for a decimal digit character.
 * @param c the char to be checked.
 * @return 1 if it's an decimal digit character.
 * @return 0 in any other case. */
int			ft_isdigit(int c);

/**
 * @brief The isalnum() function tests for any character for which
 * isalpha(3) or isdigit(3) is true
 * @param c the char to be checked.
 * @return 1 if it's an alphabetic or digit character.
 * @return 0 in any other case. */
int			ft_isalnum(int c);

/**
 * @brief The isascii() function tests for an ASCII character, which
 * is any character between 0 and octal 0177 inclusive.
 * @param c the char to be checked.
 * @return 1 if it's an ascii character.
 * @return 0 in any other case.  */
int			ft_isascii(int c);

/**
 * @brief The isprint() function tests for any printing character
 * @param c the c
 * @return 1 if it's a printablecharacter.
 * @return 0 in any other case.
 */
int			ft_isprint(int c);

/**
 * @brief  The strlen() function computes the length of the string s.
 * @param s the string to measuer
 * @return The size of the string. */
size_t		ft_strlen(const char *s);

/**
 * @brief The memset() function writes len bytes of value c
 * (converted to an unsigned char) to the string b.
 * @param b the memory position from where to set.
 * @param c the character to put in those positions.
 * @param len the number of characters to write.
 * @return The first parameter. */
void		*ft_memset(void *b, int c, size_t len);

/**
 * @brief The bzero() function writes n zeroed bytes to the string s.
 * If n is zero, bzero() does nothing.
 * @param s the memory position from where to start.
 * @param n the number of bytes to write 0.
 * @return the first parameter. */
void		*ft_bzero(void *s, size_t n);

/**
 * @brief The memcpy() function copies n bytes from memory
 *  area src to memory area dst.
 * If dst and src overlap, behavior is undefined.
 * @param dst where to copy.
 * @param src from where to copy.
 * @param n the number of bytes to copy.
 * @return The first parameter. */
void		*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief The memmove() function copies len bytes from string src to string dst.
 * The two strings may overlap; the copy is always done in a non-destructive
 * manner.
 * @param dst where to copy.
 * @param src from where to copy.
 * @param len the number of bytes to copy.
 * @return The first parameter. */
void		*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0. 
 * @param dst the string where to copy.
 * @param src the string from where to copy.
 * @param dstsize the size of the destination string.
 * @return The length of src. */
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief strlcat() appends string src to the end of dst.  It will append at most
 * dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
 * dstsize is 0 or the original dst string was longer than dstsize (in practice
 * this should not happen as it means that either dstsize is incorrect
 * or that dst is not a proper string).
 * @param dst the destination string, to be concatenated.
 * @param src the source string.
 * @param dstsize the size of destination.
 * @return The length of the dst. */
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief The toupper() function converts a lower-case letter
 * to the corresponding upper-case letter.
 * @param c a character to convert.
 * @return The character converted to a lower-case letter. */
int			ft_toupper(int c);

/**
 * @brief The tolower() function converts an upper-case letter
 * to the corresponding lower-case letter.
 * @param c a character to convert.
 * @return The character converted to a lower-case letter. */
int			ft_tolower(int c);

/**
 * @brief The strchr() function locates the first occurrence of c (converted
 * to a * char) in the string pointed to by s.  The terminating null character
 * is considered to be part of the string; therefore if c is `\0', the functions
 * locate the terminating `\0'.
 * @param s the string where to search.
 * @param c the char to search.
 * @return the memory position where the c is located. NULL if it wasn't. */
char		*ft_strchr(const char *s, int c);

/**
 * @brief The strrchr() function locates the lasr occurrence of c (converted
 * to a * char) in the string pointed to by s.  The terminating null character
 * is considered to be part of the string; therefore if c is `\0', the functions
 * locate the terminating `\0'.
 * @param s the string where to search.
 * @param c the char to search.
 * @return the memory position where the last occurrence of c is located
 *  NULL if it wasn't. */
char		*ft_strrchr(const char *s, int c);

/**
 * @brief The strncmp() function compares not more than n characters. 
 * Because strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 * @param s1 a string.
 * @param s2 another string.
 * @param n the number of character to compare.
 * @return 0 if equal, < 0 if s1 is lower than s2 and > 0 if s1 is greater
 * than s2. */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The memchr() function locates the first occurrence of c (converted
 * to an unsigned char) in string s within n bytes.
 * @param s a memory position.
 * @param c a character to find in the memory.
 * @param n the number of bytes to be able to find since memory position.
 * @return The same memory position. */
void		*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The memcmp() function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 * @param s1 a memory position.
 * @param s2 another memory position.
 * @param n the number of bytes to compare at maximum.
 * @return 0 if equal, < 0 if s1 is lower than s2 and > 0 if s1 is greater than
 * s2. */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief The strnstr() function locates the first occurrence of the
 * null-terminated string needle in the string haystack, where not more than len
 * characters are searched.  Characters that appear after a `\0' character are
 * not searched.
 * @param haystack a string where to search.
 * @param needle the string to search.
 * @param len the number of character for needel to be inside haystack.
 * @return The memory position where needle is located into haystack. */
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Returns an integer of the first part of a string.
 * This string may begin with an arbitrary amount of white space
 * (as determined by isspace(3)) followed by a single optional `+' or `-' sign. 
 * @param str the strring to convert.
 * @return The string conversion. */
int			ft_atoi(const char *str);

/**
 * @brief The calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to the
 * allocated memory.  The allocated memory is filled with bytes of value zero.
 * @param count the number of object to be allocated.
 * @param size the size of each object.
 * @return The new allocated memory. NULL if it failed. */
void		*ft_calloc(size_t count, size_t size);

/**
 * @brief The strdup() function allocates sufficient memory for a copy of the
 * string s1, does the copy, and returns a pointer to it.
 * @param s1 the string to duplicate
 * @return The duplicated string. NULL if bad allocation. */
char		*ft_strdup(const char *s1);

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 * ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
 * @param s a string.
 * @param start where to start from the string.
 * @param len the length to copy (ignored if it is outside the string).
 * @return An allocated string with the substr from start to len characters. */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 * @param s1 first string.
 * @param s2 second string.
 * @return both string allocated. NULL if it failed. */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Returns a copy of ’s1’ with the characters specified in ’set’ removed
 * from the beginning and the end of the string.
 * @param s1 the string to trim.
 * @param set the set of characters.
 * @return The trimmed string. NULL if the allocation fails. */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief The array of new strings resulting from the split. 
 * @param s the string to split.
 * @param c the character to take into account when splitting.
 * @return An array of strings null-terminated.
 * @return NULL if the allocation fails. */
char		**ft_split(char const *s, char c);

/**
 * @brief The string representing the integer. 
 * @param n the number to represent.
 * @return The allocated string. NULL if the allocation fails. */
char		*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’,
 * and passing its index as first argument to create a new string (with
 * malloc(3)) resulting from successive applications of ’f’.
 * @param s the string where to map the function.
 * @param f the function to be mapped.
 * @return The new string. */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function ’f’ on each character of the string passed
 * as argument, passing its index as first argument. Each character is passed
 * by address to ’f’ to be modified if necessary.
 * @param s the string where to iterate.
 * @param f the function to apply. */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c character to ouptut.
 * @param fd file descriptor on where to output the number. */
void		ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s string to ouptut.
 * @param fd file descriptor on where to output the number. */
void		ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file
 * descriptor and an end of line.
 * @param s string to ouptut.
 * @param fd file descriptor on where to output the number. */
void		ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n number to ouptut.
 * @param fd file descriptor on where to output the number. */
void		ft_putnbr_fd(int n, int fd);

/* Generic type list */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Allocates (with malloc(3)) and returns a new node.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’. ’next’ is initialized to NULL. 
 * @param content to include to the node.
 * @return A node or NULL if it failed. */
t_list		*ft_lstnew(void *content);

/**
 * @brief  Adds the node ’new’ at the beginning of the list.
 * @param lst a list.
 * @param new the new node to be added at the front. */
void		ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in a list.
 * @param lst a list.
 * @return The number of nodes in a list, 0 if it is empty. */
int			ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 * @param lst a list.
 * @return The last node. */
t_list		*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node ’new’ at the end of the list. 
 * @param lst a list.
 * @param new the new node to be added at the end. */
void		ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given as a
 * parameter and free the node. The memory of ’next’ must not be freed.
 * @param lst a list.
 * @param del the function to free the last. */
void		ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Deletes and frees the given node and every
 * successor of that node, using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 * @param lst a pointer to the first node of the list.
 * @param del a function to free the content of the node. */
void		ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’
 * on the content of each node.
 * @param lst the first node of the list.
 * @param f the function to apply to every node. */
void		ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node. Creates a new list
 * resulting of the successive applications of the function
 * ’f’. The ’del’ function is used to delete the content of
 * a node if needed.
 * @param lst a list.
 * @param f a function to apply to every node.
 * @param del a funtion to free in case of error.
 * @return a new list with the content of lst after applying f. */
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
#include "libft.h"

///////////////////****ft_isalpha******////////////////////////

// int main()
// {
//     printf("%i", ft_isalpha(''));
// }

///////////////////****isdigit******////////////////////////

// int main()
// {
//     printf("%i", ft_isdigit('E'));
// }

/////////////////****ft_isalnum******////////////////////////

// int main()
// {
//     printf("%i", ft_isalnum('?'));
// }

///////////////////****ft_isascii******////////////////////////

// int main()
// {
//     printf("%i", ft_isascii(128));
// }
///////////////////****ft_isprint******////////////////////////

// int main()
// {
//     printf("%i", ft_isprint(55));
// }

///////////////////****ft_strlen******////////////////////////

// int main()
// {
//     char *str = "12345678";
//     printf("%zu", ft_strlen());
// }

/////////////****ft_memset******////////////////////////

// int main()
// {
//     int a = 6;
//     ft_memset(&a, 255, 4);
//     ft_memset(&a, 245, 2);
//     ft_memset(&a, 16, 1);



//     //1337
//     // memset(s, '*', -1);
//     printf("%d", a);
// }

/////////////////****ft_bzero******////////////////////////

// int main()
// {
//     char s[20] = "yazid";
//     bzero(s, 0);
//     // ft_bzero(s, 0);
//     printf("%s", s);
// }

/////////////////****ft_memcpy******////////////////////////

// int main()
// {
//     char dst[] = "*****";
//     char *src = "yazid";
//     // memcpy(dst, src, 2);
//     ft_memcpy(dst, src, 5);
//     printf("%s", dst);
// }

/////////////////****memmove******////////////////////////

// int main()
// {
//     char dst[] = "yyyyy";
//     char *src = "yazid";
//     memmove(dst, src, 2);
//     ft_memmove(dst, src, 4);
//     printf("%s", dst);
// }

/////////////////****ft_strlcpy******////////////////////////

// int main()
// {
//     char dst[20];
//     char *src = "yazid";
//     printf("%zu", ft_strlcpy(dst, src, 5));
//     printf("%s", dst);
// }

/////////////////****ft_strlcat******////////////////////////

// int main()
// {
// 	char dst[20] = "nadime ";
// 	char *src = "yazidhh";
// 	int n = ft_strlcat(0, src, 0);
//     printf("%i", n);
//     printf("%s", dst);
// }

///////////////////****ft_toupper******////////////////////////

// int main()
// {
//     printf("%c", ft_toupper('Z'));
// }

///////////////////****ft_toupper******////////////////////////

// int main()
// {
//     printf("%c", ft_toupper('z'));
// }

///////////////////****ft_tolower******////////////////////////

// int main()
// {
//     printf("%c", ft_tolower('R'));
// }

///////////////////****ft_strchr******////////////////////////

// int main()
// {
//     char *s = "Yazzzid";
//     printf("%s", ft_strchr(s, 0));
// }

///////////////////****ft_strrchr******////////////////////////

// int main()
// {
//     // char *s = "Yazzzid";
//     printf("%s", ft_strrchr(0, 'z'));
// }

///////////////////****ft_strncmp******////////////////////////

// int main()
// {
//     char *s1 = "Yazzzid";
//     char *s2 = "Yazid";
//     printf("%i", strncmp(s1, s2, 0));
// }

///////////////////****ft_memchr******////////////////////////

// int main()
// {
//     char *s = "Yazzzid";
//     printf("%s", ft_memchr(s, 'i', 6));
// }

///////////////////****ft_memcmp******////////////////////////

// int main()
// {
//     char *s1 = "Yazid8";
//     char *s2 = "Yazid9";
//     printf("%i", ft_memcmp(s1, s2, 6));
// }

///////////////////****ft_strnstr******////////////////////////

// int main()
// {
//     char *s1 = "**********Yazidwkqewkepqpk";
//     char *s2 = "Yazid";
//     printf("%s", ft_strnstr(s1, s2, 15));
// }

///////////////////****ft_atoi******////////////////////////

// int main()
// {
//     printf("%i\n", ft_atoi("595959595999999"));
//     printf("%i", atoi("595959595999999"));
// }

///////////////////****ft_calloc******////////////////////////

// int main()
// {
//     char *src = "Yazid";
//     char *dst = ft_calloc(0, 0);
//     ft_strlcpy(dst, src, 6);
//     printf("%s", dst);
// }

///////////////////****ft_strdup******////////////////////////

// int main()
// {
//     char *s = "";
//     char *newstr = ft_strdup(s);
//     printf("%s", newstr);
// }

/////////////////****ft_substr******////////////////////////

// int main()
// {
//     char *s = ".....Yazid";
    
//     printf("%s", ft_substr(s, 8, 8));
// }

///////////////////****ft_strjoin******////////////////////////

// int main()
// {
   
    // char *s1 = "";
    // char *s2 = "qwwqeqweqweqw";
    
    // printf("%s", ft_strjoin(s1, s2));

// }

///////////////////****ft_strtrim******////////////////////////

// int main()
// {
   
//     char *s1 = "qwqqwqwqwqwqwyazidqqwqwqwwqqw";
//     char *s2 = "qwwqeqweqweqw";
    
//     printf("%s", ft_strtrim(s1, s2));

// }

///////////////////****ft_split******////////////////////////

// int main()
// {
//     int i = 0;
//     char *s = "qwqq,wqwqw,qwwq,qw";
//     char **str = ft_split(s, 'c');
//     while(str[i])
//     {
//         printf("%s\n", str[i]);
//         i++;
//     }

// }

///////////////////****ft_itoa******////////////////////////

// int main()
// {
//     char *s = ft_itoa(-2147483648);
//     printf("%s\n", s);

// }

///////////////////****ft_strmapi******////////////////////////

// char to_uplow(unsigned int i, char c)
// {
//     if(i % 2 == 0)
//     c = (ft_tolower(c));
//     else
//     c = (ft_toupper(c));
//     return c;
// }

// int main()
// {
//     ft_strmapi("wqeqweq", 0);
// }
///////////////////****ft_striteri******////////////////////////

void to_uplow(unsigned int i, char *c)
{
    if(i % 2 == 0)
    *c = (ft_tolower(*c));
    else
    *c = (ft_toupper(*c));
}

int main()
{
    char s[] = "Yazid n4dime";
    ft_striteri(s, to_uplow);
    printf("%s", 0);
}

///////////////////****ft_putchar_fd******////////////////////////

// #include <fcntl.h>

// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_APPEND);
//     ft_putchar_fd('N', fd);
//     close(fd);
// }

///////////////////****ft_putstr_fd******////////////////////////

// #include <fcntl.h>

// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_APPEND);
//     ft_putstr_fd("Yazid\n", fd);
//     close(fd);
// }

///////////////////****ft_putendl_fd******////////////////////////

// #include <fcntl.h>

// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_APPEND);
//     ft_putendl_fd("yazid", fd);
//     close(fd);
// }

///////////////////****ft_putnbr_fd******////////////////////////

// #include <fcntl.h>

// int main()
// {
//     int fd = open("test.txt", O_WRONLY | O_APPEND);
//     ft_putnbr_fd(-14893, fd);
//     close(fd);
// }

//////////////////////****ft_lstnew******///////////////////////

// int main()
// {
//     char *str = "Yazidwqqeeqw";
//     t_list *node = ft_lstnew(str);
//     printf("%s", node->content);

// }

///////////////////****ft_lstadd_front******////////////////////////

// int main()
// {
//     char *s1 = "Yazid";
//     char *s2 = "nadime ";
//     t_list *head = ft_lstnew(s1);
//     t_list *newhead = ft_lstnew(s2);
    
//     ft_lstadd_front(&head, newhead);

//     printf("%s", head->content);
//     printf("%s", head->next->content);

// }

// ///////////////////****ft_lstsize******////////////////////////

// int main()
// {
//     char *s = "Yazid";
//     t_list *head = ft_lstnew(s);
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     printf("%i", ft_lstsize(head));
// }

// ///////////////////****ft_lstlast******////////////////////////

// int main()
// {
//     char *s = "Lelelel";
//     char *s1 = "yazid";
//     t_list *head = ft_lstnew(s1);
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     ft_lstadd_front(&head ,ft_lstnew(s));
//     printf("%s", ft_lstlast(head)->content);
// }


///////////////////****ft_lstadd_back******////////////////////////

// int main()
// {
//     char *s1 = "Yazid";
//     char *s2 = " ";
//     char *s3 = "Nadime";
//     t_list *head = ft_lstnew(s1);
    
//     ft_lstadd_back(&head, ft_lstnew(s2));
//     ft_lstadd_back(&head, ft_lstnew(s3));


//     printf("%s", head->content);
//     printf("%s", head->next->content);
//     printf("%s", head->next->next->content);

// }

///////////////////*****ft_lstdelone*****////////////////////////

// void	del(void *content)
// {
//     free(content);
// }

// void	print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("content: %s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }

// int main()
// {
//     t_list *node = ft_lstnew(ft_strdup("Yazid"));
//     print_list(node);

//     ft_lstdelone(node, del);

//     print_list(node);

// }

///////////////////*****ft_lstclear*****////////////////////////

// void	del(void *content)
// {
//     free(content); 
// }

// void	print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("content: %s\n", (char *)lst->content); 
//         lst = lst->next;
//     }
// }

// int main()
// {
//     char *s1 = ft_strdup("Yazid");
//     char *s2 = ft_strdup(", ");
//     char *s3 = ft_strdup("nadime");

//     t_list *head = ft_lstnew(s1);
//     ft_lstadd_back(&head ,ft_lstnew(s2));
//     ft_lstadd_back(&head ,ft_lstnew(s3));
//     print_list(head);
//     ft_lstclear(0, 0);

//     print_list(head);

// }

/////////////////*****ft_lstiter*****////////////////////////

// void	del(void *content)
// {
//     free(content);
// }

// void	print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("content: %s\n", (char *)lst->content); 
//         lst = lst->next;
//     }
// }

// void to_uplow(void *b)
// {
//     size_t i = 0;
//     char *s = (char *)b;
//     while(s[i])
//     {
//     if(i % 2 == 0)
//     s[i] = ft_toupper((s[i]));
//     else
//     s[i] = ft_tolower((s[i]));
//     i++;
//     }
   
// }

// int main()
// {
//     char *s1 = ft_strdup("Yazid");
//     char *s2 = ft_strdup(", ");
//     char *s3 = ft_strdup("nadime");

//     t_list *head = ft_lstnew(s1);
//     ft_lstadd_back(&head ,ft_lstnew(s2));
//     ft_lstadd_back(&head ,ft_lstnew(s3));
    
//     printf("before: ");
//     print_list(head);

//     ft_lstiter(NULL, to_uplow);

//     printf("after: ");
//     print_list(head);

// }

/////////////////*****ft_lstmap*****////////////////////////

// void	del(void *content)
// {
//     free(content);
// }


// void	print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("content: %s\n", (char *)lst->content); 
//         lst = lst->next;
//     }
// }

// void *to_uplow(void *b)
// {
//     size_t i = 0;
//     char *s = (char *)b;
//     char *newstr = strdup(s);
//     while(s[i])
//     {
//     if(i % 2 == 0)
//     newstr[i] = ft_toupper((newstr[i]));
//     else
//     newstr[i] = ft_tolower((newstr[i]));
//     i++;
//     }
//     return (void *)newstr;
   
// }


// int main()
// {
//     char *s1 = ft_strdup("Yazid");
//     char *s2 = ft_strdup(", ");
//     char *s3 = ft_strdup("nadime");

//     t_list *head = ft_lstnew(s1);
//     ft_lstadd_back(&head ,ft_lstnew(s2));
//     ft_lstadd_back(&head ,ft_lstnew(s3));
    
//     printf("old list:\n");
//     print_list(head);

//     t_list *newlst = ft_lstmap(head, to_uplow, del);

//     printf("new list: \n");
//     print_list(newlst);

// }

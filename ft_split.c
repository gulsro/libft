#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// :%s/foo/bar/g

int find_str_pos(const char* input_str, int start, char c)
{
    if (start < 0 || start >= (int)ft_strlen(input_str))
    {
        return -1;
    }
    int pos = start;
    
    while(*(input_str + pos) != '\0')
    {
        if (*(input_str + pos) == c)
        {
            return pos;
        }
        pos++;
    }
    return -1;
}
void get_substr(const char* input_str, char* dest, int start, int len)
{
    dest = malloc(len+1);
    strncpy(dest, &input_str[start], len);
//    dest[len] = '\0';
//    printf("sub_input_str: %s\n",dest);
}
char** ft_split(const char* input_str, char token)
{
    int start = 0;
    int pos = 0;
    int temp_size = ft_strlen(input_str);
    int elem_count = 0;
    char **result;

	result = malloc(ft_strlen(input_str));
	
    while (pos != -1)
    {
        pos = find_str_pos(input_str, pos, token);

        if (pos != -1) 
        {
            pos++;
            temp_size = pos -1 - start;
            if (temp_size > 0)
            {
                get_substr(input_str, result[elem_count], start, temp_size);
            }
            start = pos;
        } else
        {
            get_substr(input_str, result[elem_count], start, temp_size);     
        }
     elem_count++;
    }

//    result[elem_count] = "";
    return result;
} 
/*
int main(int argc, char const *argv[])
{
    const char* input_str = "abxcdxxefxgh";
    char c = 'x';

    printf("original: %s\n", input_str);
    char** res = ft_split(input_str, c);

    free(res);

    return 0;
}
*/

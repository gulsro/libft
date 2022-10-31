#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find_str_pos(const char* input_str, int start, char c)
{
    if (start < 0 || start >= (int)strlen(input_str))
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
char* get_substr(const char* input_str, int start, int len)
{
    char* dest = malloc(len+1);
    strncpy(dest, &input_str[start], len);
    dest[len] = '\0';
    printf("sub_input_str: %s\n",dest);
    return dest;
}
char **resize(char** old_result, int elem_count)
{
    char **new_result;
    int counter=0;
    
    new_result = malloc(elem_count);
    while(counter < elem_count)
    {
        new_result[counter] = malloc(strlen(old_result[counter]));
        strcpy(new_result[counter], old_result[counter]);
        free(old_result[counter]);
        counter++;
    }
    free(old_result);
    return new_result;
}
char** my_split(const char* input_str, char token)
{
    int start = 0;
    int pos = 0;
    int temp_size = 0;
    int elem_count = 0;
    char **result;
    if (input_str == 0)
    {
        return 0;
    }
    result = malloc(strlen(input_str));

    while (pos != -1)
    {
        pos = find_str_pos(input_str, pos, token);

        if (pos != -1)
        {
            pos++;
            temp_size = pos -1 - start;
            if (temp_size > 0)
            {
                result[elem_count] = get_substr(input_str, start, temp_size);
                elem_count++;
            }
            start = pos;
        } else if (elem_count == 0)
        {
            result[elem_count] = get_substr(input_str, start, strlen(input_str));
            elem_count++;    
        }

    }
    printf("elem_count:%d \n",elem_count);
    return resize(result, elem_count);
} 

int main()
{
    const char* input_str = " 0 0 0 0 0 0 0 0 0";
    char c = ' ';

    printf("original: %s\n", input_str);
    char** res = my_split(input_str, c);

    free(res);

    return 0;
}

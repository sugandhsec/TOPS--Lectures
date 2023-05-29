#include <stdio.h>
// occurance
int main()
{
    int i, count = 1;
    char s[20] = "tops tec hn ologies";
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words in the string is %d", count);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);

    int len = strlen(s);

    int y[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int value = s[i] - 97;
        y[value]++;
    }

    for (int i = 0;i < 26; i++)
    {
      
        if (y[i] > 0)
        {
            printf("%c - %d\n", 'a'+ i, y[i]);
        }
    }
}
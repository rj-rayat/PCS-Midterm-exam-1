#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[10001];

   if (t <= 1000 && t > 0)
   {
         while (t--)
    {
       scanf("%s", s);
       int len = strlen(s);

       int cap = 0;
       int sm = 0; 
       int digit = 0;
       for (int i = 0;i < len; i++ )
       {
        int letter = s[i];
        

        if (letter < 97 && letter >=65)
        {
            cap++;
        }
        else if (letter >= 97 && letter <= 122)
        {
            sm++;
        }
        else if (letter <= 57 && letter > 47)
        {
            digit++;
        }

       }

       printf("%d %d %d\n", cap, sm, digit);
    }
    
   }
   else
   {
    return 0;
   }

   
   
}
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int m1, m2, d;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        int mutiply_work = m1 * d;
        int per_person = mutiply_work / (m1 + m2);
        int days = d - per_person;
        printf("%d\n", days);
    }

}


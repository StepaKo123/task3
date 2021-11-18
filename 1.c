//На вход программе подаются 4 натуральных числа не превосходящих 109. Требуется найти их наибольший общий делитель.

#include <stdio.h>
 
int evk(int a, int b)
{
    if (b > a) return evk(b, a);
    if (b == 0)
        return a;
    else
        return evk(b, a%b);
}
 
int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = evk(a, b);
    a = evk(a, c);
    a = evk(a, d);
    printf("%d\n", a);
    return 0;
}

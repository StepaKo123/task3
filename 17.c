
//Бесконечная последовательность чисел A(1),A(2),... строится следующим образом:

//A(1) = 0

//Пусть построены элементы A(1), ... A(3m). Тогда элементы A(3m+1),...,A(3m+1) принимают значения А(3m)+3m, A(3m-1)+3m,...,A(1)+3m,A(1)+2*3m,A(2)+2*3m,...,A(3m)+2*3m соответственно.

//Напишите программу, которая по заданному N находит A(N).

//Входные данные: число N (1 ≤ N ≤ 1000000000).

//Выходные данные: вывести значение A(N).

#include <stdlib.h>
#include <stdio.h>

int near3(int n){
    int k = 1;
    while (k < n){
        k *= 3;
    }
    k /= 3;
    return k;
}

int A(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    int m = near3(n);
    int f = n - m;
    if (f <= m){
        return A(m - f + 1) + m;
    }
    else{
        return A(f - m) + 2 * m;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", A(n));
    return 0;
}

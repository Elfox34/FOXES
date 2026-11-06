#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (!a) // Si a es 0 (falso)
    {
        printf("a es cero");
    }
    else
    {
        printf("a no es cero"); // Esto se imprime porque a = 5
    }
    return 0;
}
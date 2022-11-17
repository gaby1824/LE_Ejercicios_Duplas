#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vect[10];
    int min,max;
    
    printf("Ingrese el valor minimo y maximo\n");
    scanf("%d",&min);
    scanf("%d",&max);
    
    for (int u=0;u<10;u++){
        vect[u] = rand() % (max-min+1) + min;
        printf("%d ",vect[u]);
    }
    
    return 0;
}
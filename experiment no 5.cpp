#include<stdio.h>
void knapsack(int m, int n, float p[], float w[])
{
    float x[n];
    int i;
    for (i = 0; i < n; i++) 
	{
        x[i] = 0.0;
    }
    float U = m;
    for (i = 0; i < n; i++) 
	{
        if (w[i] > U)
            break;
        x[i] = 1;
        U = U - w[i];
    }
    if (i < n) 
	{
        x[i] = U / w[i];
    }
    printf("Solution Vector  ");
    for (i = 0; i < n - 1; i++) 
	{
        printf("%.2f, ", x[i]);
    }
    printf("%.2f\n", x[n - 1]);
}

int main() 
{
    int m, n;
    
    printf("Enter the knapsack size ");
    scanf("%d", &m);
    
    printf("Enter the number of objects ");
    scanf("%d", &n);
    
    float p[n], w[n];
    printf("Enter the profits and weights of each object\n");
    for (int i = 0; i < n; i++) {
        printf("Profit of object %d ", i+1);
        scanf("%f", &p[i]);
        printf("Weight of object %d ", i+1);
        scanf("%f", &w[i]);
    }
    knapsack(m, n, p, w);
    return 0;
}


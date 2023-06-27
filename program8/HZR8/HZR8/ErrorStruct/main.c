#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i, n;
    struct coordinate
    {
        float x;
        float y;
    };
    struct coordinate *points;

    printf("Number of points = ");
    scanf("%d", &n);
    points = (struct coordinate*) malloc(n*sizeof(struct coordinate));

    printf("Input points:");
    for(i=0; i<n; i++)
        scanf("%f%f", &points[i].x, &points[i].y);

    for(i=0; i<n; i++)
    {
        if(sqrt(pow(points[i].x, 2) + pow(points[i].y, 2))<=5 )
        {
            printf("(%f, %f)\n", points[i].x, (points+i)->y);
        }
    }
    free(points);
    return 0;
}

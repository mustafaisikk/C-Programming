#include <stdio.h>
#include <stdlib.h>

struct Point
{
int x, y;
};

int main()
{
struct Point p1 = {1, 2};
struct Point *p2 = &p1;
printf("%d %d", p2->x, p2->y);
return 0;
}




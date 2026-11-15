#include <stdio.h>
#include <math.h>

int main()
{
    double xa, ya, xb, yb;
    scanf("%lf %lf", &xa, &ya);
    scanf("%lf %lf", &xb, &yb);

    double dx = xb - xa;
    double dy = yb - ya;
    double len = sqrt(dx * dx + dy * dy);

    printf("%.3f\n", len);
    return 0;
}

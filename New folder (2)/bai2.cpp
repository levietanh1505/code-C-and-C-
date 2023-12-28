#include <math.h>
#include <stdio.h>
#include <map>
int main()
{
    float a, b, c;
    scanf ("%f %f %f", &a, &b, &c);
    float p = (a + b + c) / 2;
    float S = sqrt (p * (p - a) * (p - b) * (p-c));
    printf ("%.6f", S);

    return 0;
}

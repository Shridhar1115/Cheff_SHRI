#include <stdio.h>
#include<math.h>
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        double u, v, w, U, V, W;
        scanf("%lf %lf %lf %lf %lf %lf", &u, &v, &w, &W, &V, &U);
        double volume;
        double S = 0;
        S += area(u, V, w);
        S += area(W, u, v);
        S += area(W, V, U);
        S += area(U, v, w);
        volume = sqrt(4 * u * u * v * v * w * w - u * u * (v * v + w * w - U * U) * (v * v + w * w - U * U) - v * v * (w * w + u * u - V * V) * (w * w + u * u - V * V) - w * w * (u * u + v * v - W * W) * (u * u + v * v - W * W) + (v * v + w * w - U * U) * (w * w + u * u - V * V) * (u * u + v * v - W * W)) / 12;
        printf("%.4lf\n", volume * 3.0 / S);
    }


	// your code goes here
	return 0;
}

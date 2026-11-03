#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>



/// task100

int printRoots(double t) {
    if (t > 0)
    {
    printf("x = %g\n x = %g\n", sqrt(t), -sqrt(t));
    return 2;
    }
    if (t == 0)
    {
    printf("x = 0\n");
    return 1;
    }
    return 0;
}

void task100() {
    double a, b, c;
    printf("a * x ^ 4+b*x^2+c\n");
    printf("Input:a\n");
    scanf("%lf", &a);
    printf("Input:b\n");
    scanf("%lf", &b);
    printf("Input:c\n");
    scanf("%lf", &c);

    if (a < 0) {
        printf("It’s not true behind the mind");
        return;

    }

    double D = b * b - 4 * a * c;
    int sum = 0;

    if (D < 0) {
        printf("no roots");
    }

    else {
        printf("Roots:\n");
        if (D == 0) {
            double t1 = (-b) / (2 * a);

            sum += printRoots(t1);
        }

        else {
            if (D > 0) {
                double t1 = (-b - sqrt(D)) / (2 * a);
                double t2 = (-b + sqrt(D)) / (2 * a);
                printf("Roots:\n");
                sum += printRoots(t1);
                sum += printRoots(t2);
            }
        }
        if (sum == 0)
            printf("no roots\n");
        else
            printf("Number of roots: %d\n", sum);

    }
}
    

    
///task107

double minn(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}
double maxn(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}
void task107() {
    printf("Task:107\n");
    double x1,x2,x3,x4, y1, y2, y3, y4;
    printf("Input x1, y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Input x2, y2: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Input x3, y3: ");
    scanf("%lf %lf", &x3, &y3);
    printf("Input x4, y4: ");
    scanf("%lf %lf", &x4, &y4);

    double lside = minn(minn(x1, x2), minn(x3, x4));
    double rside = maxn(maxn(x1, x2), maxn(x3, x4));
    double dside = minn(minn(y1, y2), minn(y3, y4));
    double uside = maxn(maxn(y1, y2), maxn(y3, y4));

    double w = rside - maxn(lside, 0);
    double h = uside - maxn(dside, 0);
    printf("Square = %g\n", w * h);

}




///task13

int task13()
{
    int n, a, s;

    printf("Input n: ");
    scanf("%d", &n);
    printf("Input a: ");
    scanf("%d", &a);

    s = n / 10 + n % 10;

    printf("Sum = %d\n", s);

    if (s >= 10)
        printf("a) Yes, sum is two-digit\n");
    else
        printf("a) No\n");

    if (a > s)
        printf("b) Yes, a > sum\n");
    else
        printf("b) No\n");

    return 0;
}


///task50

int task50()
{
    double a, b, c, d;

    printf("Input a, b, c, d: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (a + b > c && a + c > b && b + c > a)
        printf("a, b, c: exists\n");
    else
        printf("a, b, c: not exist\n");

    if (a + b > d && a + d > b && b + d > a)
        printf("a, b, d: exists\n");
    else
        printf("a, b, d: not exist\n");

    if (a + c > d && a + d > c && c + d > a)
        printf("a, c, d: exists\n");
    else
        printf("a, c, d: not exist\n");

    if (b + c > d && b + d > c && c + d > b)
        printf("b, c, d: exists\n");
    else
        printf("b, c, d: not exist\n");

    return 0;
}



///task111


void task111() {
    printf("Task:111\n");
    double a, b, c;
    printf("Input:a\n");
    scanf("%lf", &a);
    printf("Input:b\n");
    scanf("%lf", &b);
    printf("Input:c\n");
    scanf("%lf", &c);
    double t1, t2, t3, max;
     t1 = a + b;
     t2 = b + c;
     t3 = c + a;
     max = t1;
         if (t2 > max)
             max = t2;
         if (t3 > max)
             max = t3;
         printf("max=%g\n", max);
         

}



///task46
int task46() {
    double a, b, x;
    printf("Input:a\n");
    scanf("%lf", &a);
    printf("Input:b\n");
    scanf("%lf", &b);
    x = (a + b) / 2;
    if (fmod(x, 1) == 0)
        printf("Whole\n");
    else
        printf("Not a whole\n");
}

int main()
{
    task100();
    task107();
    task13();
    task50();  
    task111(); 
    task46();
    return 0;
}
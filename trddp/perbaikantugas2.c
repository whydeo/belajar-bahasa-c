#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Akar persamaan kuadrat dapat dituliskan dengan ax^2 + bx + c = 0\n");
    printf("Carilah akar-akar dari persamaan kuadrat:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    
    double diskriminan = b * b - 4 * a * c;
    double bilril, imajiner;
    if (diskriminan > 0) {
        double akar1 = (-b + sqrt(diskriminan)) / (2 * a);
        double akar2 = (-b - sqrt(diskriminan)) / (2 * a);
        printf("Akar persamaan kuadrat adalah %.2lf dan %.2lf\n", akar1, akar2);
    } else if (diskriminan == 0) {
        double akar = -b / (2 * a);
        printf("Akar persamaan kuadrat adalah %.2lf\n", akar);
    } else {
        bilril = -b / (2 * a);
        imajiner = sqrt(-diskriminan) / (2 * a);
        printf("Akar persamaan %.lf X^2 + %.lfx + %.lf= 0 adalah %.2lf + i%.2lf dan %.2lf - i%.2lf\n",a,b,c,bilril, imajiner, bilril, imajiner);
    }

    return 0;
}

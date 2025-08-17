// #include <stdio.h>
// int main() {
//     double a = 5, b = 9, c = 5;
//     double sum = a + b + c;
//     double avg = sum / 3;

//     printf("Sum: %.2lf\n", sum);
//     printf("Average: %.2lf\n", avg);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three values =");
    scanf("%d %d %d", &x, &y, &z);

    int result = x + y + z;
    printf("The summation of values is=%d\n", result);

    float avg = result / 3.0;  
    printf("The average value is=%f\n", avg);

    return 0;
}

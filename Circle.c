#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

//30. Program to find roots of a Quadratic Equation//
#include <stdio.h>
#include <math.h>

int main(void)

 {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are Real and Different\n");
        printf("root1 = %lf and root2 = %lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are Real and Equal\n");
        printf("root1 = root2 = %lf;", root1);
    }

    // if roots are not real
    else 
    {
                printf("Roots are Imaginary");
    }

    return 0;
}


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100], b[100], c[100];
    double d_a, d_b, d_c, x_first_root, x_second_root;
    printf("Hello, please enter a value for a:\n");
    fgets(a, 100, stdin);
    d_a = atof(a);
    if(d_a < 0) {
        printf("a value cannot be less than 0.\n");
        main();
    } else {
        printf("Please enter a value for b:\n");
        fgets(b, 100, stdin);
        printf("Please enter a value for c:\n");
        fgets(c, 100, stdin);

        d_b = atof(b);
        d_c = atof(c);

        x_first_root = ((-1 * d_b) + sqrt(pow(d_b, 2) - (4*(d_a*d_c)))) / (2 * d_a);
        x_second_root = ((-1 * d_b) - sqrt(pow(d_b, 2) - 4*(d_a*d_c))) / (2 * d_a);
        printf("first root: %f \n", x_first_root);
        printf("second root: %f \n", x_second_root);
        getchar();
    }

    return 0;
}

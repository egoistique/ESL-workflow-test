#include <stdio.h>
#include "vector3d.h"

int main() {
    Vector3D v1 = {1.0, 2.0, 3.0};
    Vector3D v2 = {4.0, 5.0, 6.0};

    Vector3D sum = vector3d_add(v1, v2);
    Vector3D difference = vector3d_subtract(v1, v2);
    double dotProduct = vector3d_dot_product(v1, v2);
    Vector3D crossProduct = vector3d_cross_product(v1, v2);

    printf("Sum: %.2f %.2f %.2f\n", sum.x, sum.y, sum.z);
    printf("Difference: %.2f %.2f %.2f\n", difference.x, difference.y, difference.z);
    printf("Dot Product: %.2f\n", dotProduct);
    printf("Cross Product: %.2f %.2f %.2f\n", crossProduct.x, crossProduct.y, crossProduct.z);

    return 0;
}

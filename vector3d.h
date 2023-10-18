#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    double x;
    double y;
    double z;
} Vector3D;

Vector3D vector3d_add(Vector3D v1, Vector3D v2);
Vector3D vector3d_subtract(Vector3D v1, Vector3D v2);
double vector3d_dot_product(Vector3D v1, Vector3D v2);
Vector3D vector3d_cross_product(Vector3D v1, Vector3D v2);

#endif

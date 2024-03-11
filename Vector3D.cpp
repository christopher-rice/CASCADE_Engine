#include <math.h>
#include <iostream>
#include "Vector3D.h"

// Default constructor
Vector3D::Vector3D()
{
    components[x] = 0;
    components[y] = 0;
    components[z] = 0;
    components[w] = 0;
}

// Component argument constructor
Vector3D::Vector3D(float x, float y, float z, float w)
{
    components[VectorComps::x] = x;
    components[VectorComps::y] = y;
    components[VectorComps::z] = z;
    components[VectorComps::w] = w;
}

// Array argument constructor
Vector3D::Vector3D(float* compArray)
{
    components[x] = compArray[x];
    components[y] = compArray[y];
    components[z] = compArray[z];
    components[w] = compArray[w];
}

// Normalizes the vector inplace
void Vector3D::normalize()
{
    float length = getLength();

    components[x] /= length;
    components[y] /= length;
    components[z] /= length;
}

// Scales vector inplace
void Vector3D::scale(float s)
{
    components[x] *= s;
    components[y] *= s;
    components[z] *= s;
}

// Multiplication operator overloading (Scalar-vector multiplication)
Vector3D operator*(float lhs, const Vector3D& rhs) 
{
    return(Vector3D(rhs[x] * lhs, rhs[y] * lhs, rhs[z] * lhs, 0));
}
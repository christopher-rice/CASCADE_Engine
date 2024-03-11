#pragma once
#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

// Vector components used for internal array access
enum VectorComps { x, y, z, w };

class Vector3D
{
public:
    // Default constructor
    Vector3D();

    // Component argument constructor
    Vector3D(float x, float y = 0.0f, float z = 0.0f, float w = 0.0f);

    // Array argument constructor
    Vector3D(float* compArray);

    // Prints the contents of the vector
    inline void print() const { std::cout << "<" << (*this)[x] << ", " << (*this)[y] << ", " << (*this)[z] << ", " << (*this)[w] << ">" << std::endl; }

    // Normalizes the vector inplace
    void normalize();

    // Scales vector inplace
    void scale(float s);

    // Getters for lengths
    inline float getLength() const { return(sqrt((components[x] * components[x]) + (components[y] * components[y]) + (components[z] * components[z]))); }
    inline float getLengthSquared() const { return((components[x] * components[x]) + (components[y] * components[y]) + (components[z] * components[z])); }

    // Getters for components
    inline float getX() const { return(components[x]); };
    inline float getY() const { return(components[y]); };
    inline float getZ() const { return(components[z]); };
    inline float getW() const { return(components[w]); };

    // Setters for components
    inline void setX(float x) { components[VectorComps::x] = x; };
    inline void setY(float y) { components[VectorComps::y] = y; };
    inline void setZ(float z) { components[VectorComps::z] = z; };
    inline void setW(float w) { components[VectorComps::w] = w; };

    // Accessing overloading
    inline float& operator[](int index) { return(components[index]); };
    inline float operator[](int index) const { return(components[index]); };

    // Operator overloading
    inline Vector3D operator+(const Vector3D& rhs) const { return(Vector3D((*this)[x] + rhs[x], (*this)[y] + rhs[y], (*this)[z] + rhs[z], 0)); };
    inline Vector3D operator-(const Vector3D& rhs) const { return(Vector3D((*this)[x] - rhs[x], (*this)[y] - rhs[y], (*this)[z] - rhs[z], 0)); };
    inline float operator*(const Vector3D& rhs) const { return(((*this)[x] * rhs[x]) + ((*this)[y] * rhs[y]) + ((*this)[z] * rhs[z])); };
    inline Vector3D operator*(float rhs) const { return(Vector3D((*this)[x] * rhs, (*this)[y] * rhs, (*this)[z] * rhs, 0)); };

private:
    // Vector components
    float components[4];
};

Vector3D operator*(float lhs, const Vector3D& rhs);

#endif

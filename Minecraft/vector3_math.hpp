#pragma once

#include "raylib.h"
#include "raymath.h"

Vector3 operator+(const Vector3& v1, const Vector3& v2)
{
    return Vector3Add(v1, v2);
}

Vector3 operator-(const Vector3& v1, const Vector3& v2)
{
    return Vector3Subtract(v1, v2);
}

Vector3 operator*(const Vector3& v1, const Vector3& v2)
{
    return Vector3Multiply(v1, v2);
}

Vector3 operator/(const Vector3& v1, const Vector3& v2)
{
    return Vector3Divide(v1, v2);
}


Vector3 operator+(const Vector3& vec, const float& val)
{
    return Vector3AddValue(vec, val);
}

Vector3 operator-(const Vector3& vec, const float& val)
{
    return Vector3SubtractValue(vec, val);
}

Vector3 operator*(const Vector3& vec, const float& val)
{
    return Vector3Scale(vec, val);
}

Vector3 operator/(const Vector3& vec, const float& val)
{
    if (val != 0)
        return Vector3Scale(vec, (1 / val));
    return Vector3One();
}


Vector3 operator+(const Vector3& vec, const int& val)
{
    return Vector3AddValue(vec, (float)val);
}

Vector3 operator-(const Vector3& vec, const int& val)
{
    return Vector3SubtractValue(vec, (float)val);
}

Vector3 operator*(const Vector3& vec, const int& val)
{
    return Vector3Scale(vec, (float)val);
}

Vector3 operator/(const Vector3& vec, const int& val)
{
    if (val != 0)
        return Vector3Scale(vec, (1 / (float)val));
    return Vector3One();
}


Vector3 operator+(const float& val, const Vector3& vec)
{
    return Vector3AddValue(vec, val);
}

Vector3 operator-(const float& val, const Vector3& vec)
{
    return Vector3SubtractValue(vec, val);
}

Vector3 operator*(const float& val, const Vector3& vec)
{
    return Vector3Scale(vec, val);
}

Vector3 operator/(const float& val, const Vector3& vec)
{
    if (val != 0)
        return Vector3Scale(vec, (1 / val));
    return Vector3One();
}


Vector3 operator+(const int& val, const Vector3& vec)
{
    return Vector3AddValue(vec, (float)val);
}

Vector3 operator-(const int& val, const Vector3& vec)
{
    return Vector3SubtractValue(vec, (float)val);
}

Vector3 operator*(const int& val, const Vector3& vec)
{
    return Vector3Scale(vec, (float)val);
}

Vector3 operator/(const int& val, const Vector3& vec)
{
    if (val != 0)
        return Vector3Scale(vec, (1 / (float)val));
    return Vector3One();
}


Vector3 operator+=(Vector3& vec1, const Vector3& vec2)
{
    vec1 = vec1 + vec2;

    return vec1;
}

Vector3 operator-=(Vector3& vec1, const Vector3& vec2)
{
    vec1 = vec1 - vec2;

    return vec1;
}

Vector3 operator*=(Vector3& vec1, const Vector3& vec2)
{
    vec1 = vec1 * vec2;

    return vec1;
}

Vector3 operator/=(Vector3& vec1, const Vector3& vec2)
{
    vec1 = vec1 / vec2;

    return vec1;
}


Vector3 operator+=(Vector3& vec, const float& val)
{
    vec = vec + val;

    return vec;
}

Vector3 operator-=(Vector3& vec, const float& val)
{
    vec = vec - val;

    return vec;
}

Vector3 operator*=(Vector3& vec, const float& val)
{
    vec = vec * val;

    return vec;
}

Vector3 operator/=(Vector3& vec, const float& val)
{
    vec = vec / val;

    return vec;
}


Vector3 operator+=(Vector3& vec, const int& val)
{
    vec = vec + val;

    return vec;
}

Vector3 operator-=(Vector3& vec, const int& val)
{
    vec = vec - val;

    return vec;
}

Vector3 operator*=(Vector3& vec, const int& val)
{
    vec = vec * val;

    return vec;
}

Vector3 operator/=(Vector3& vec, const int& val)
{
    vec = vec / val;

    return vec;
}
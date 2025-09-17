// Q19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() 
{
    float a, b, c;            // Declaration

    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    //Check for equilateral triangle
    if (a == b && b == c)
      printf("Equilateral triangle.\n ");

    //Check for isosceles triangles
    else if (a == b || b == c || a == c)
      printf("Isosceles triangle.\n ");

    //Check for scalene triangle
    else
      printf("Scalene triangle.\n ");

    return 0;
}                             // END of program

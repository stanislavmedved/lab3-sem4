#include "Circle.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Square.h"
#include "Triangle.h"
#include "TriangularPyramid.h"
#include <clocale>
#include <cstdio>
int main() {
  setlocale(LC_ALL, "utf-8");
// круг
{
  Circle circleA = Circle(1.0f);
  Circle circleB = Circle(2.0f);
  printf("%s\n", circleA.getName().c_str());
  circleA.showInfo();
  circleB.showInfo();
  printf("A > B: %s\n", (circleA > circleB ? "true" : "false"));
  printf("A < B: %s\n", (circleA < circleB ? "true" : "false"));
  printf("A == B: %s\n", (circleA == circleB ? "true" : "false"));
  circleA.scale(2.0f);
  circleA.showInfo();
}
  printf("===================\n");
// цилиндр
{
  Cylinder cyl1 = Cylinder(1.0f, 1.0f);
  Cylinder cyl2 = Cylinder(2.0f,2.0f);
  printf("%s\n", cyl1.getName().c_str());
  cyl1.showInfo();
  cyl2.showInfo();
  printf("A > B: %s\n", (cyl1 > cyl2 ? "true" : "false"));
  printf("A < B: %s\n", (cyl1 < cyl2 ? "true" : "false"));
  printf("A == B: %s\n", (cyl1 == cyl2 ? "true" : "false"));
  cyl1.scale(2.0f);
  cyl1.showInfo();
}
  printf("===================\n");
  // сфера
{
  Sphere sphere1 = Sphere(1.0f);
  Sphere sphere2 = Sphere(2.0f);
  printf("%s\n", sphere1.getName().c_str());
  sphere1.showInfo();
  sphere2.showInfo();
  printf("A > B: %s\n", (sphere1 > sphere2 ? "true" : "false"));
  printf("A < B: %s\n", (sphere1 < sphere2 ? "true" : "false"));
  printf("A == B: %s\n", (sphere1 == sphere2 ? "true" : "false"));
  sphere1.scale(2.0f);
  sphere1.showInfo();
}
  printf("===================\n");
  // квадрат
{
  Square square1 = Square(1.0f);
  Square square2 = Square(2.0f);
  printf("%s\n", square1.getName().c_str());
  square1.showInfo();
  square2.showInfo();
  printf("A > B: %s\n", (square1 > square2 ? "true" : "false"));
  printf("A < B: %s\n", (square1 < square2 ? "true" : "false"));
  printf("A == B: %s\n", (square1 == square2 ? "true" : "false"));
  square1.scale(2.0f);
  square1.showInfo();
}
  printf("===================\n");
  // треугольник
{
  Triangle trig1 = Triangle(1.0f, 1.0f);
  Triangle trig2 = Triangle(2.0f, 2.0f);
  printf("%s\n", trig1.getName().c_str());
  trig1.showInfo();
  trig2.showInfo();
  printf("A > B: %s\n", (trig1 > trig2 ? "true" : "false"));
  printf("A < B: %s\n", (trig1 < trig2 ? "true" : "false"));
  printf("A == B: %s\n", (trig1 == trig2 ? "true" : "false"));
  trig1.scale(2.0f);
  trig1.showInfo();
}
  printf("===================\n");
  // пирамида
{
  TriangularPyramid pyramid1 = TriangularPyramid(Triangle(1.0f, 1.0f), 1.0f);
  TriangularPyramid pyramid2 = TriangularPyramid(Triangle(2.0f, 2.0f), 2.0f);
  printf("%s\n", pyramid1.getName().c_str());
  pyramid1.showInfo();
  pyramid2.showInfo();
  printf("A > B: %s\n", (pyramid1 > pyramid2 ? "true" : "false"));
  printf("A < B: %s\n", (pyramid1 < pyramid2 ? "true" : "false"));
  printf("A == B: %s\n", (pyramid1 == pyramid2 ? "true" : "false"));
  pyramid1.scale(2.0f);
  pyramid1.showInfo();
}
  
  return 0;
}
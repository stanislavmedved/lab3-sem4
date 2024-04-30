#include "Circle.h"
#include "Cylinder.h"
#include "Sphere.h"
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
{}
  printf("===================\n");
  // треугольник
{}
  printf("===================\n");
  // пирамида
{}
  
  return 0;
}
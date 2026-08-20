#include <iostream>
#include <cmath>

// Quadratic Formula: ax^2 + bx + c = 0
// The roots are given by: (-b ± sqrt(b^2 - 4ac)) / 2a

int main() {
  double a;
  double b;
  double c;

  double root1;
  double root2;
  
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // The positive root
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  // The negative root
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  // Outputting the roots
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

  return 0;
}
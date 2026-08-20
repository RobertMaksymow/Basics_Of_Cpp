#include <iostream>

int main() {
  
  double ph = 4.6;
  
  // In chemistry, pH is a scale used to specify the acidity or basicity of an aqueous solution.
  
  if(ph > 7){
    std::cout << "Basic";
  }
  else if(ph < 7){
    std::cout << "Acidic";
  } 
  else {
    std::cout << "Neutral";
  }
  
}
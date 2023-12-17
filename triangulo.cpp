#include <iostream>

void sideVerify(int a, int b, int c);
void functionTriangles(int a, int b, int c);

int inputValue() {

   int i{};

   do {
  
       std::cout << "Insert value for Triangle: \n";
       std::cin >> i;
   
        if (i == 0 ) {
          std::cout << "Error proibido usar 0\n";
          std::cout << '\n'; 
        }
   
   } while (i < 3); 

  return i;

}

void functionTriangles(int a, int b, int c) {

  // - Verify value is variables equal 0
  if (a == 0 && b == 0 && c == 0) {
    std::cout << "=> ERROR: ... proibido usar 0 \n";
    return;
  } 

  if (a > b + c || b > a + c || c > a + b) {
    std::cout << "=> ERROR: ... Não forma um triangulo\n";
    return;
  }

  if (a != b && a != c && b != c) {
    std::cout << "=> Todos os lados são diferentes -> Triangulo Escaleno\n";
  
  } else if (a == b && b == c) {
    std::cout << "=> Todos os lados são iguais -> Triangulo equilatero\n";

  } else {
    std::cout << "=> 2 lados tem a mesma medida -> Triangulo Isosceles\n";
  }

}

int main() {

  std::cout << "***********************************************************\n";
  std::cout << "\n";
  std::cout << "                 TRIANGLE SIDES                            \n";
  std::cout << "\n";
  std::cout << "***********************************************************\n";

  int sideA{}, sideB{}, sideC{};

  sideA = inputValue();
  sideB = inputValue();
  sideC = inputValue();

  // - chama a função que averigua os lados
  functionTriangles(sideA, sideB, sideC); 
  
  // - mostra o valor de cada variavel
  std::cout << "=> the value side A is: " << sideA << '\n';
  std::cout << "=> the value side B is: " << sideB << '\n';
  std::cout << "=> the value side C is: " << sideC << '\n';

  return 0;

}
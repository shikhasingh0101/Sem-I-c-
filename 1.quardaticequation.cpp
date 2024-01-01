#include <iostream>
#include <cmath>

int main() {
   
    float a, b, c;

    std::cout << "Enter the coefficients (a, b, c): ";
    std::cin >> a >> b >> c;

    
    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
       
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);

        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
       
        float root = -b / (2 * a);

        std::cout << "Root = " << root << std::endl;
    } else {
       
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);

        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}

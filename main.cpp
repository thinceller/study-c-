#include "all.h"

int main() {
    double height{};
    std::cout << "height(m):>";
    std::cin >> height;

    double weight{};
    std::cout << "weight(kg):>";
    std::cin >> weight;

    double bmi = weight / (height * height);

    std::cout << "BMI="s << bmi << "\n"s;

    auto status = [](double bmi) {
        if (bmi < 18.5)
            return "Underweight.\n"s;
        else if (bmi < 25.0)
            return "Normal.\n"s;
        else if (bmi < 30.0)
            return "Overweight.\n"s;
        else
            return "Obese.\n"s;
    };

    std::cout << status(bmi);
}

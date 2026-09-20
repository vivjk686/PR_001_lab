//Лабораторна робоат з Git
#include <iostream> #include <cmath>
int main() {
	double alpha_degrees = 60.0;
	const double PI = 3.141592653589793;
	double alpha = alpha_degrees * PI / 180.0;

	double numerator1 = std::sin(4 * alpha);
	double denominator1 = 1 + std::cos(4 * alpha);
	double numerator2 = std::cos(2 * alpha);
	double denominator2 = 1 + std::cos(2 * alpha);

	double z1 = (numerator1 / denominator1) * (numerator2 / denominator2);

	double angle_z2 = (3.0 / 2.0) * PI - alpha;
	double z2 = 1.0 / std::tan(angle_z2);

	std::cout << "Alpha: " << alpha_degrees << std::endl;
	std::cout << "z1 = " << z1 << std::endl;
	std::cout << "z2 = " << z2 << std::endl;

	return 0;
}
// Зміна 1: коментар для лабораторної

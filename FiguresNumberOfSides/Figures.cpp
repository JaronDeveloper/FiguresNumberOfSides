#include <iostream>

class Figures
{
public:	
	Figures();
	Figures(int Edge,std :: string NameFigures) {
		std::cout << NameFigures << Edge << std ::endl;
	}
};

class UnknownFigures : public Figures {	
public:
	 UnknownFigures(){
		Figures(0, "Фигура: ");
	}
};

class Triangle : public Figures {
public:
	Triangle() {
		Figures(3, "Треугольник: ");
	}
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		Figures(4, "Четырёхугольник: ");
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Количество сторон: " << std::endl;

	UnknownFigures();
	Triangle();
	Quadrilateral();

	return 0;
}
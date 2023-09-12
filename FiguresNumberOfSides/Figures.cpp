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
		Figures(0, "������: ");
	}
};

class Triangle : public Figures {
public:
	Triangle() {
		Figures(3, "�����������: ");
	}
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		Figures(4, "��������������: ");
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "���������� ������: " << std::endl;

	UnknownFigures();
	Triangle();
	Quadrilateral();

	return 0;
}
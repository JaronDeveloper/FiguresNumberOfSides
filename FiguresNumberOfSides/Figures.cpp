#include <iostream>

class Figures
{
protected:
	int sides_count;
	std::string name;
public:	
	virtual int get_sides_coun() {
		return sides_count;
	}

	virtual std::string getType() {
		return name;
	}
};

void print_info(Figures* f) {
	std::cout << f->getType();
	std::cout << f->get_sides_coun() << std::endl;
}

class UnknownFigures : public Figures{	
public:	
	std::string NameFigures = "Фигура:";	 

	int get_sides_coun()override {
		 return sides_count = 0;
	 }

	 std::string getType() override {
		 return NameFigures;
	 }
};

class Triangle:public Figures {
public:
	std::string NameFigures = "Треугольник:";
	
	int get_sides_coun()override {
		return sides_count = 3;
	}
	std::string getType() override {
		return NameFigures;
	}
};

class Quadrilateral:public Figures {
public:
	std::string NameFigures = "Четырёхугольник:";
	
	int get_sides_coun()override {
		return sides_count = 4;
	}
	std::string getType() override {
		return NameFigures;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Количество сторон: " << std::endl;

	Figures* unknownFigures = new UnknownFigures();
	print_info(unknownFigures);
	delete unknownFigures;

	Figures* triangle = new Triangle();
	print_info(triangle);
	delete triangle;

	Figures* quadrilateral = new Quadrilateral();
	print_info(quadrilateral);
	delete quadrilateral;

	return 0;
}
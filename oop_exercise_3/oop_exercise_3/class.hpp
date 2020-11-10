#pragma once

#include <vector>

class Figure {
public:
	Figure() {}
	~Figure(){}
	void create(){}
	double square(){}
private:
	std::vector<std::pair<int, int>> vertices;
};
		
/*
-Площадь фигуры
-Геометрический центр
-площадь всех фигур в векторе

*/
class Hexagon: public Figure {

};


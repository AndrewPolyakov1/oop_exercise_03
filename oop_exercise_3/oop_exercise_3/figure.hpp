#pragma once

#include <vector>

class Figure {
public:

	Figure() {}
	~Figure() {}

private:
	std::vector<std::pair<int, int>> vertices;
};

class Hexagon : public Figure {

};
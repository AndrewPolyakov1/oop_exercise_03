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
-������� ������
-�������������� �����
-������� ���� ����� � �������

*/
class Hexagon: public Figure {

};


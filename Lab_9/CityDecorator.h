#include <string>
#include "city.h"

using namespace std;
#pragma once


class CityDecorator // ������� ����� ����������
{
public:
	virtual string getDescription() = 0;
	virtual ~CityDecorator() {}
};


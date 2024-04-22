#include <string>
#include "CityDecorator.h"
#include "city.h"
using namespace std;
#pragma once

// ��������� �������� �����
class PortCity : public CityDecorator {
	City city;
public:
	PortCity(const City cityData) : city(cityData){}
	string getDescription() override {
		return city.cityName + " - �������� �����";
	}
};


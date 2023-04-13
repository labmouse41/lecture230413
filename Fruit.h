#pragma once
#include <iostream>

class FFruit
{
public:
	FFruit();
	~FFruit();
	std::string GetName();

protected:
	std::string name;
};


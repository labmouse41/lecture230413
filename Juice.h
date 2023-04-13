#pragma once
#include "Fruit.h"
class FJuice
{
public:
	FJuice();
	~FJuice();
	FFruit GetIngredient();
	void SetIngredient(FFruit in);
private:
	FFruit ingredient;
};


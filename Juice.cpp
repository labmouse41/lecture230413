#include "Juice.h"

FJuice::FJuice()
{
}

FJuice::~FJuice()
{
}

FFruit FJuice::GetIngredient()
{
	return ingredient;
}

void FJuice::SetIngredient(FFruit in)
{
	ingredient = in;
}

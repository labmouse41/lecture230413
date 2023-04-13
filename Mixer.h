#pragma once
#include "Fruit.h"
#include "Juice.h"

class FMixer
{
public:

	FMixer();
	virtual ~FMixer();

	void Input(FFruit in);
	void Output();

private:
	FJuice JuiceOut;
};


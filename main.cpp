#include <iostream>
#include "Apple.h"
#include "Fruit.h"
#include "Juice.h"
#include "Mixer.h"
#include "Orange.h"
#include "Pineapple.h"

using namespace std;

int main()
{
	FMixer* mixer = new FMixer();
	FFruit* FruitIn = nullptr;

	int in;
	cin >> in;
	if (in == 1)
	{
		FruitIn = new FApple();
	}
	else if (in == 2)
	{
		FruitIn = new FOrange();
	}
	else if (in == 3)
	{
		FruitIn = new FPineapple();
	}

	if (FruitIn != nullptr)
	{
		mixer->Input(*FruitIn);
	}
	mixer->Output();
	return 0;
}



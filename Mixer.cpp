#include "Mixer.h"
#include "Fruit.h"

FMixer::FMixer()
{
}

FMixer::~FMixer()
{
}



void FMixer::Input(FFruit in)
{
	JuiceOut.SetIngredient(in);
}

void FMixer::Output()
{
	std::cout << JuiceOut.GetIngredient().name << " �꽺�� ����� �����ϴ�.";
}
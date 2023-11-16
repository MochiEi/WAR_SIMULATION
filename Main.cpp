#include <Siv3D.hpp>
#include "Class.h"

void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	App manager;
	manager.add<GAME>(U"Game");


	manager.add<TITLE>(U"Title");

	manager.add<GAME>(U"Game");

	while (System::Update())
	{
		ClearPrint();

		if (not manager.update())
		{
			break;
		}
	}
}

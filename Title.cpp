#include "Class.h"

TITLE::TITLE(const InitData& init)
	: IScene{ init }
{
	Scene::SetBackground(ColorF(0.0));
}

TITLE::~TITLE()
{

}

void TITLE::update()
{
	if (SimpleGUI::Button(U"シュミレーションスタート", Vec2{250, 350}, unspecified))
	{
		changeScene(U"Game", 0.1s);
	}
}

void TITLE::draw() const
{
	font(U"WAR SIMULATION").drawAt(400, 150);
}

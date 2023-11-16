#pragma once
#include <Siv3D.hpp>

using App = SceneManager<String>;

class TITLE :public App::Scene
{
public:

	TITLE(const InitData& init);

	~TITLE();

	void update() override;

	void draw() const override;

private:

	Font font{ 70, Typeface::Bold };
	Font boton{ 20, Typeface::Medium };
};

class GAME :public App::Scene
{
public:

	GAME(const InitData& init);

	~GAME();

	void update() override;

	void draw() const override;

	void init_country();

	void init_color();

private:

	Array<String> country;
	size_t country_size;

	Array<String> war;
	Array<Rect> territory;
	Array<ColorF> colors;
	Grid<Rect> map{10, 10};

};

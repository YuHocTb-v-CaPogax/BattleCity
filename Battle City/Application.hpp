#pragma once

#include "ResourceHolder.hpp"
#include "ResourceIdentifiers.hpp"
#include "Player.hpp"
#include "StateStack.hpp"
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>

class Application
{
public:
	Application();
	void run();
private:
	void processInput();
	void update(sf::Time deltaTime);
	void render();
	void updateStatistics(sf::Time deltaTime);
	void loadTextures();
	void createPlayers();
	void registerStates();
	static const sf::Time TimePerFrame;
	sf::RenderWindow mWindow;
	TextureHolder mTextures;
	FontHolder mFonts;
	State::Players mPlayers;
	State::Variables mVariables;
	StateStack mStateStack;
	sf::Text mStatisticsText;
	sf::Time mStatisticsUpdateTime;
	std::size_t mStatisticsNumFrames;
};
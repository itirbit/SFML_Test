#pragma once
#include "Actor.h"
namespace Game {
	class Bat : public Actor {
	public:
		Bat();
		~Bat();
		void Draw(sf::RenderWindow*);
		void Update(float);
	private:
		sf::Vector2i mousePosition;
		float speed;
	};
}
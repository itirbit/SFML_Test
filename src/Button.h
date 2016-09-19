#pragma once
#include "SFML\Graphics.hpp"
namespace Game {
	class Button {
	public:
		Button(int x, int y,sf::Image img);
		~Button();
		void Draw(sf::RenderWindow*);
		void Update(float delta);
		bool MouseUp(int x, int y);
		bool MouseDown(int x, int y);
		void AnimationEnded();
	private:
		sf::Texture mTexture;
		sf::Sprite mSprite;
		float scale;
		enum {
			IDLE,
			DOWN,
			UP
		};
		int mouseState;
	};
}
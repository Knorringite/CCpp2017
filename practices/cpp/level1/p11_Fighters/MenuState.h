#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "State.h"
#include "Container.h"
#include <SFML/Graphics.hpp>

class MenuState : public State
{
	public:
								MenuState(StateStack& stack, Context context);

		virtual void			draw();
		virtual bool			update(sf::Time dt);
		virtual bool			handleEvent(const sf::Event& event);

	private:
		sf::Sprite				mBackgroundSprite;
		GUI::Container			mGUIContainer;
};

#endif // MENUSTATE_H_

#ifndef STATE_GAMEPLAY_H
#define STATE_GAMEPLAY_H

#include "GameState.h"

class State_Gameplay : public GameState
{
private:
public:
	bool Init();
	void Update(float deltaTime);
	void Render();
	void Quit();
};

#endif
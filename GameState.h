#ifndef GAME_STATE_H
#define GAME_STATE_H

class GameState
{
public:
	virtual bool Init() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Render() = 0;
	virtual void Quit() = 0;
};

#endif
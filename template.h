#ifndef _H_SMACKIT_
#define _H_SMACKIT_

// Link to GDK libraries
#include "AGK.h"

#include <vector>

#define DEVICE_WIDTH 1024
#define DEVICE_HEIGHT 768
#define DEVICE_POS_X 32
#define DEVICE_POS_Y 32
#define FULLSCREEN false


class GameState;

// Global values for the app
class app
{
	bool quit;

	Uint32 new_time;
	Uint32 old_time;

	public:

		// constructor
		app() { memset ( this, 0, sizeof(app)); }

		//state management functions
		void PushState(GameState* state);
		void PopState();

		// main app functions - mike to experiment with a derived class for this..
		void Begin( void );
		void Update();
		void Render();

		void End( void );
};

extern app App;

#endif

// Allow us to use the LoadImage function name
#ifdef LoadImage
 #undef LoadImage
#endif
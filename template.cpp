// Includes
#include "template.h"
#include "GameState.h"

#include <time.h>

// Namespace
using namespace AGK;

app App;

void app::Begin(void)
{
	agk::SetVirtualResolution (1024, 768);
	agk::SetClearColor( 151,170,204 ); // light blue
	agk::SetSyncRate(60,0);
	agk::SetScissor(0,0,0,0);
}

void app::Update()
{
	agk::Print( agk::ScreenFPS() );
}

void app::Render()
{
	agk::Sync();
}


void app::End (void)
{

}

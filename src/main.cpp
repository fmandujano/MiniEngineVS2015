#include "ofMain.h"
#include "FWorld.h"

void ReadArguments(int argc, char** argv )
{

	//los argumentos tienen prioridad sobre el archivo config.ini
}

//========================================================================
int main(int argc, char** argv )
{
	//leer argumentos
	ReadArguments(argc, argv);
	//leer archivo config.ini


	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new FWorld());
}

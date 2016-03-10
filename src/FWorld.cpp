#include "FWorld.h"
#include "ConsoleLogger.h"
#include "AssetManager.h"

CConsoleLogger another_console;
//--------------------------------------------------------------
void FWorld::setup()
{
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//CONSOLE_SCREEN_BUFFER_INFO csbi;
	//GetConsoleScreenBufferInfo( hstdout, &csbi );


	//para modificar el color en la consola estandar
	SetConsoleTextAttribute(hstdout, 0x0E);
	printf("Inicializando juego..");


	//abrir segunda consola
	//another_console.Create("Datos de gameplay");
	//another_console.printf("Inicializando gameplay");

	AssetManager::Instance( )->initialize();

}

//--------------------------------------------------------------
void FWorld::update()
{
	//another_console.printf("ciclo de update");
}

//--------------------------------------------------------------
void FWorld::draw()
{
	//puts("ciclo de draw");
}

//--------------------------------------------------------------
void FWorld::keyPressed(int key){

}

//--------------------------------------------------------------
void FWorld::keyReleased(int key){

}

//--------------------------------------------------------------
void FWorld::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void FWorld::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void FWorld::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void FWorld::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void FWorld::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void FWorld::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void FWorld::windowResized(int w, int h){

}

//--------------------------------------------------------------
void FWorld::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void FWorld::dragEvent(ofDragInfo dragInfo){

}

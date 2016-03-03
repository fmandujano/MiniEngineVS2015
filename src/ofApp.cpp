#include "ofApp.h"
#include "ConsoleLogger.h"
#include "AssetManager.h"
#include "World.h"

CConsoleLogger another_console;
//--------------------------------------------------------------
void ofApp::setup()
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

	AssetManager::Instance()->initialize();

	//crear un nuevo mundo
	world = new World();


}

//--------------------------------------------------------------
void ofApp::update()
{
	//another_console.printf("ciclo de update");
}

//--------------------------------------------------------------
void ofApp::draw()
{
	//puts("ciclo de draw");
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

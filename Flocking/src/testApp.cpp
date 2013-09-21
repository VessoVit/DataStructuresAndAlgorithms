#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(255,255,255);
    
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){
    flock.update();
}

//--------------------------------------------------------------
void testApp::draw(){
  //  bg.draw(130,130); //draws background
    flock.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key){
        case '+': flock.addBoid();
    }
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	flock.followMouse(ofPoint(x, y));

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
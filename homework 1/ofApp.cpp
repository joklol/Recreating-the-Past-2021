#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //background color is set to floralwhite
    ofBackground(ofColor::floralWhite);
    ofSetFrameRate(5);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    //everything will be drawn in darkred
    ofSetColor(ofColor::paleVioletRed,70);
    
    //define origin rectangle loc.
    float x = 40;
    float y = 40;
    
    //set rectangle dim.
    int w = 24;
    int h = 200;
    
    //gap dist.
    int g = w/7;
    
    //rectangle row 1
    for (int i = 0; i < 22; i += 1) {
    ofDrawRectangle(x + g * i + w * i, ofRandom(20, 60), w, h);
        
    }
    
    //rectangle row 2
    for (int i = 0; i < 22; i += 1) {
    ofDrawRectangle(x + w/2 + g * i + w * i, ofRandom(30, 160) + 100, w, h);
        
    }

    //rectangle row 3
    for (int i = 0; i < 22; i += 1) {
    ofDrawRectangle(x + g * i + w * i, ofRandom(60, 210) + 200, w, h);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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

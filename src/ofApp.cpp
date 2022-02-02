#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    ofColor colors[10];
    colors[0] = ofColor(203, 97, 73);
    colors[1] = ofColor(127, 177, 80);
    colors[2] = ofColor(171, 67, 70);
    colors[3] = ofColor(236, 192, 145);
    colors[4] = ofColor(166, 191, 229);
    colors[5] = ofColor(199, 123, 171);
    colors[6] = ofColor(118, 169, 222);
    colors[7] = ofColor(200, 201, 84);
    colors[8] = ofColor(125, 118, 188);
    colors[9] = ofColor(57, 101, 170);
    
    ofSeedRandom(mouseX);
    
//    ofBeginShape();
//    ofVertex(0, 0);
//    ofVertex(60, -40);
//    ofVertex(60, -10);
//    ofVertex(0, 30);
//    ofEndShape();
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 18; j++){
        float width = j * 50;
        float height = i * 35;
            float gap = j * -15;
            ofFill();
            ofSetColor(colors[(int)ofRandom(0,10)]);
        
        ofBeginShape();
        ofVertex(0 + width, 0 + gap + height);
        ofVertex(50 + width, -50 + gap + height);
        ofVertex(50 + width, -15 + gap + height);
        ofVertex(0 + width, 35 + gap + height);
        ofEndShape(true);
    }
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

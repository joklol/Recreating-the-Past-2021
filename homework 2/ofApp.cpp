#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(ofColor::black);
    ofSetFrameRate(7);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(ofColor::lightGreen);
    float time = ofGetElapsedTimef();
    
    for (int t = 0; t < 3; t++){
    for (int i = 0; i < 14; i++){
        for (int c = 0; c < 10; c++){
        float xorig = ofGetWidth()/11 + ofGetWidth()/11 * c;
        float yorig = ofGetHeight()/2;
        float scale = ofMap(t, 0, 10, 0, 1);
        float radius = 0 + ofMap(cos(time + t),-1, 0, 0, 30);
        float angle = PI/7 + PI/7 * i;
            
        
        float x = xorig + radius * cos(angle);
        float y = yorig + radius * sin(angle);
        
        ofDrawCircle(x, y, 5);
    }
    }
    }
    
//    float radius = 0 + ofMap(cos(time + t),-1, 0, 0, 30) * 3;
//    float radius = 0 + ofMap(sin(time), 1, 1, 0, 60);
    
//    ofSetColor(ofColor::lightGreen);
//    float time = ofGetElapsedTimef();
//
//    for (int i = 0; i < 14; i++){
//        for (int c = 0; c < 10; c++){
//        float xorig = ofGetWidth()/11 + ofGetWidth()/11 * c;
//        float yorig = ofGetHeight()/2;
//        float radius = 0 + time * 10;
//        float angle = PI/7 + PI/7 * i;
//
//
//        float x = xorig + radius * cos(angle);
//        float y = yorig + radius * sin(angle);
//
//        ofDrawCircle(x, y, 5);
//    }
//    }
    

    
//    for (int i = 0; i < 10; i++){
//    float xorig = 400;
//    float yorig = 400;
//    float radius = 100 + i * 20;
//    float angle = ofGetElapsedTimef() * ofMap(i, 0, 10, 1, 20);
//
//    float x = xorig + radius * cos(angle);
//    float y = yorig + radius * sin(angle);
//    ofDrawCircle(x,y, 5);
//    }
//
//    ofPolyline

//        float xorig = 400;
//        float yorig = 400;
//        float radius = 100 + 100 * sin(ofGetElapsedTimef() * 4);
//        float angle = ofGetElapsedTimef();
//        float x = xorig + radius * cos(angle);
//        float y = yorig + radius * sin(angle);
//
//            trail.addVertex(x, y);
//            trail.draw();
//
//        if (trail.size() > 200){
//            trail.getVertices().erase(trail.getVertices().begin());
//        }
//
//        ofDrawCircle(x,y, 10);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

//    if (key == ' '){
//        trail.clear();
//
//    }
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

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


    font.load("Helvetica.ttc", 30, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(234, 224, 199);
    
//    vector < ofPath > paths = font.getStringAsPoints("hello");
//    ofTranslate(200,200);
//    for (int i = 0; i < paths.size(); i++){
//        paths[i].draw();
//
//    }
    
    ofEnableDepthTest();
//
//    cam.enableOrtho();
//    cam.begin();
 
//    ------Multiple -----
    for (int j = 0; j < 19; j++){
        
        ofSetColor(0);
        ofPushMatrix();
        ofTranslate(60, 70 + (30 + 5) * j);
        ofScale(1,1);
        
            vector < ofPath > paths = font.getStringAsPoints("MULTIPLE");
            for (int i = 0; i < paths.size(); i++){
                paths[i].draw();
            }
        ofPopMatrix();
    }
//-------- Interaction #1 --------
        for (int d = 0; d < 19; d++){
            
            ofSetColor(0);
            ofPushMatrix();
            ofTranslate(255, 70 + (30 + 5) * d);
            ofScale(1,1);
            
                vector < ofPath > paths2 = font.getStringAsPoints("INTERACTION");
                for (int i = 0; i < paths2.size(); i++){
                    paths2[i].draw();
                }
            ofPopMatrix();
        }
    
    for (int e = 0; e < 19; e++){
        
        ofSetColor(0);
        ofPushMatrix();
        ofTranslate(265, 70 + (30 + 5) * e);
        ofScale(1,1);
        
            vector < ofPath > paths2 = font.getStringAsPoints("INTERACTION");
            for (int i = 0; i < paths2.size(); i++){
                paths2[i].draw();
            }
        ofPopMatrix();
    }
//
//
//    cam.end();
//
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

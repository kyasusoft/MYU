#include "ofApp.h"

int sx, sy;
int ex, ey;

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(0, 0, 0);
    
    sx = ofRandom(0, ofGetWidth());
    sy = ofRandom(0, ofGetHeight());
    ex = ofRandom(0, ofGetWidth());
    ey = ofRandom(0, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 赤
    ofSetColor(255, 0, 0);
    
    // 線分描画
    ofDrawLine(sx, sy, ex, ey);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//    
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // おまけ
    setup();

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
//void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){
//
//}

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

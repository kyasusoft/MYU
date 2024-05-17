#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(255, 255, 255);
    // 円の滑らかさ
    ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 楕円の中心は、(400, 300)
    
    // base
    ofSetColor(127, 127, 127);
    ofDrawEllipse(400, 300, 600, 200);
    
    // yellow
    ofSetColor(255, 255, 0);
    ofDrawCircle(400, 300, 50);
    
    // blue
    ofSetColor(0, 0, 255);
    ofDrawCircle(225, 300, 50);         // 400 - 175 -> 225

    // red
    ofSetColor(255, 0, 255);
    ofDrawCircle(575, 300, 50);         // 400 + 175 -> 575

    // stand
    ofSetColor(127, 127, 127);
    ofDrawRectangle(100, 300, 30, 200); // 400 - 300 -> 100
}

//--------------------------------------------------------------
void ofApp::exit(){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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

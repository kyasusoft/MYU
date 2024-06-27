#include "ofApp.h"

int tm = 0;

//--------------------------------------------------------------
void ofApp::setup(){

//    ofSetFrameRate(5);
}

//--------------------------------------------------------------
void ofApp::update(){
    tm = tm + 1;
}

//--------------------------------------------------------------
void ofApp::draw(){

    float p = tm / 40.1;
    float y = ofNoise(p) * 100;
    
    myBall(400, 300 + y, 80, 102, 100, 253);
    
}

// -------------------------------------------------------------
void ofApp::myBall(int x, int y, int r, int red, int green, int blue) {

    // 顔
    ofSetColor(red, green, blue);
    ofDrawCircle(x, y, r);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x - r / 2.5, y, r / 7);
    ofDrawCircle(x + r / 2.5, y, r / 7);

}
//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

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

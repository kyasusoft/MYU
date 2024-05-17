#include "ofApp.h"

int x;
int y;
int r;
int dx;

//--------------------------------------------------------------
void ofApp::setup(){
    x = 50;
    y = 300;
    r = 50;
    // 練習4-7a
    dx = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    // 練習4-8a
    if (ofGetWidth() - r < x) {
        dx = -5;
    }
    // 練習4-8b
    if (x < r) {
        dx = 5;
    }
    
    x = x + dx;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 顔
    ofSetColor(150, 0, 150);
    // 練習4-7a
    if (200 <= x) {
        ofSetColor(255, 0, 0);
    }
    // 練習4-7b
    if (ofGetWidth() / 2 < x) {
        ofSetColor(0, 0, 255);
    }
    ofDrawCircle(x, y, r);
    
    // 白目
    ofSetColor(255, 255, 255);
    // 練習4-9
    if (x <= 500) {
        ofSetColor(255, 255, 0);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    // 練習4-10
    if (x <= 300) {
        ofSetColor(0, 255, 255);
    } else if (x <= 600) {
        ofSetColor(255, 255, 255);
    }
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

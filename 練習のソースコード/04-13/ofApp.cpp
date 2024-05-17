#include "ofApp.h"

int aX, aY, aDx;
int bX, bY, bDx;

int width = 100;
int height = 100;

bool over = false;

//--------------------------------------------------------------
void ofApp::setup(){
    aX = 100;
    aY = 250;
    aDx = 3;
    bX = 600;
    bY = 300;
    bDx = -5;
}

//--------------------------------------------------------------
void ofApp::update(){
    // 赤の正方形の移動
    if (aX < 0 || ofGetWidth() - width < aX) {
        aDx = aDx * -1;
    }
    aX = aX + aDx;

    // 青の正方形の移動
    if (bX < 0 || ofGetWidth() - width < bX) {
        bDx = bDx * -1;
    }
    bX = bX + bDx;
    
    // 重なり検出　4-13b
    over = false;
    if (bX <= aX && aX <= bX + width) {
        over = true;
    }
    if (aX <= bX && bX <= aX + width) {
        over = true;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 赤の正方形
    if (over == false) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofDrawRectangle(aX, aY, width, height);
    // 青の正方形
    if (over == false) {
        ofSetColor(0, 0, 255);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofDrawRectangle(bX, bY, width, height);
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
//    over = !over;
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

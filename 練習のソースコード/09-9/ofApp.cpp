#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 原点移動
    ofTranslate(400, 400);
    // Y座標反転
    ofScale(1, -1);

    // X軸、Y軸
    ofSetColor(255, 255, 255);
    ofSetLineWidth(1);
    ofDrawLine(-400,    0, 400,   0);
    ofDrawLine(   0, -400,   0, 400);
    
    // 練習9-9a
    ofSetColor(255, 0, 0);
    for (int i = -400 ; i < 400 ; i++) {
        int x = i;
        int y = 2 * x + 50;
        ofDrawCircle(x, y, 2);
    }
    // 練習9-9b
//    ofSetColor(0, 255, 0);
//    for (float i = -400 ; i < 400 ; i += 1) {
//        float x = i / 10;           // 見やすくするためにx方向に10倍にする
//        float y = x*x - 20*x + 120;
//        ofDrawCircle(i, y, 2);
//
//    }
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

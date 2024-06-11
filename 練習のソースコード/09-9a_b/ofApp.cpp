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
    // 原点を移動
    ofTranslate(400, 400);
    // Y座標を反転
    ofScale(1, -1);

    // X軸、Y軸を描画
    ofSetColor(255, 255, 255);
    ofSetLineWidth(1);
    ofDrawLine(-400,    0, 400,   0);
    ofDrawLine(   0, -400,   0, 400);
    
    // 練習9-9a
    ofSetColor(255, 0, 0);
    for (int x = -400 ; x < 400 ; x++) {
        int y = 2 * x + 50;
        ofDrawCircle(x, y, 2);
    }

    // 練習9-9b
//    ofSetColor(0, 255, 0);
//    for (float x = -400 ; x < 400 ; x += 1) {
//        float y = x*x - 20*x + 120;
//        ofDrawCircle(x, y, 2);
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

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
    // 練習10-1a ----------------------------------------
    
    // 原点を画面の中心に移動
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    // Y軸の符号を反転
    ofScale(1, -1);
    // 太さ1、白の直線でX軸とY軸を描画
    ofSetColor(255, 255, 255);
    ofSetLineWidth(1.0);
    ofDrawLine(-ofGetWidth(), 0, ofGetWidth(), 0);
    ofDrawLine(0, ofGetHeight(), 0, -ofGetHeight());
    
    // 練習10-1b -----------------------------------------
/*
    // 二次関数
    ofSetColor(255, 0, 0);
    for (float x = -ofGetWidth() ; x < ofGetWidth() ; x+=0.01) {
        float y = x*x - 20*x + 120;
        ofDrawCircle(x, y, 1);
    }
*/
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

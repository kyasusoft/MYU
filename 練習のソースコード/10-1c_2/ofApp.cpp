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
    // 原点を画面の中心に移動
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    // Y軸の符号を反転
    ofScale(1, -1);
    // 太さ1、白の直線でX軸とY軸を描画
    ofSetColor(255, 255, 255);
    ofSetLineWidth(1.0);
    ofDrawLine(-ofGetWidth(), 0, ofGetWidth(), 0);
    ofDrawLine(0, ofGetHeight(), 0, -ofGetHeight());
    
    // 練習10-1c -----------------------------------------
    // sin
    ofSetColor(0, 255, 0);
    for (int x = 0 ; x <= 360 ; x+=1) {
        double y = sin(x*PI/180) * 100;
        ofDrawCircle(x, y, 1);
    }

    // 練習10-2 -----------------------------------------
    // 円
//    ofSetColor(255, 255, 0);
//    for (int i = 0 ; i < 360 ; i+=1) {
//        double x = cos(i*PI/180) * 100;
//        double y = sin(i*PI/180) * 100;
//        ofDrawCircle(x, y, 1);
//    }
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

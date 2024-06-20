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
    
    // 練習10-3 -----------------------------------------

    ofSetColor(255, 255, 0);

    // リサージュ  ( 参考：https://manabitimes.jp/math/1633 )
    for (float t = 0 ; t <= 360 ; t+=0.1) {
        float x = sin(3 * ofDegToRad(t)) * 200;
        float y = sin(4 * ofDegToRad(t)) * 200;
        ofDrawCircle(x, y, 1);
    }

    
    ofSetColor(255, 0, 255);
/*
    // サイクロイド(トロコイド)　（ 参考：https://rikeilabo.com/cycloid ）
    for (float t = -360 ; t <= 360 ; t+=1) {
        float a = 50;
        float b = 80;
        
        float x = a * (ofDegToRad(t)) - b * sin(ofDegToRad(t));
        float y = a                   - b * cos(ofDegToRad(t));
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

#include "ofApp.h"

const int MAX = 1000;       // 定数を宣言

int sx[MAX], sy[MAX];
int ex[MAX], ey[MAX];

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(0, 0, 0);
    
    // 1000本の開始位置、終了位置をランダムで設定
    for (int i = 0 ; i < MAX ; i++) {
        sx[i] = ofRandom(0, ofGetWidth());
        sy[i] = ofRandom(0, ofGetHeight());
        ex[i] = ofRandom(0, ofGetWidth());
        ey[i] = ofRandom(0, ofGetHeight());
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 半透明の赤
    ofSetColor(255, 0, 0, 128);
    
    // 線分描画
    for (int i = 0 ; i < MAX ; i++) {
        ofDrawLine(sx[i], sy[i], ex[i], ey[i]);
    }
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

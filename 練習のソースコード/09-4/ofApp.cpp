#include "ofApp.h"

const int MAX = 1000;   // 定数で宣言

int sx[MAX], sy[MAX];
int ex[MAX], ey[MAX];

// 色情報の二次元配列
int color[MAX][3];

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(0, 0, 0);
    
    // 1000本の開始位置、終了位置
    for (int i = 0 ; i < MAX ; i++) {
        // 開始位置をランダムで設定
        sx[i] = ofRandom(0, ofGetWidth());
        sy[i] = ofRandom(0, ofGetHeight());
        
        // 終了位置をランダムで設定
        ex[i] = ofRandom(0, ofGetWidth());
        ey[i] = ofRandom(0, ofGetHeight());
        
        // 色をランダムで設定
        color[i][0] = ofRandom(0, 255);     // 赤成分
        color[i][1] = ofRandom(0, 255);     // 緑成分
        color[i][2] = ofRandom(0, 255);     // 青成分
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    // 線分描画
    for (int i = 0 ; i < MAX ; i++) {
        // 線分の色を設定
        ofSetColor(color[i][0], color[i][1], color[i][2], 128);
        // 線分を描画
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

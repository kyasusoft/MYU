#include "ofApp.h"

int x = -100;
int y = -100;
int r = 150;

// ボールの中心とクリックした位置とのオフセット
int xOffset = 0;
int yOffset = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 顔
    ofSetColor(150, 0, 150);
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
    // 練習6-7c
    
    // カーソルがボールさん領域にあれば動かす（領域チェックは正方形）
    if ((::x - r < x && x < ::x + r) && (::y - r < y && y < ::y + r)) {
        // マウス位置をボールの中心にする
        ::x = x;
        ::y = y;

//        // クリックした位置のままドラッグするためにマウスクリック時に計算したオフセットを加える
//        ::x = x + xOffset;
//        ::y = y + yOffset;
    }
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (::x == -100) {
        // 最初のクリックでボールをクリックの位置に移動する
        ::x = x;
        ::y = y;
    }
    
    // ボールの中心とカーソル位置とのオフセットを計算する
    xOffset = ::x - x;
    yOffset = ::y - y;
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

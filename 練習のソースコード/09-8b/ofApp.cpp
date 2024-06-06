#include "ofApp.h"

int phase = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 原点を画面中央に移動
    ofTranslate(ofGetWidth() / 2, ofGetWindowHeight() / 2);

    int x = 0;
    int y = 0;
    int r = 200;

    // 菱形
    ofPushMatrix();             // 座標系保存
    
    ofRotateDeg(45);            // 45度回転
    
    ofSetColor(142, 64, 12);
    ofDrawRectangle(x - r, y - r, 2 * r, 2 * r);
    
    ofPopMatrix();              // 座標系復元
//    ofRotateDeg(-45);          // 逆変換で座標系を戻す(Push,Popの代わり）
    
    // ボール
    ofSetColor(92, 15, 143);
    ofDrawCircle(x, y, r);
    ofSetColor(255, 255, 255);
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
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
    phase++;
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

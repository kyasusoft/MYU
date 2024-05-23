#include "ofApp.h"

static const int BALLMAX = 10;

int x[BALLMAX], y[BALLMAX];
int r = 50;
int ballNum = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // クリックして内容が設定された数までループする
    for (int i = 0 ; i < ballNum ; i++) {
        // 顔
        ofSetColor(150, 0, 150);
        ofDrawCircle(x[i], y[i], r);
        // 白目
        ofSetColor(255, 255, 255);
        ofDrawCircle(x[i] - r / 2.5, y[i], r / 5);
        ofDrawCircle(x[i] + r / 2.5, y[i], r / 5);
        // 黒目
        ofSetColor(0, 0, 0);
        ofDrawCircle(x[i] - r / 2.5, y[i], r / 7);
        ofDrawCircle(x[i] + r / 2.5, y[i], r / 7);
    }
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
void ofApp::mousePressed(int mouX, int mouY, int button){
    
    if (ballNum < BALLMAX) {
        // 配列のballNum番目の要素にマウスの座標を設定する
        x[ballNum] = mouX;
        y[ballNum] = mouY;
        
        ballNum = ballNum + 1;
    }
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

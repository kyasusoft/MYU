#include "ofApp.h"

int x;
int y;
int height;

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(255, 255, 255);
    // 円の滑らかさ
    ofSetCircleResolution(64);
    // 変数に値を代入
    x = 400;
    y = 300;
    height = 200;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // base
    ofSetColor(127, 127, 127);
    ofDrawEllipse(x, y, 3 * height, height);
    
    // yellow
    ofSetColor(255, 255, 0);
    ofDrawCircle(x, y, 50);
    
    // blue
    ofSetColor(0, 0, 255);
    ofDrawCircle(x - 175, y, 50);           // 400 - 175 --> 225
    
    // red
    ofSetColor(255, 0, 0);
    ofDrawCircle(x + 175, y, 50);           // 400 + 175 --> 575
    
    // stand
    ofSetColor(127, 127, 127);
    ofDrawRectangle(x - 300, y, 30, 200);   // 400 - 300 --> 200
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') x -= 3;     // 左
    if (key == 's') x += 3;     // 右
    
    if (key == 'w') y -= 3;     // 上
    if (key == 'z') y += 3;     // 下
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

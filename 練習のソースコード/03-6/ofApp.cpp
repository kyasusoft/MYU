#include "ofApp.h"

int x;
int y;
int height;
int cr;


//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(255, 255, 255);
    // 円の滑らかさ
    ofSetCircleResolution(64);
    // 変数に値を代入
    x = 400;
    y = 300;
    height = 200;   // cr * 4
    cr = 50;
}

//--------------------------------------------------------------
void ofApp::update(){
    height = cr * 4;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 楕円の中心は、x = 400, y = 300
    
    // base
    ofSetColor(127, 127, 127);
    ofDrawEllipse(x, y, height * 3, height);
    
    // yellow
    ofSetColor(255, 255, 0);
    ofDrawCircle(x, y, cr);
    
    // blue
    ofSetColor(0, 0, 255);
    ofDrawCircle(x - 3.5 * cr, y, cr);
    
    // red
    ofSetColor(255, 0, 0);
    ofDrawCircle(x + 3.5 * cr, y, cr);
    
    // stand
    ofSetColor(127, 127, 127);
    ofDrawRectangle(x - 6 * cr, y, 0.6 * cr, 4 * cr);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'a') x -= 3;     // 左
    if (key == 's') x += 3;     // 右
    
    if (key == 'w') y -= 3;     // 上
    if (key == 'z') y += 3;     // 下

    if (key == '+') cr += 3;    // 大
    if (key == '-') cr -= 3;    // 小
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

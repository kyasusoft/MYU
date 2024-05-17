#include "ofApp.h"

int x = 400;
int y = 300;
int height = 200;

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色
    ofBackground(255, 255, 255);
    // 円の滑らかさ
    ofSetCircleResolution(64);
    
    // 自分の名前を表示
    cout << "安原　啓悦"<< endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // base
    ofSetColor(127, 127, 127);
    ofDrawEllipse(x, y, height * 3, height);
    // x, yを表示
    cout << "x = " << x << " y = " << y << "\n";
    
    // yellow
    ofSetColor(255, 255, 0);
    ofDrawCircle(400, 300, 50);
    
    // blue
    ofSetColor(0, 0, 255);
    ofDrawCircle(400 - 50 - 75, 300, 50);
    
    // red
    ofSetColor(255, 0, 255);
    ofDrawCircle(400 + 50 + 75, 300, 50);
    
    // stand
    ofSetColor(127, 127, 127);
    ofDrawRectangle(100, 300, 30, 200);
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

#include "ofApp.h"

int x;      // 練習4-6 float
int y;
int r;
int dx;     // 練習4-6 float

//--------------------------------------------------------------
void ofApp::setup(){
    x = 400;
    y = 300;
    r = 50;
    dx = 1;
    
//    // 練習4-3b
//    x = 50;
    
//    // 練習4-4a
//    ofSetFrameRate(30);
    
//    // 練習4-4b
//    dx = 2;
    
//    // 練習4-5a
//    int width = ofGetWidth();
//    int heifght = ofGetHeight();
//    cout << "width  = " << width << endl;
//    cout << "height = " << heifght;
    
//    // 練習4-5b
//    x = ofGetWidth() - 50;
    
//    // 練習4-6
//    ofSetFrameRate(50);
//    x = 50;
//                // 50frame/s * 10s で 500frame
//                // dx=1 なら 10秒で 500進む
//                // dx=2 なら 10秒で 1000進む
//                // 10秒で800進むには、800 / 500 = 1.6
//                // dx=1.6 少数を扱うためには floatにする必要がある -> x と　dx
//    dx = 1.6;
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    // 練習4-3a、練習4-6
//    x = x + dx;
  
//    // 練習4-5b
//    x = x - dx;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 練習4-2
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
void ofApp::exit(){

}

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

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//    ofSetFrameRate(5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int r = 50;
    float y;
    
    for (int x = r ; x < 800 ; x += 2*r) {
        // 練習11-3a
        y = 300;
        myBall(x, y, r, 102, 0, 153);

        // 練習11-3b
        float p = x / 10.1;
        y = ofNoise(p) * 100;     // ノイズは0〜1.0なので100倍する
        myBall(x, 300 + y, r, 102, 100, 253);
    }
    
}

// -------------------------------------------------------------
void ofApp::myBall(int x, int y, int r, int red, int green, int blue) {

    // 顔
    ofSetColor(red, green, blue);
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

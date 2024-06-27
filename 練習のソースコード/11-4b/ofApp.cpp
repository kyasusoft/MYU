#include "ofApp.h"

int r = 50;

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int x = r ; x < ofGetWidth() ; x += 2 * r) {
        for (int y = r ; y < ofGetHeight() ; y += 2 * r) {
            // 赤を二次元ノイズで変更
            float p1 = x / 1000.1;
            float p2 = y / 1000.1;
            int red   = ofNoise(p1, p2) * 255;
            
            myBall(x, y, r, red, 0, 0);
        }
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

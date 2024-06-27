#include "ofApp.h"

float tm;

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // 二次元（ばらつき大）
    for (int x = 0 ; x < ofGetWidth() / 2 ; x++) {
        for (int y = 0 ; y < ofGetHeight() / 2 ; y++) {
            float n1 = x / 10.1;
            float n2 = y / 10.1;
            int a = ofNoise(n1, n2) * 255;
            ofSetColor(255, 0, 0, a);
            ofDrawCircle(x, y, 1);
        }
    }
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("ofNoise ( 2 dimensions : big )", 100, 50);

    // 二次元（ばらつき小）
    for (int x = ofGetWidth() / 2 ; x < ofGetWidth() ; x++) {
        for (int y = 0 ; y < ofGetHeight() / 2 ; y++) {
            float n1 = x / 50.1;
            float n2 = y / 50.1;
            int a = ofNoise(n1, n2) * 255;
            ofSetColor(255, 0, 0, a);
            ofDrawCircle(x, y, 1);
        }
    }
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("ofNoise ( 2 dimensions : small )", ofGetWidth() / 2 + 100, 50);

    // 三次元ノイズ
    for (int x = 0 ; x < ofGetWidth() / 2 ; x++) {
        for (int y = ofGetHeight() / 2 ; y < ofGetHeight() ; y++) {
            float n1 = x / 50.1;
            float n2 = y / 50.1;
            int a = ofNoise(n1, n2, tm) * 255;
            ofSetColor(255, 0, 0, a);
            ofDrawCircle(x, y, 1);
        }
    }
    tm = tm + 0.1;
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("ofNoise ( 3 dimensions )", 100, ofGetHeight() / 2 + 50);

    // 乱数
    for (int x = ofGetWidth() / 2 ; x < ofGetWidth() ; x++) {
        for (int y = ofGetHeight() / 2 ; y < ofGetHeight() ; y++) {
            float n1 = x / 50.1;
            float n2 = y / 50.1;
            int a = ofRandom(0, 1) * 255;
            ofSetColor(255, 0, 0, a);
            ofDrawCircle(x, y, 1);
        }
    }
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("ofRandom", ofGetWidth() / 2 + 100, ofGetHeight() / 2 + 50);
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

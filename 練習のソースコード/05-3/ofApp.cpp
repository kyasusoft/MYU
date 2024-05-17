#include "ofApp.h"

float x, y, r;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(64);
    
    x = 100;
    y = 150;
    r = 50;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // 練習 5-3a ================================================
    int i = 0;
    while(i < 3) {
        x = 100 + i * (r * 2);              //　iを使ってxを変更
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
        i = i + 1;                          // iをインクリメント
    }

/*
    // 練習 5-3b ================================================
    int i = 0;
    y = 150;                            // 一段目のyの位置
    while(i < 3) {
        x = 100 + i * (r * 2);
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
        i++;
    }
    i = 0;
    y = 150 + 100;                      // 二段目のyの位置
    while(i < 3) {
        x = 100 + i * (r * 2);
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
        i++;
    }
    i = 0;
    y = 150 + 200;                      // 三段目のyの位置
    while(i < 3) {
        x = 100 + i * (r * 2);
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
        i++;
    }
*/
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

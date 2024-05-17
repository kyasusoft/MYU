#include "ofApp.h"

float x, y, r;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(64);
    x = 100;
    y = 150;
    r = 50;
    
    // 練習 5-6a ================================================
    for (int i = 1 ; i < 10 ; i++) {
        cout << i << endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // 練習 5-6b ================================================
    for(int i = 0 ; i < 3 ; i++) {
        x = 100 + i * (r * 2);              // iを使ってxを増やす
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
    }

/*
    // 練習 5-6c ================================================
    y = 150;                                // 一段目のyの位置
    for(int i = 0 ; i < 3 ; i++) {
        x = 100 + i * (r * 2);
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
    }
    y = 150 + 100;                          // 二段目のyの位置
    for(int i = 0 ; i < 3 ; i++) {
        x = 100 + i * (r * 2);
        ofSetColor(102, 0, 153);
        ofDrawCircle(x, y, r);
        ofSetColor(255, 255, 255);
        ofDrawCircle(x - r / 2.5, y, r / 5);
        ofDrawCircle(x + r / 2.5, y, r / 5);
        ofSetColor(0, 0, 0);
        ofDrawCircle(x - r / 2.5, y, r / 7);
        ofDrawCircle(x + r / 2.5, y, r / 7);
    }
    y = 150 + 200;                          // 三段目のyの位置
    for(int i = 0 ; i < 3 ; i++) {
        for(int i = 0 ; i < 3 ; i++) {
            x = 100 + i * (r * 2);
            ofSetColor(102, 0, 153);
            ofDrawCircle(x, y, r);
            ofSetColor(255, 255, 255);
            ofDrawCircle(x - r / 2.5, y, r / 5);
            ofDrawCircle(x + r / 2.5, y, r / 5);
            ofSetColor(0, 0, 0);
            ofDrawCircle(x - r / 2.5, y, r / 7);
            ofDrawCircle(x + r / 2.5, y, r / 7);
        }
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
void ofApp::mouseReleased(int x, int y, int button) {
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

#include "ofApp.h"

float x, y, r;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(64);
    
    x = 100;
    y = 150;
    r = 50;

/*
    // 練習 5-2a =================================================
    int i = 1;
    while( i <= 9 ) {
        cout << i << endl;
        i = i + 1;
    }
*/
/*
    // 練習 5-2b =================================================
    int i = 1;
    while( i <= 9 ) {
        cout << i * i << endl;
        i = i + 1;
    }
*/
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // ball 1
    x = 100;
    ofSetColor(102, 0, 153);
    ofDrawCircle(x, y, r);
    ofSetColor(255, 255, 255);
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
    ofSetColor(0, 0, 0);
    ofDrawCircle(x - r / 2.5, y, r / 7);
    ofDrawCircle(x + r / 2.5, y, r / 7);
/*
    // 練習 5-1 =================================================
    // ball 2
    x = 200;                // xを変更（２番目のボールの位置）
    ofSetColor(102, 0, 153);            // あとはball1と同じ
    ofDrawCircle(x, y, r);
    ofSetColor(255, 255, 255);
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
    ofSetColor(0, 0, 0);
    ofDrawCircle(x - r / 2.5, y, r / 7);
    ofDrawCircle(x + r / 2.5, y, r / 7);

    // ball 3
    x = 300;                  //　xを変更（３番目のボールの位置）
    ofSetColor(102, 0, 153);            // あとはball1と同じ
    ofDrawCircle(x, y, r);
    ofSetColor(255, 255, 255);
    ofDrawCircle(x - r / 2.5, y, r / 5);
    ofDrawCircle(x + r / 2.5, y, r / 5);
    ofSetColor(0, 0, 0);
    ofDrawCircle(x - r / 2.5, y, r / 7);
    ofDrawCircle(x + r / 2.5, y, r / 7);
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

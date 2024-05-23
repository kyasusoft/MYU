#include "ofApp.h"

// 練習6-3b ===========================================
int x[3], y[3], r[3];
int dx[3], dy[3];
int red[3], green[3], blue[3];


//--------------------------------------------------------------
void ofApp::setup(){
    // 練習6-3a ===========================================

    int num[5];
    num[0] = ofRandom(0, 10);
    num[1] = ofRandom(0, 10);
    num[2] = ofRandom(0, 10);
    num[3] = ofRandom(0, 10);
    num[4] = ofRandom(0, 10);
    cout << "1番目 -> " << num[0] << endl;
    cout << "2番目 -> " << num[1] << endl;
    cout << "3番目 -> " << num[2] << endl;
    cout << "4番目 -> " << num[3] << endl;
    cout << "5番目 -> " << num[4] << endl;

    // 練習6-3b ===========================================

    // ball 1
    r[0]     = ofRandom(50, 100);
    x[0]     = ofRandom(r[0], ofGetWidth() - r[0]);
    y[0]     = ofRandom(r[0], ofGetHeight() - r[0]);
    dx[0]    = ofRandom(-5, 5);
    dy[0]    = ofRandom(-5, 5);
    red[0]   = ofRandom(0, 255);
    green[0] = ofRandom(0, 255);
    blue[0]  = ofRandom(0, 255);
    
    // ball 2
    r[1]     = ofRandom(50, 100);
    x[1]     = ofRandom(r[1], ofGetWidth() - r[1]);
    y[1]     = ofRandom(r[1], ofGetHeight() - r[1]);
    dx[1]    = ofRandom(-5, 5);
    dy[1]    = ofRandom(-5, 5);
    red[1]   = ofRandom(0, 255);
    green[1] = ofRandom(0, 255);
    blue[1]  = ofRandom(0, 255);
    
    // ball 3
    r[2]     = ofRandom(50, 100);
    x[2]     = ofRandom(r[2], ofGetWidth() - r[2]);
    y[2]     = ofRandom(r[2], ofGetHeight() - r[2]);
    dx[2]    = ofRandom(-5, 5);
    dy[2]    = ofRandom(-5, 5);
    red[2]   = ofRandom(0, 255);
    green[2] = ofRandom(0, 255);
    blue[2]  = ofRandom(0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    // ball 1
    if (x[0] < r[0] || ofGetWidth() - r[0] < x[0]) {
        dx[0] = -dx[0];
        red[0]   = ofRandom(0, 255);
        green[0] = ofRandom(0, 255);
        blue[0]  = ofRandom(0, 255);
    }
    x[0] = x[0] + dx[0];
    if (y[0] < r[0] || ofGetHeight()- r[0] < y[0]) {
        dy[0] = -dy[0];
        red[0]   = ofRandom(0, 255);
        green[0] = ofRandom(0, 255);
        blue[0]  = ofRandom(0, 255);
    }
    y[0] = y[0] + dy[0];
    
    // ball 2
    if (x[1] < r[1] || ofGetWidth() - r[1] < x[1]) {
        dx[1] = -dx[1];
        red[1]   = ofRandom(0, 255);
        green[1] = ofRandom(0, 255);
        blue[1]  = ofRandom(0, 255);
    }
    x[1] = x[1] + dx[1];
    if (y[1] < r[1] || ofGetHeight()- r[1] < y[1]) {
        dy[1] = -dy[1];
        red[1]   = ofRandom(0, 255);
        green[1] = ofRandom(0, 255);
        blue[1]  = ofRandom(0, 255);
    }
    y[1] = y[1] + dy[1];

    // ball 3
    if (x[2] < r[2] || ofGetWidth() - r[2] < x[2]) {
        dx[2] = -dx[2];
        red[2]   = ofRandom(0, 255);
        green[2] = ofRandom(0, 255);
        blue[2]  = ofRandom(0, 255);
    }
    x[2] = x[2] + dx[2];
    if (y[2] < r[2] || ofGetHeight()- r[2] < y[2]) {
        dy[2] = -dy[2];
        red[2]   = ofRandom(0, 255);
        green[2] = ofRandom(0, 255);
        blue[2]  = ofRandom(0, 255);
    }
    y[2] = y[2] + dy[2];
}

//--------------------------------------------------------------
void ofApp::draw(){
    // ball 1
    // 顔
    ofSetColor(red[0], green[0], blue[0]);
    ofDrawCircle(x[0], y[0], r[0]);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x[0] - r[0] / 2.5, y[0], r[0] / 5);
    ofDrawCircle(x[0] + r[0] / 2.5, y[0], r[0] / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x[0] - r[0] / 2.5, y[0], r[0] / 7);
    ofDrawCircle(x[0] + r[0] / 2.5, y[0], r[0] / 7);
    
    // ball 2
    // 顔
    ofSetColor(red[1], green[1], blue[1]);
    ofDrawCircle(x[1], y[1], r[1]);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x[1] - r[1] / 2.5, y[1], r[1] / 5);
    ofDrawCircle(x[1] + r[1] / 2.5, y[1], r[1] / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x[1] - r[1] / 2.5, y[1], r[1] / 7);
    ofDrawCircle(x[1] + r[1] / 2.5, y[1], r[1] / 7);
    
    // ball 3
    // 顔
    ofSetColor(red[2], green[2], blue[2]);
    ofDrawCircle(x[2], y[2], r[2]);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x[2] - r[2] / 2.5, y[2], r[2] / 5);
    ofDrawCircle(x[2] + r[2] / 2.5, y[2], r[2] / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x[2] - r[2] / 2.5, y[2], r[2] / 7);
    ofDrawCircle(x[2] + r[2] / 2.5, y[2], r[2] / 7);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // おまけ
    setup();
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

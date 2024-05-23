#include "ofApp.h"

int x,  y,  r;
int x2, y2, r2;
int x3, y3, r3;

int dx, dy;
int dx2, dy2;
int dx3, dy3;

int red, green, blue;
int red2, green2, blue2;
int red3, green3, blue3;


//--------------------------------------------------------------
void ofApp::setup(){
    // ball 1
    r     = ofRandom(50, 100);
    x     = ofRandom(r, ofGetWidth() - r);
    y     = ofRandom(r, ofGetHeight() - r);
    dx    = ofRandom(-5, 5);
    dy    = ofRandom(-5, 5);
    red   = ofRandom(0, 255);
    green = ofRandom(0, 255);
    blue  = ofRandom(0, 255);
    
    // ball 2
    r2     = ofRandom(50, 100);
    x2     = ofRandom(r2, ofGetWidth() - r2);
    y2     = ofRandom(r2, ofGetHeight() - r2);
    dx2    = ofRandom(-5, 5);
    dy2    = ofRandom(-5, 5);
    red2   = ofRandom(0, 255);
    green2 = ofRandom(0, 255);
    blue2  = ofRandom(0, 255);
    
    // ball 3
    r3     = ofRandom(50, 100);
    x3     = ofRandom(r3, ofGetWidth() - r3);
    y3     = ofRandom(r3, ofGetHeight() - r3);
    dx3    = ofRandom(-5, 5);
    dy3    = ofRandom(-5, 5);
    red3   = ofRandom(0, 255);
    green3 = ofRandom(0, 255);
    blue3  = ofRandom(0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    // ball 1
    if (x < r || ofGetWidth() - r < x) {
        dx = -dx;
        red   = ofRandom(0, 255);
        green = ofRandom(0, 255);
        blue  = ofRandom(0, 255);
    }
    x = x + dx;
    if (y < r || ofGetHeight()- r < y) {
        dy = -dy;
        red   = ofRandom(0, 255);
        green = ofRandom(0, 255);
        blue  = ofRandom(0, 255);
    }
    y = y + dy;
    
    // ball 2
    if (x2 < r2 || ofGetWidth() - r2 < x2) {
        dx2 = -dx2;
        red2   = ofRandom(0, 255);
        green2 = ofRandom(0, 255);
        blue2  = ofRandom(0, 255);
    }
    x2 = x2 + dx2;
    if (y2 < r2 || ofGetHeight()- r2 < y2) {
        dy2 = -dy2;
        red2   = ofRandom(0, 255);
        green2 = ofRandom(0, 255);
        blue2  = ofRandom(0, 255);
    }
    y2 = y2 + dy2;

    // ball 3
    if (x3 < r3 || ofGetWidth() - r3 < x3) {
        dx3 = -dx3;
        red3   = ofRandom(0, 255);
        green3 = ofRandom(0, 255);
        blue3  = ofRandom(0, 255);
    }
    x3 = x3 + dx3;
    if (y3 < r3 || ofGetHeight()- r3 < y3) {
        dy3 = -dy3;
        red3   = ofRandom(0, 255);
        green3 = ofRandom(0, 255);
        blue3  = ofRandom(0, 255);
    }
    y3 = y3 + dy3;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // ball 1
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
    
    // ball 2
    // 顔
    ofSetColor(red2, green2, blue2);
    ofDrawCircle(x2, y2, r2);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x2 - r2 / 2.5, y2, r2 / 5);
    ofDrawCircle(x2 + r2 / 2.5, y2, r2 / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x2 - r2 / 2.5, y2, r2 / 7);
    ofDrawCircle(x2 + r2 / 2.5, y2, r2 / 7);
    
    // ball 3
    // 顔
    ofSetColor(red3, green3, blue3);
    ofDrawCircle(x3, y3, r3);
    // 白目
    ofSetColor(255, 255, 255);
    ofDrawCircle(x3 - r3 / 2.5, y3, r3 / 5);
    ofDrawCircle(x3 + r3 / 2.5, y3, r3 / 5);
    // 黒目
    ofSetColor(0, 0, 0);
    ofDrawCircle(x3 - r3 / 2.5, y3, r3 / 7);
    ofDrawCircle(x3 + r3 / 2.5, y3, r3 / 7);
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

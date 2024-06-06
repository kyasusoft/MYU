#include "ofApp.h"

int phase = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    ofSetLineWidth(1);
    // 原点を画面中央に移動
    ofTranslate(400, 400);
    // 座標変換前のX,Y軸
    ofDrawLine(-800,    0, 800,   0);
    ofDrawLine(   0, -800,   0, 800);

    // 練習9-8a =======================================

    ofSetColor(255, 255, 255);
    
    switch (phase % 6) {
        case 0:
            ofDrawBitmapString("before transrate", -350, -350);
            // 変換前
            break;
        case 1:
            ofDrawBitmapString("x shift 200", -350, -350);
            // X軸方向に200移動
            ofTranslate(200, 0);
            break;
        case 2:
            ofDrawBitmapString("x shift 200 --> z rotate 60", -350, -350);
            // X軸方向に200移動後に、Z軸周りに60度回転
            ofTranslate(200, 0);
            ofRotateDeg(60);
            break;
        case 3:
            ofDrawBitmapString("before transrate", -350, -350);
            // 変換前
            break;
        case 4:
            ofDrawBitmapString("z rotate 60", -350, -350);
            // Z軸周りに60度回転
            ofRotateDeg(60);
            break;
        case 5:
            ofDrawBitmapString("z rotate 60 --> x shift 200", -350, -350);
            // Z軸周りに60度回転後に、X軸方向に200移動
            ofRotateDeg(60);
            ofTranslate(200, 0);
    }

    // 座標変換後のX,Y軸
    ofSetColor(255, 0, 0);
    ofDrawLine(-800,    0, 800,   0);
    ofDrawLine(   0, -800,   0, 800);

    // 楕円
    ofSetColor(255, 255, 100);
    ofDrawEllipse(0, 0, 300, 100);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    phase++;
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

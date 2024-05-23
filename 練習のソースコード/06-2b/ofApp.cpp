#include "ofApp.h"

int x, y, r = 0;
int dx, dy;
int red, green, blue;


//--------------------------------------------------------------
void ofApp::setup(){
    // ボールの位置と大きさの初期値
    r = ofRandom(50, 100);
    x = ofRandom(r, ofGetWidth() - r);
    y = ofRandom(r, ofGetHeight() - r);
    
    // ボールの移動距離の初期値
    dx = ofRandom(-5, 5);
    dy = ofRandom(-5, 5);
    
    // ボールの色の初期値
    red   = ofRandom(0, 255);
    green = ofRandom(0, 255);
    blue  = ofRandom(0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    // ボールの当たり判定
    if (x < r || ofGetWidth() - r < x) {
        // 左右の壁に当たった
        dx = -dx;
        red   = ofRandom(0, 255);
        green = ofRandom(0, 255);
        blue  = ofRandom(0, 255);
    }
    x = x + dx;

    if (y < r || ofGetHeight() - r < y) {
        //　上下の壁に当たった
        dy = -dy;
        red   = ofRandom(0, 255);
        green = ofRandom(0, 255);
        blue  = ofRandom(0, 255);
    }
    y = y + dy;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // ボールを描画
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
    // おまけ（何かキーが押されたら setup()を実行する
    setup();
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

#include "ofApp.h"

// 練習6-2a
int x, y, r;
int dx, dy;
int red, green, blue;

//--------------------------------------------------------------
void ofApp::setup(){
    // 練習6-1
    for (int i = 0 ; i < 10 ; i++) {
        float rnd = ofRandom(0.0, 50.0);
        if (rnd < 10) {
            cout << ' ';        // 10より小さい時の表示桁合わせ
        }
        cout << rnd << endl;
    }
    
    
    // 練習6-2a
    // ボールの位置と大きさの初期値
    x = ofGetWidth() / 2;       // 画面の幅の中央
    y = ofGetHeight() / 2;      // 画面の高さの中央
    r = 50;                     // 半径
    
    // 移動距離
    dx = 2;                     // X方向の移動距離
    dy = 3;                     // Y方向の移動距離
    
    // ボールの色の初期値
    red   = ofRandom(0, 255);
    green = ofRandom(0, 255);
    blue  = ofRandom(0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
    // 練習6-2a
    // ボールの当たり判定
    if (x < r || ofGetWidth() - r < x) {
        // 左右の壁に当たった
        dx    = -dx;
    }
    x = x + dx;
    
    if (y < r || ofGetHeight()- r < y) {
        // 上下の壁に当たった
        dy    = -dy;
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

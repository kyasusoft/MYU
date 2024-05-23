#include "ofApp.h"

// 練習6-4b ========================================

// 要素３つの配列として変数を定義
int x[3], y[3], r[3];
int dx[3], dy[3];
int red[3], green[3], blue[3];


//--------------------------------------------------------------
void ofApp::setup(){
    // 練習6-4a ========================================
    
    int num[5];
    for (int i = 0 ; i < 5 ; i++) {
        num[i] = ofRandom(0, 10);
    }
    for (int i = 0 ; i < 5 ; i++) {
        cout << i + 1 << "番目 -> " << num[i] << endl;
    }
    
    // 練習6-4b ========================================
    
    // それぞれのボールにランダムな初期値を設定
    for (int i = 0 ; i < 3 ; i++) {
        // ボールの位置と大きさの初期値
        r[i]     = ofRandom(50,   100);
        x[i]     = ofRandom(r[i], ofGetWidth() - r[i]);
        y[i]     = ofRandom(r[i], ofGetHeight() - r[i]);
        // 移動距離
        dx[i]    = ofRandom(-5,   5);
        dy[i]    = ofRandom(-5,   5);
        // ボールの色の初期値
        red[i]   = ofRandom(0,    255);
        green[i] = ofRandom(0,    255);
        blue[i]  = ofRandom(0,    255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    // 練習6-4b ========================================

    // それぞれのボールの当たり判定
    for (int i = 0 ; i < 3 ; i++) {
        if (x[i] < r[i] || ofGetWidth() - r[i] < x[i]) {
            // 左右の壁に当たった
            dx[i]    = -dx[i];
            red[i]   = ofRandom(0, 255);
            green[i] = ofRandom(0, 255);
            blue[i]  = ofRandom(0, 255);
        }
        x[i] = x[i] + dx[i];
        
        if (y[i] < r[i] || ofGetHeight()- r[i] < y[i]) {
            // 上下の壁に当たった
            dy[i]    = -dy[i];
            red[i]   = ofRandom(0, 255);
            green[i] = ofRandom(0, 255);
            blue[i]  = ofRandom(0, 255);
        }
        y[i] = y[i] + dy[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 練習6-4b ========================================

    // それぞれのボールを描画
    for (int i = 0 ; i < 3 ; i++) {
        // 顔
        ofSetColor(red[i], green[i], blue[i]);
        ofDrawCircle(x[i], y[i], r[i]);
        // 白目
        ofSetColor(255, 255, 255);
        ofDrawCircle(x[i] - r[i] / 2.5, y[i], r[i] / 5);
        ofDrawCircle(x[i] + r[i] / 2.5, y[i], r[i] / 5);
        // 黒目
        ofSetColor(0, 0, 0);
        ofDrawCircle(x[i] - r[i] / 2.5, y[i], r[i] / 7);
        ofDrawCircle(x[i] + r[i] / 2.5, y[i], r[i] / 7);
    }
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

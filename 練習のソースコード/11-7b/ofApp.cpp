#include "ofApp.h"

float r;
float deg;
// 練習11_7b
float t;

//--------------------------------------------------------------
void ofApp::setup(){
    
    r = ofGetHeight() / 3.0;
    
    ofBackground(255, 255, 255);
    ofSetColor(0, 0, 0, 60);

    // 練習11_7b
    t = 0;
    ofSetBackgroundAuto(false);     // 自動塗り潰しオフ
    ofSetFrameRate(30);             // フレームレート 30fps
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 練習11_7b（点を円周上で動かす）
    float p = t / 200.1;
    deg = ofNoise(p) * 360;         // 時間(t)をキーにした一次元パーリンノイズ
    t = t + 1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 座標変換（原点を画面中央に移動）（練習11_7a）
    ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);

//    // 外側の円を描画（デバッグ用）
//    ofNoFill();
//    ofDrawCircle(0, 0, r);

    // 練習11-7a
    // 円周上の点
    float x1 = r * cos(ofDegToRad(deg));
    float y1 = r * sin(ofDegToRad(deg));
    // 反対側に位置する点
    float x2 = r * cos(ofDegToRad(deg + 180));   // 180度ずらすことで反対側になる
    float y2 = r * sin(ofDegToRad(deg + 180));   // 180度ずらすことで反対側になる

    ofDrawLine(x1, y1, x2, y2);
}

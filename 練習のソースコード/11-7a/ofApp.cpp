#include "ofApp.h"

float r;
float deg;

//--------------------------------------------------------------
void ofApp::setup(){

    r   = ofGetHeight() / 3.0;      // 半径はウインドウの高さの1/3
    deg = 45;                       // 角度は45度で固定
    
    ofBackground(255, 255, 255);    // 背景色　白
    ofSetColor(0, 0, 0, 60);        // 線の色　透明度60の黒
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 座標変換（原点を画面中央に移動）
    ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);

    // 外側の円を描画（デバッグ用）
//    ofNoFill();
//    ofDrawCircle(0, 0, r);

    // 円周上の点
    float x1 = r * cos(ofDegToRad(deg));
    float y1 = r * sin(ofDegToRad(deg));
    // 反対側に位置する点
    float x2 = r * cos(ofDegToRad(deg + 180));   // 180度ずらすことで反対側になる
    float y2 = r * sin(ofDegToRad(deg + 180));   // 180度ずらすことで反対側になる
    
    ofDrawLine(x1, y1, x2, y2);
}

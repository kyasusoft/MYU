#include "ofApp.h"

float r;
float deg;
// 練習11_7b
float t;
// 練習11_7c
float colorNum;
float colorDx;
// 練習11-7e
float offsetX, offsetY;     // 円の中心座標のオフセット

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    r = ofGetHeight() / 3.0;

    // 練習11_7b
    t = 0;
    ofSetBackgroundAuto(false);     // 自動塗り潰しオフ
    ofSetFrameRate(30);             // フレームレート 30fps
    
    // 練習11_7c
    colorDx = -1;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // 練習11_7b（点を円周上で動かす）
    float p = t / 200.1;
    deg = ofNoise(p) * 360;         // 時間(t)をキーにした一次元パーリンノイズ
    t = t + 1;
    
    // 練習11_7c（色を徐々に変化させる）
    if (colorNum == 0 || colorNum == 255) {
        colorDx = -colorDx;
    }
    colorNum += colorDx;
    ofSetColor(colorNum, colorNum, colorNum, 60);
    
    // 練習11_7d（半径を変化させる）
    float p2 = colorNum / 100000.1;
    r = ofNoise(p, p2) * ofGetWindowHeight() / 3.0; // 時間と色をキーにした二次元パーリンノイズ
    
    // 練習11_7e
    //      時間をキーとする一次元のパーリンノイズ
    //      最小値：-ofGetWindowHeight() / 20.0
    //      最大値：ofNoise(p) * ofGetWindowHeight() / 10.0
    //              最大値と最小値の差はウインドウの高さの1/10
    offsetX = -ofGetWindowHeight() / 20.0 + ofNoise(p) * ofGetWindowHeight() / 10.0;
    offsetY = -ofGetWindowHeight() / 20.0 + ofNoise(p) * ofGetWindowHeight() / 10.0;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 座標変換（原点を画面中央に移動） (練習11_7a)
    // 　オフセットで円の中心を移動  (練習11_7e)
    ofTranslate(ofGetWidth() / 2.0 + offsetX, ofGetHeight() / 2.0 + offsetY);

    //    // 外側の円を描画（デバッグ用）
    //    ofNoFill();
    //    ofDrawCircle(0, 0, r);

    // 練習11-7a
    // 円周上の点
    float x1 = r * cos(ofDegToRad(deg));
    float y1 = r * sin(ofDegToRad(deg));
    // 反対側に位置する点
    float x2 = r * cos(ofDegToRad(deg + 180));
    float y2 = r * sin(ofDegToRad(deg + 180));

    ofDrawLine(x1, y1, x2, y2);
}

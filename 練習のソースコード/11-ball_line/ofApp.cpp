/**
  * 点を複数表示して、各点を線分で結ぶ
  * 各点は初期位置からパーリンノイズでオフセットを作り移動する
 */

#include "ofApp.h"

const int BALLNUMM = 10;    // ボールの数

float ballx[BALLNUMM];      // 各ボールのX座標
float bally[BALLNUMM];      // 各ボールのY座標
float dx[BALLNUMM];         // 各ボール毎のX位置のオフセット
float dy[BALLNUMM];         // 各ボール毎のY位置のオフセット

float t;                    // タイムカウンタ

//--------------------------------------------------------------
void ofApp::setup(){
    // タイムカウンタを進める
    t = 0;

    // ボールの初期位置をランダムに設定する
    for (int i = 0 ; i < BALLNUMM ; i++) {
        ballx[i] = ofRandom(100, ofGetWidth() - 100);
        bally[i] = ofRandom( 50, ofGetHeight() - 50);
    }
    
    // 残像効果用に、背景自動クリアをOFFにする
//    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0 ; i < BALLNUMM ; i++) {
        // タイムカウンタを進める
        t += 3;
        
        // 三次元パーリンノイズを生成
        float p1    =        t /  9000.11;      // タイムカウント
        float p2    = ballx[i] /  1500.11;      // X座標
        float p3    = bally[i] /  2000.11;      // Y座標
        float noise = ofNoise(p1, p2, p3);      // 三次元パーリンノイズ生成
        
        // ボール位置のオフセット
        //      (パーリンノイズ*360)で角度を作り、ラジアンに変換してsin、conに渡す
        //      sin、cosの結果を、(パーリンノイズ*100)倍して中心からの距離とする
        //      つまり、中心から半径100までの円周のどこかのXY座標
        dx[i] = cos(ofDegToRad(noise * 360)) * (noise * 100);
        dy[i] = sin(ofDegToRad(noise * 360)) * (noise * 100);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 残像効果
    //      背景自動クリアをOFFで残った前回の表示を透明度30の背景色で塗りつぶす
    //      これが重なることで背景が段々と消えていく
    ofSetColor(0, 0, 0, 20);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    // 円を結ぶ線
    ofSetColor(255, 255, 255, 60);
    for (int i = 0 ; i < BALLNUMM ; i++) {
        for (int j = 0 ; j < BALLNUMM ; j++) {
            float sx = ballx[i] + dx[i];
            float sy = bally[i] + dy[i];
            float ex = ballx[j] + dx[j];
            float ey = bally[j] + dy[j];
            ofDrawLine(sx, sy, ex, ey);
        }
    }
    
    // 円
    ofSetColor(200, 255, 155, 255);
    for (int i = 0 ; i < BALLNUMM ; i++) {
        float x = ballx[i] + dx[i];
        float y = bally[i] + dy[i];
        // 固定色の円
        ofDrawCircle(x, y, 20);
        // だんだん薄くなる円
//        for (int a = 0 ; a < 255 ; a += 10) {
//            ofSetColor(200, 255, 155, a);   // 透明度をだんだん下げる
//            float r = (255 - a) / 10;       // (255-a)で半径をだんだん小さくする
//            ofDrawCircle(x, y, r);
//        }
    }
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // 何かキーを押したらsetup()で最初から
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
    // マウスをドラッグしたら各円をマウス位置に近づける
    for (int i = 0 ; i < BALLNUMM ; i++) {
        ballx[i] += (x - ballx[i]) / 100;
        bally[i] += (y - bally[i]) / 100;
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    // ウインドウのサイズを変えたら最初から
    setup();
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

#include "ofApp.h"

int aX, aY, aDx, aDy;   // y方向の移動距離を追加
int bX, bY, bDx, bDy;   // y方向の移動距離を追加

int width = 100;
int height = 100;

bool over = false;

//--------------------------------------------------------------
void ofApp::setup(){
    aX = 100;
    aY = 250;
    aDx = 2;
    aDy = 3;    // y方向の移動距離の初期値
    
    bX = 600;
    bY = 300;
    bDx = -3;
    bDy = -2;    // y方向の移動距離の初期値

}

//--------------------------------------------------------------
void ofApp::update(){
    // 赤の正方形Aの移動
    // X方向
    if (aX < 0 || ofGetWidth() - width < aX) {
        aDx = aDx * -1;
    }
    aX = aX + aDx;
    // Y方向
    if (aY < 0 || ofGetHeight()- height < aY) {
        aDy = aDy * -1;
    }
    aY = aY + aDy;

    // 青の正方形Bの移動
    // X方向
    if (bX < 0 || ofGetWidth() - width < bX) {
        bDx = bDx * -1;
    }
    bX = bX + bDx;
    // Y方向
    if (bY < 0 || ofGetHeight()- height < bY) {
        bDy = bDy * -1;
    }
    bY = bY + bDy;
    

    // 重なり検出
        // 考え方
        //  （正方形Aのxが正方形Bの幅幅の中にいる　または　正方形Bのx が正方形Aの横幅の中にいる）　かつ
        //  （正方形Aのyが正方形Bの高さの中にいる　または　正方形Bのyが正方形Aの高さの中にいる）
    over = false;
    if ( ((bX <= aX && aX <= bX + width)  || (aX <= bX && bX <= aX + width )) &&
         ((bY <= aY && aY <= bY + height) || (aY <= bY && bY <= aY + height))     ) {
        over = true;
    }

/*
    // 重なり検出（別解）
        // 考え方
        // 　正方形Aの各頂点のどれかが、正方形Bの中にいれば重なっている
    over = false;
    // 左上
    if ((bX <= aX          && aX          <= bX + width ) &&
        (bY <= aY          && aY          <= bY + height)) {
        over = true;
    }
    // 左下
    if ((bX <= aX          && aX          <= bX + width  ) &&
        (bY <= aY + height && aY + height <= bY + height)) {
        over = true;
    }
    // 右上
    if ((bX <= aX + width  && aX + width  <= bX + width ) &&
        (bY <= aY          && aY          <= bY + height)) {
        over = true;
    }
    // 右下
    if ((bX <= aX + width  && aX + width  <= bX + width) &&
        (bY <= aY + height && aY + height <= bY + height)) {
        over = true;
    }
*/
/*
    // 重なり検出（別解２）
        // 考え方
        // (正方形AのXが正方形BのX+幅幅より小さい) かつ (正方形BのXが正方形AのX+幅幅より小さい) かつ
        // (正方形AのYが正方形BのY+高さより小さい) かつ (正方形BのYが正方形AのY+高さより小さい)
    over = false;
    if (aX < bX + width && bX < aX + width && aY < bY + height && bY < aY + height) {
        over = true;
    }
    else {
        over = false;
    }
*/
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 赤の正方形A
    if (over == false) {
        ofSetColor(255, 0, 0);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofDrawRectangle(aX, aY, width, height);
    // 青の正方形B
    if (over == false) {
        ofSetColor(0, 0, 255);
    } else {
        ofSetColor(0, 255, 0);
    }
    ofDrawRectangle(bX, bY, width, height);

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

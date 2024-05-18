#include "ofApp.h"

float x, y, r;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(64);
    
    x = 100;
    y = 150;
    r = 50;
    
    // 練習 5-7a ================================================
    for(int i = 1 ; i <= 9 ; i++) {
        for(int j = 1 ; j <= 9 ; j++) {
            // 桁を合わせるために空白の数を調整する
            if( i * j < 10) {
                cout << " " << i * j << "  ";
            } else {
                cout <<        i * j << "  ";
            }
//            // 三項演算子を使ってif文を書き換える
//            (i*j < 10) ? cout << " " << i * j << "  " : cout << i * j << "  ";
        }
        // 改行
        cout << endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // 練習 5-7b ================================================
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            x = 100 + i * (r * 2);          // iを使ってxを増やす
            y = 150 + j * (r * 2);          // jを使ってyを増やす
            
            ofSetColor(102, 0, 153);
            ofDrawCircle(x, y, r);
            ofSetColor(255, 255, 255);
            ofDrawCircle(x - r / 2.5, y, r / 5);
            ofDrawCircle(x + r / 2.5, y, r / 5);
            ofSetColor(0, 0, 0);
            ofDrawCircle(x - r / 2.5, y, r / 7);
            ofDrawCircle(x + r / 2.5, y, r / 7);
        }
    }

}

//--------------------------------------------------------------
void ofApp::exit(){

}

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

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

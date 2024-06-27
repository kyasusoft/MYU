#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // 練習11-2a
    float p = 0;
    // パラメータ差　大
    for (int i = 0 ; i < 10 ; i++) {
        float n = ofNoise(p);
        p += 0.1;
        
        cout << n << endl;
    }
    cout << endl;
    // パラメータ差　小
    for (int i = 0 ; i < 10 ; i++) {
        float n = ofNoise(p);
        p += 0.01;
        
        cout << n << endl;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(0, ofGetHeight() / 2);
    ofScale(1, -1);
    
    // 練習11-2b
    float p = 0;                    // 練習11-2d
    
    for(int x = 0; x < ofGetWidth(); x++){
        float y;
        y = ofNoise(p) * 200.0;     // ノイズは0〜1.0なので200倍する
        p += 0.1;                   // 練習11-2c
        
        ofDrawCircle(x, y, 1);
    }

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

#include "ofApp.h"

float tm = 0;
int r = 50;
float y;

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int x = 0 ; x < 8 ; x++) {
        for (int y = 0 ; y < 6 ; y++) {
            // 赤を三次元ノイズで変更
            float p1 = x / 10.1;
            float p2 = y / 10.1;
            float p3 = tm / 1500.1;
            int red = ofNoise(p1, p2, p3) * 255;
            
            tm += 1;
            
            myBall(r + x * 2 * r, r + y * 2 * r, r, red, 0, 0);
        }
    }
}

// -------------------------------------------------------------
void ofApp::myBall(int x, int y, int r, int red, int green, int blue) {

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

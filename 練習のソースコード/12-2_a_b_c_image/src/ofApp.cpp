#include "ofApp.h"

int phase = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("cat.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    switch (phase) {
        case 0:
            image.draw(0, 0);
            drawBitString("original size");
            break;
        case 1:
            image.draw(ofGetWidth()/2 - 150, ofGetHeight()/2 - 150, 300, 300);
            drawBitString("300 x 300 size on center");
            break;
        case 2:
            for (int y = 0 ; y < ofGetHeight() ; y += 50) {
                for (int x = 0 ; x < ofGetWidth() ; x += 50)
                    image.draw(x, y, 50, 50);
            }
            drawBitString("fill image");
            break;
        case 3:
            ofSetColor(255, 0, 0);
            image.draw(0, 0);
            drawBitString("red back");
            break;
        case 4:
            ofSetColor(0, 255, 0);
            image.draw(0, 0);
            drawBitString("green back");
            break;
        default:
            ofSetColor(0, 0, 255);
            image.draw(0, 0);
            drawBitString("blue back");
            break;
    }
}

void ofApp::drawBitString(string str) {
    ofSetColor(0, 0, 0);
    ofDrawBitmapStringHighlight(str, 50, 100);
    ofSetColor(255, 255, 256);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    phase++;
    if (phase > 5) {
        phase = 0;
    }
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

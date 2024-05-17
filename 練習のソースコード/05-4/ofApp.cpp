#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int a = 0;


    // 練習5-4a   while ループ
    while(a <= 500) {
        cout << a << endl;
        a++;
    }
    ofExit();

    
/*
    // 練習5-4b   do while ループ
    do {
        cout << a << endl;
        a++;
    } while(a <= 500);
    ofExit();
*/
    
/*
    // 練習5-4c   無限ループ
    while(true) {
        if (a > 500) {
            break;
        }
        cout << a << endl;
        a++;
    }
    ofExit();
*/
 
 }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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

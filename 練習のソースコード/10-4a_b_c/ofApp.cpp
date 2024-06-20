#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    cout << "1 + 5 = " << tashizan(1, 5) << endl;
    
    cout << "9 * 9 = " << jijou(9) << endl;
    
    cout << "距離：" << kyori(0, 0, 3, 4) << endl;
    
    cout << "距離：" << kyori(0, 0, 1, 1) << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

// 練習10-4a -------------------------------------------------
// aとbの話を返す関数
//　　引数　：int a
//　　　　　　int b
//　　戻り値：int
int ofApp::tashizan(int a, int b) {
    int ret = a + b;
    return ret;
}

// 練習10-4b -------------------------------------------------
// aの二乗を返す関数
//　　引数　：int a
//　　戻り値：int
int ofApp::jijou(int a) {
    int sq = a * a;
    return sq;
}

// 練習10-4c -------------------------------------------------
// ２点(sx, sy),(ex, ey)の距離を返す関数
//　　引数　：int sx　点aのX座標
//　　　　　　int sy　点aのY座標
//　　　　　　int ex　点bのX座標
//　　　　　　int ey　点bのY座標
//　　戻り値：float
float ofApp::kyori(int sx, int sy, int ex, int ey) {
    double dt = sqrt(jijou(ex-sx) + jijou(ey-sy));
    return dt;
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

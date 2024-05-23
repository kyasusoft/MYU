#include "ofApp.h"

// 練習6-5b
bool isPaused = false;

//--------------------------------------------------------------
void ofApp::setup(){
    // 練習6-5a
    player.load("beat.wav");    // サウンドファイルを読み込む
    player.setLoop(true);       // ループ再生を指定
    player.play();              // 再生開始
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 操作説明を表示
    ofDrawBitmapString("p: pause",      100, 100);
    ofDrawBitmapString("s: start/stop", 100, 120);
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // おまけ

    // 一時停止
    if (key == 'p') {
        isPaused = !isPaused;               // フラグを反転
        player.setPaused(isPaused);         // 一時停止の制御
    }
    
    // スタート・ストップ
    if (key == 's') {
        if (player.isPlaying() == true) {   // isPlaying()  true:再生中、false:再生していない
            player.stop();
        } else {
            player.play();
        }
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
    
    isPaused = !isPaused;           // フラグを反転
    player.setPaused(isPaused);     // 一時停止の制御
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

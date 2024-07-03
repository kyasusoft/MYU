#include "ofApp.h"

bool isPaused = false;
float speed;
float volume;
int mousePosx, mousePosy;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(64);

    speed = 1.0;
    volume = 0.5;
    
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
    ofSetColor(255, 255, 255);
    ofDrawBitmapStringHighlight("USAGE", 100, 70);
    ofDrawBitmapString("p: pause",      100, 100);
    ofDrawBitmapString("s: start/stop", 100, 120);
    ofDrawBitmapString("r: reset volume & speed", 100, 160);
    ofDrawBitmapString("mouse drag left-right  SPEED : " + to_string(speed), 100, 180);
    ofDrawBitmapString("mouse drag up-down    VOLUME : " + to_string(volume),  100, 200);
    
    // スピードで色を変える
    ofSetColor(0, speed * 255, 255 - speed * 255);
    // 音量で半径を変える
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 10 + volume * 200);

}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
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
    // 音量とスピードをリセット
    if (key == 'r') {
        volume = 0.5;
        player.setVolume(volume);
        speed = 1.0;
        player.setSpeed(speed);
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
    // 音量
    volume += (mousePosy - y) * 0.00005;
    if (volume < 0) {
        volume = 0;
    }
    if (volume > 1) {
        volume = 1;
    }
    player.setVolume(volume);
    
    // 再生スピード
    speed += (x - mousePosx) * 0.00005;
    if (speed < 0.5) {
        speed = 0.5;
    }
    if (speed > 3) {
        speed = 3;
    }
    player.setSpeed(speed);
    
    printf("speed=%f  volume=%f\n", speed, volume);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mousePosx = x;
    mousePosy = y;
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

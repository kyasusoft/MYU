#include "ofApp.h"

// 配列宣言の初期化で点数を設定
int alice[5] = {85, 80, 90 ,75, 95};
int bob[5]   = { 5, 30, 25,  0, 40};
int carol[5] = {95, 10, 85, 20, 90};

//--------------------------------------------------------------
void ofApp::setup(){

    // 先頭の要素から順に点数を設定
    alice[0] = 85;  // 現代文
    alice[1] = 80;  // 数学
    alice[2] = 90;  // 英語
    alice[3] = 75;  // 物理
    alice[4] = 95;  // 地理
    
    bob[0]   = 5;
    bob[1]   = 30;
    bob[2]   = 25;
    bob[3]   = 0;
    bob[4]   = 40;
    
    carol[0] = 95;
    carol[1] = 10;
    carol[2] = 85;
    carol[3] = 20;
    carol[4] = 90;
    
    // 練習9-2b =====================================================
    // 個人の合計点用の配列
    float kojinSum[3] = {0,0,0};
    
    for (int j = 0 ; j < 5 ; j++) {
        // 個人の配列に各教科を加算
        kojinSum[0] += alice[j];
        kojinSum[1] += bob[j];
        kojinSum[2] += carol[j];
    }
    cout << "アリス　　合計点: " << kojinSum[0] << " 平均点: " << kojinSum[0] / 5.0 << endl;
    cout << "ボブ　　　合計点: " << kojinSum[1] << " 平均点: " << kojinSum[1] / 5.0 << endl;
    cout << "キャロル　合計点: " << kojinSum[2] << " 平均点: " << kojinSum[2] / 5.0 << endl;

    cout << endl;
    
    // 練習9-2c =====================================================
    // 各教科の合計点と平均点用の配列
    float sumKamoku[5], aveKamoku[5];

    for (int i = 0 ; i < 5 ; i++) {
        // 科目毎に個人の点数を加算
        sumKamoku[i] = alice[i] + bob[i] + carol[i];
        // 科目毎の平均点を計算
        aveKamoku[i] = sumKamoku[i] / 3.0;
    }
    cout << "現代文 平均点: " << aveKamoku[0] << endl;
    cout << "数学　 平均点: " << aveKamoku[1] << endl;
    cout << "英語　 平均点: " << aveKamoku[2] << endl;
    cout << "物理　 平均点: " << aveKamoku[3] << endl;
    cout << "地理　 平均点: " << aveKamoku[4] << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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

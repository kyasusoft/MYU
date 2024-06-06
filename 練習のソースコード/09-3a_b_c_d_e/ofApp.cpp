#include "ofApp.h"

// 配列宣言の初期化で点数を設定
int score[3][5] = {
    {85, 80, 90, 75, 95},
    { 5, 30, 25,  0, 40},
    {95, 10, 85, 20, 90}
};

//--------------------------------------------------------------
void ofApp::setup(){
    
    // 練習9-3a =====================================
    // アリス
    score[0][0] = 85;   // 現代文
    score[0][1] = 80;   // 数学
    score[0][2] = 90;   // 英語
    score[0][3] = 75;   // 物理
    score[0][4] = 95;   // 地理
    // ボブ
    score[1][0] =  5;   // 現代文
    score[1][1] = 30;   // 数学
    score[1][2] = 25;   // 英語
    score[1][3] =  0;   // 物理
    score[1][4] = 40;   // 地理
    // キャロル
    score[2][0] = 95;   // 現代文
    score[2][1] = 10;   // 数学
    score[2][2] = 85;   // 英語
    score[2][3] = 20;   // 物理
    score[2][4] = 90;   // 地理
    
    // 練習9-3b =====================================
    // アリスの各教科の点数
    cout << "9-3b アリスの各教科の点数" << endl;
    for (int i = 0 ; i < 5 ; i++) {         // 教科のループ
        cout << score[0][i] << " ";             // 教科の点数を表示
    }
    cout << endl << endl;
    
    // 練習9-3c =====================================
    // 全員の点数
    cout << "9-3c 全員の点数" << endl;
    for (int i = 0 ; i < 3 ; i++) {         // 学生のループ
        for (int j = 0 ; j < 5 ; j++) {         // 教科のループ
            cout << score[i][j] << " ";             //　学生の点数を表示
        }
        cout << endl;                           // 学生の切り替わりで改行
    }
    cout << endl;
    
    // 練習9-3d =====================================
    // 各学生の平均点
    cout << "9-3d 各学生の平均点" << endl;
    float sum = 0;
    for (int i = 0 ; i < 3 ; i++) {         // 学生のループ
        for (int j = 0 ; j < 5 ; j++) {         // 教科のループ
            sum += score[i][j];                     // 学生の点数を加算
        }
        cout << sum / 5.0 << endl;              // 学生の平均点を表示
        sum = 0;                                // 表示し終わったので初期化
    }
    cout << endl;
    
    // 練習9-3e =====================================
    // 各科目の平均点
    cout << "9-3e 各科目の平均点" << endl;
    sum = 0;
    for (int i = 0 ; i < 5 ; i++) {         // 教科のループ
        for (int j = 0 ; j < 3 ; j++) {         // 学生のループ
            sum += score[j][i];                     // 教科の点数を加算
        }
        cout << sum / 3.0 << endl;              // 教科の平均点を表示
        sum = 0;                                // 表示し終わったので初期化
    }
    cout << endl;
    

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

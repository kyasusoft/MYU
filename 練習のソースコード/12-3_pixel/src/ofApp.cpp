#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // ウインドウのタイトル
    ofSetWindowTitle("my cat color change");

    // 画像データの読み込み
    myImage.load("blackcat.jpg");

    // 画像の幅と高さを取得してウインドウサイズを変更
    int w = myImage.getWidth();
    int h = myImage.getHeight();
    ofSetWindowShape(w * 2, h);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 色の設定
    ofSetColor(255, 255, 255);
    // 読み込んだ画像データを画面に描画
    myImage.draw(0, 0);
    // 画像データのビットマップ情報を配列に格納
    ofPixels pixels = myImage.getPixels();
    // 画像の幅と高さを取得
    int w = myImage.getWidth();
    int h = myImage.getHeight();
    // 画像をスキャン
    for (int y= 0 ; y < h ; y += 1) {
        for (int x = 0 ; x < w ; x += 1) {
            // ピクセルのRGBの値を取得
            int valueR = pixels[y * 3 * w + x * 3];
            int valueG = pixels[y * 3 * w + x * 3 + 1];
            int valueB = pixels[y * 3 * w + x * 3 + 2];
            // 元の画像の隣に描画する
            if (valueR < 20 && valueG < 20 && valueB < 20) {
                // 各色が黒っぽかったらピンクで描画する
                ofSetColor(255, 134, 193);
                ofDrawCircle(w + x, y, 1);
            } else {
                // 各色の色のままで描画する
                ofSetColor(valueR, valueG, valueB);
                ofDrawCircle(w + x, y, 1);
            }
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

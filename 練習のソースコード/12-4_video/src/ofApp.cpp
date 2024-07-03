#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // ウインドウのタイトル
    ofSetWindowTitle("my cat color change movie");
    
    // 動画データの読み込み
    myMovie.load("blackcat.MOV");
    
    // 画像の幅と高さを取得してウインドウサイズを変更
    int w = myMovie.getWidth();
    int h = myMovie.getHeight();
    ofSetWindowShape(w * 2, h);
    
    // 動画を再生
    myMovie.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    // 動画再生を待機状態にする（draw()でmyMovie.draw()を呼ぶと再生される）
    myMovie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 色の設定
    ofSetColor(255, 255, 255);
    // 読み込んだ動画データを画面に描画
    myMovie.draw(0, 0);
    // 動画データのビットマップ情報を配列に格納
    ofPixels pixels = myMovie.getPixels();
    // 動画の幅と高さを取得
    int w = myMovie.getWidth();
    int h = myMovie.getHeight();
    // 画像をスキャン
    for (int y= 0 ; y < h ; y += 1) {
        for (int x = 0 ; x < w ; x += 1) {
            // ピクセルのRGBの値を取得
            int valueR = pixels[y * 3 * w + x * 3];
            int valueG = pixels[y * 3 * w + x * 3 + 1];
            int valueB = pixels[y * 3 * w + x * 3 + 2];
            // 元の画像の隣に描画する
            if (valueR < 50 && valueG < 50 && valueB < 50) {
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

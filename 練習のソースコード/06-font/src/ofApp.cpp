#include "ofApp.h"

int x = 10;
int y = 400;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    // fontの準備 40ポイント
    ofTrueTypeFontSettings settings40("ヒラギノ丸ゴ ProN W4.ttc", 40);
    settings40.addRanges(ofAlphabet::Japanese);
    settings40.addRanges(ofAlphabet::Latin);
    font40.load(settings40);
    
    // fontの準備 80ポイント
    ofTrueTypeFontSettings settings80("ヒラギノ丸ゴ ProN W4.ttc", 80);
    settings80.addRanges(ofAlphabet::Japanese);
    settings80.addRanges(ofAlphabet::Latin);
    font80.load(settings80);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 40ポイントの文字を描画
    ofSetColor(100, 200, 0);
    font40.drawString("文字列の描画 40pt", 100, 200);
    // 文字列の幅を表示
    string w40 = "width=" + to_string(font40.stringWidth("文字列の描画 40 pt"));
    ofDrawBitmapString(w40, 100, 250);

    // 80ポイントの文字を描画
    ofSetColor(255, 0, 0);
    string str = "変数で文字を描画 80pt";
    font80.drawString(str, x, y);
    // 文字列の幅を表示
    string w80 = "width=" + to_string(font80.stringWidth(str));
    ofDrawBitmapString(w80, x, y + 50);
    ofDrawBitmapStringHighlight(w80, x, y+ 80);     // 反転表示
}

//--------------------------------------------------------------
//void ofApp::exit(){
//
//}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    cout << key << endl;

    if (key == 'a') x -= 10;     // 左に移動
    if (key == 's') x += 10;     // 右に移動
    
    if (key == 'w') y -= 10;     // 上に移動
    if (key == 'z') y += 10;     // 下に移動

    
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

#include "ofApp.h"
#include <cmath>

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
  mainManager.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(0);
//  ofMesh testMesh;
//  float s = 2.f;
//  float d = sin(TWO_PI / 6) * s;
//  for (int i = 0; i < 80000; ++i) {
//    ofVec3f point(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()), 0);
//    testMesh.addVertex(point);
//    ofColor color;
//    color.setSaturation(ofRandom(150, 210));
//    color.setBrightness(ofRandom(150, 210));
//    color.setHue(ofRandom(255));
//    testMesh.addColor(color);
  
//    testMesh.addVertex(ofVec3f(point.x, point.y - s, 0));
//    testMesh.addColor(ofColor(255, 0, 0, 255));
//    testMesh.addVertex(ofVec3f(point.x + d, point.y + d, 0));
//    testMesh.addColor(ofColor(255, 0, 0, 255));
//    testMesh.addVertex(ofVec3f(point.x - d, point.y + d, 0));
//    testMesh.addColor(ofColor(255, 0, 0, 255));
//  }
//  testMesh.setMode(OF_PRIMITIVE_TRIANGLES);
//  testMesh.setMode(OF_PRIMITIVE_POINTS);
//  testMesh.draw();
  mainManager.draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

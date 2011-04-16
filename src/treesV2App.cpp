//
//  treesV2App.cpp
//  treesV2
//
//  Created by Nikolas Psaroudakis on 3/21/11.
//  Copyright Addictive Labs 2011. All rights reserved.
//

#include "treesV2App.h"

//--------------------------------------------------------------
void treesV2App::setup() {
	//glEnable(GL_DEPTH_TEST);
	ofSetFrameRate(30);
	ofSetVerticalSync(true);
	ofBackground(255, 255, 255);
	myBranch = branch(ofxVec3f(ofGetWidth()/2,ofGetHeight(),0), ofxVec3f(0, -30, 0), ofxVec3f(0,0,0), 30, 0.99);
	light1.spotLight(255, 255, 255, ofGetWidth()/2, ofGetHeight()/2, -20, ofGetWidth()/2, ofGetHeight()/2, 100, 90, 1);
    shader.setup("glass","glass");
}

//--------------------------------------------------------------
void treesV2App::update() {
	myBranch.update();
    
}

//--------------------------------------------------------------
void treesV2App::draw() {
    shader.begin();
    
	cam.place();
    shader.setUniform("edgefalloff", 1.0f);
	myBranch.draw();
    shader.end();
}

//--------------------------------------------------------------
void treesV2App::keyPressed(int key) {

}

//--------------------------------------------------------------
void treesV2App::keyReleased(int key) {

}

//--------------------------------------------------------------
void treesV2App::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void treesV2App::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void treesV2App::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void treesV2App::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void treesV2App::windowResized(int w, int h) {

}


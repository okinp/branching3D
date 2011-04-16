//
//  treesV2App.h
//  treesV2
//
//  Created by Nikolas Psaroudakis on 3/21/11.
//  Copyright Addictive Labs 2011. All rights reserved.
//

#pragma once

#include "ofMain.h"
#include "branch.h"
#include "ofxVec3f.h"
#include "Camera.h"
#include "ofx3DUtils.h"
#include "ofxShader.h"
//========================================================================
class treesV2App : public ofBaseApp {
	
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	branch myBranch;
	Camera cam;
	ofxLight light1;
    ofxShader shader;
    
};

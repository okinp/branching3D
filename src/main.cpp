//
//  main.cpp
//  treesV2
//
//  Created by Nikolas Psaroudakis on 3/21/11.
//  Copyright Addictive Labs 2011. All rights reserved.
//

#include "ofMain.h"
#include "treesV2App.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main() {

    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);

	ofRunApp(new treesV2App());

}

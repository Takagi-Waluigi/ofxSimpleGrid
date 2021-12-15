#include "ofxSimpleGrid.h"

void ofxSimpleGrid::draw(int gridNum, int gridSize)
{
	ofPushMatrix();
	ofPushStyle();

	ofSetColor(255);
	ofNoFill();

	ofRotateXDeg(90);
	
	for (int x = 0; x < gridNum; x++)
	{
		for (int y = 0; y < gridNum; y++)
		{
			ofVec2f gp;
			gp.x = (x - gridNum / 2) * gridSize;
			gp.y = (y - gridNum / 2) * gridSize;

			ofDrawRectangle(gp, gridSize, gridSize);
		}
	}
	ofPopStyle();
	ofPopMatrix();
}
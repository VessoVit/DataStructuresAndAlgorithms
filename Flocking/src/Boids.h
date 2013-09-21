//
//  Boid.h
//
//  Defines Boid behaviour:
//  - application of the Flocking Rules,
//  - steering,
//  - limit speed,
//  - draw and update
//
//


#ifndef ofBoxExample_Boid_h
#define ofBoxExample_Boid_h


#include "ofMain.h"


class Boid {
public:
	Boid();
    
    //used for coloring the boids
    float boid_bright;
    float boid_sat;
	
	void update(vector<Boid*> boids);
	void draw();
	void seek(ofPoint target);
	void arrive(ofPoint target);
	ofPoint steer(ofPoint target, bool slowdown);
	
	void flock(vector<Boid*> boids);
	ofPoint separate(vector<Boid*> boids);
	ofPoint align(vector<Boid*> boids);
	ofPoint cohesion(vector<Boid*> boids);
	
	ofPoint loc;    //location
	ofPoint vel;    //velocity
	ofPoint acc;    //acceleration
	float r;        //radius
    
    float maxforce; //limit force
	float maxspeed; //limit speed
    
    void followMouse(ofPoint target);
    
};

#endif
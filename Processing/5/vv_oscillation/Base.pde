// An anchor point that can connect to a mass object

class Base {
  //Location
   PVector anchor;
  
  float len;
  float k = 0.2;
 
 // Constructor
  Base(float x, float y, int l) {
    anchor = new PVector(x,y);
    len = l;
  } 
  
  // Caclculation force
//  void connector(Base b) {
//    //Vector pointing from base to mass location
//    PVector force = PVector.sub(b.location, anchor);
//    // distance
//    float d = force.mag();
//    // Stretch is different between current distance and rest length
//    float stretch = d - len;
//    //Calculate force according to Hooke's Law
//    force.normalize();
//    force.mult(-1*k*stretch);
//    b.applyForce(force);
//  }
  
  //Constrain
//  [TODO]

  void display() {
     stroke(0);
     fill(175); 
     strokeWeight(2);
     rectMode(CENTER);
     rect(anchor.x, anchor.y, 10, 10);
  }
}

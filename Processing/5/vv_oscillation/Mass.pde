class Mass {

    PVector location;
    PVector velocity;
    PVector acceleration;
    float mass = 7;
    
    //Random dampting to simulate friction / drag
    float damping = 0.98;
    // for mause interaction
    PVector dragOffset;
//    PVector dragging = false;
  
    //Constructor
    Mass(float x, float y) {
       location = new PVector(x,y);
       velocity = new PVector();
       acceleration = new PVector();
       dragOffset = new PVector(); 
    }
    
    //Euler Integration
   void update() {
      velocity.add(acceleration);
      velocity.mult(damping);
      location.add(velocity);
      acceleration.mult(0); 
   }
   // Newton's law F = M * A
   void applyForce(PVector force) {
     PVector f = force.get();
     f.div(mass);
     acceleration.add(f);
   }
   
   void display() {
     stroke(0);
     strokeWeight(2); 
     fill(175);
   
     rect(location.x, location.y, mass*2,mass*2);  
 }
}

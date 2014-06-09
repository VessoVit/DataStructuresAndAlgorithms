// Hooke's law: Mass, spring and dumper

// 
Base base;
//The added mass object
Mass mass;

void setup() {
 size(800,400);
 smooth();
 //Initialise a new object
 base = new Base(width/2,height-10,100); 
 mass = new Mass(width/2,100);
 
  
}

void draw() {
  background(255);
  PVector gravity = new PVector(2,0);
  //Apply gravity to the mass [TODO]
 
  base.display();
  mass.display();
  fill(0); 
}

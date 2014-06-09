// Daniel Shiffman
// The Nature of Code
// http://www.shiffman.net/
import java.util.*;
// Declare a Random number generator object
Random generator;

void setup() {
  size(600, + 600);
  background(255);
  generator = new Random();   // Initialize generator
  smooth();
}

void draw() {
  // Get a gaussian random number w/ mean of 0 and standard deviation of 1.0
  float xloc = (float) generator.nextGaussian();
  float yloc = (float) generator.nextGaussian();
  
  float sd = 75;                // Define a standard deviation
  float mean = width/2;         // Define a mean value (middle of the screen along the x-axis)
  float meanh = height/2;
  xloc = ( xloc * sd ) + mean;  // Scale the gaussian random number by standard deviation and mean
  yloc = ( yloc * sd) + meanh;
//  print(yloc);

  float indexloc = (xloc+yloc)/mean;
    print(indexloc + "\n");

//  for (int i = 0; i < 20; i++){
    noStroke();
    fill(0, 50);
    noStroke();
    ellipse(xloc, yloc, 16,16);
//    ellipse(xloc, yloc, (mean%indexloc)*10 ,(mean%indexloc)*10);   // Draw an ellipse at our "normal" random location
//    if(i == 50){
//      background(255);
//    } 
//  }
}

void drawPartiles() {
  
}


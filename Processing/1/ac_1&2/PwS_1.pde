//Arrays, Loops and Binary Representation
// Exercise 1 & 2
PFont font;

//1.1.Write the content of array on the screen
//1.2 Write ----//---- backwards
//1.3 Count the letter 'e' 
int count_e;
char[] charArr = { 'a', 'b', 'c', 'd', 'e', 'f'};
//char[] charArr = { 'e', 'b', 'e', 'e', 'e', 'f'}; //1.3

String str = new String(charArr);

void setup() {
  background(255);
  size(200,280);
  // print(str); // Debug
  //Typography
  font = loadFont("SourceCodePro-Regular-24.vlw");
  textFont(font, 24);
  //Draw divider
  line( width , height/2, -width, height/2);
  //1.2
  reversString(charArr);
  //1.3
  counter_char(charArr);
  //1.4
  //[TODO]
}

void draw() {
  //1.1
  displayString(str);
}

// Exercise 1 as Functions
void displayString(String alpha){
  //Display 1.1
  text(str, width/1.25, height/1.25); 
}
void reversString(char beta[] ) {
  // 1.2 Solution
  // Call the array from tail to head 
  for(int i = beta.length - 1; i >= 0; i--){
     //variable to be used for displaying the text
     int xPos = beta.length + i;
     textFont(font, 24);
     //display each array elements and it's relative possition
     text(beta[i], width-(15*xPos), height/4);
     fill(0);
     // print(charArr[i]);
  }
}
void counter_char(char gamma[] ){
    for (int i = 0; i < gamma.length; i++) {
      //1.3 Check for the character 'e'
      if( gamma[i] == 'e')
       {
         count_e += 1;
       }  
    }
    print( count_e );
}

int[] numStack = new int[500];
int counter;
//3ko
void setup() {
  count(numStack);
}


void count(int[] alpha) {
  for (int i = 0; i <alpha.length; i++) {
    int random = int(random(0,100));
    alpha[i] = random;
    println(alpha[i]);
    if(alpha[i] > 50) {
      counter = counter + 1;
    }
  }
  print("Counter is: " + counter);
}

//5 
//Sum of all multiples of 5 below 1000

int n  = 5000;
int sum;
int sumTwo;

void setup() {
 for(int i = 0; i <= n; i++) 
 {
    //5
    if(i % 5 == 1)
    {
      sum = sum + i ;
    }
    //6
     if( (i % 5 == 1) && ( i % 7 == 1 ) )
     {
       sumTwo = sumTwo + i; 
     }
    
 } 
 print(" Sum of multiples of 5: " + sum + "\n");
 print(" Sum of multiples of 5 and 7: " + sumTwo);
}



// Define the pins for each segment (D0 to D6)
const int segmentA = 3; // D0
const int segmentB = 2; // D1
const int segmentC = 8; // D2
const int segmentD = 7; // D3
const int segmentE = 6; // D4
const int segmentF = 4; // D5
const int segmentG = 10; // D6

void setup() {
  // Initialize the digital pins as OUTPUTs
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
}


// 0 = A,B,C,D,E,F
// 1 = B,C
// 2 = A,B,G,E,D
// 3 = A,B,C,D,G
// 4 = F,G,B,C
// 5 = A,F,G,C,D
// 6 = A,F,G,E,D,C
// 7 = A,B,C
// 8 = A,B,C,D,E,F,G
// 9 = A,B,C,D,F,G

void loop() {
  // Turn on each segment one by one
 
  //0
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  delay(500);
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentF, HIGH);

  //1
  delay(500);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  delay(500);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);

  //2
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentD, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentD, HIGH);

  //3
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentG, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentG, HIGH);

  //4
  delay(500);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  delay(500); 
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);

  //5
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);

  // 6 = A,F,G,E,D,C
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);

  // 7 = A,B,C
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentB, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentB, HIGH);
  
  // 8 = A,B,C,D,E,F,G
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);

  // 9 = A,B,C,D,F,G
  delay(500);
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  delay(500); 
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);

  delay(500); // Delay for 1/2 second before repeating 
}




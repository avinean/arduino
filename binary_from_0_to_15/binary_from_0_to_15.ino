

int binEight = 12;
int binFour = 11;
int binTwo = 10;
int binOne = 9;

int intCounter = 0;
int counter[4] = {0, 0, 0, 0};

void showNumber() {

  counter[3]++;
  for(int i = 3; i >= 0; i--) {
    if (counter[i] > 1) {
      counter[i] = 0;
      counter[i - 1] = counter[i - 1] + 1;
    }
  }
  
  digitalWrite(binEight, counter[0] ? HIGH : LOW);
  digitalWrite(binFour, counter[1] ? HIGH : LOW);
  digitalWrite(binTwo, counter[2] ? HIGH : LOW);
  digitalWrite(binOne, counter[3] ? HIGH : LOW);

  delay(500);
  
}

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(binEight, OUTPUT);
  pinMode(binFour, OUTPUT);
  pinMode(binTwo, OUTPUT);
  pinMode(binOne, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  showNumber();
}

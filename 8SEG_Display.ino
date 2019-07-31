int number[10][8]={{0,0,0,1,0,0,0,0}, //0
                   {0,1,1,1,1,1,0,0}, //1
                   {0,0,1,0,0,0,1,1}, //2
                   {0,0,1,0,1,0,0,1}, //3
                   {0,1,0,0,1,1,0,0}, //4
                   {1,0,0,0,1,0,0,0}, //5
                   {1,0,0,0,0,0,0,0}, //6
                   {0,0,1,1,1,1,0,0}, //7
                   {0,0,0,0,0,0,0,0}, //8
                   {0,0,0,0,1,0,0,0}  //9
                  };
int randNum = 0;
int userNum = 0;
int score =0 ;
int guesses =0;

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);
}
void showNum(int num){
  for(int pin =2;pin<9;pin++){
  digitalWrite(pin,number[num][pin-2]);
  }
}
void loop() {
  while(guesses<11){
  randNum = random(0,10);
  Serial.println("Enter a number 0-9");
  while(Serial.available()==0) {  //Arduino Waits for User Input
  }  
  userNum=Serial.parseInt();
  guesses=guesses+1;
  showNum(userNum);
  delay(1000); //Display number for 2 Seconds
  if(userNum == randNum) {
    Serial.println("Amazing Guess!! You Won");
    score=score+1;
  }
  else{
    Serial.print("Nope the number was ");
    Serial.println(randNum);
    showNum(randNum);
      }
  }
  // put your main code here, to run repeatedly:
Serial.print("You guessed ");
Serial.print(score);
Serial.println(" out of 10");
while(Serial.available() == 0){}
}

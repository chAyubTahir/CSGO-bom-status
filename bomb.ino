//this code works with th API from counter strike game. When the bomb is
planted in the game RGB LED lights change there colour from GREEN to RED

int data;
int x;
void setup() {
  Serial.begin(115200);
  pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
  Serial.println ("Hi");
}

void loop() {
x=1;
analogWrite (10,100);
while (x==1) {
  data= Serial.read();
  if (data== '6'){
    analogWrite (10,180);
    analogWrite (9,0);
    analogWrite (11,0);
    }
if (data== '4'){
  
 analogWrite (11,255);
 analogWrite (10,0);
 analogWrite (9,0);
  }
if(data=='3'){
   analogWrite (9,255);
analogWrite (11,0);
analogWrite (10,0);
}
if (data== '5'){
analogWrite (9,0);
analogWrite (10,0);
analogWrite (11,0);
analogWrite (9,255);
analogWrite (10,255);
analogWrite (11,255);

}
}
}


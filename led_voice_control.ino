String voice;
int led =13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {                    // put your main code here, to run repeatedly:
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = Serial.read(); //Conduct a serial read
  voice += c; //Shorthand for voice = voice + c
  } 
  if (voice.length() > 0) {
    Serial.println(voice);
//-----------------------------------------------------------------------//   
  //----------Control Multiple Pins/ LEDs----------// 
       if(voice == "on") {digitalWrite(led,HIGH);}  
  else if(voice == "down"){digitalWrite(led,LOW);}


voice=""; //Reset the variable after initiating
}
}

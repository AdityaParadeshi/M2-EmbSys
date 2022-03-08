# 1 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino"

// Library Files
# 4 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino" 2
# 5 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino" 2
# 6 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino" 2
# 7 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino" 2


# 8 "D:\\LTTS TRAINING\\module2 project\\to upload\\smart_home_automation\\smart_home_automation.ino"
// LCD Display

LiquidCrystal lcd(6, 5, 4, 3, 2, 1); // Lcd pins interfaced (rs, enable, d4, d5, d6, d7)

//Temperature

float temp;
int tempPin = A2;


//Motion Sensor
int ledpin1 = 8;// Digital pin n D6
int pir1;
int sensor1 = 10 ;//motion senson1 on D7

//smoke Sensor
const int smoke = A0;
const int exFan = 7; //exFan
const int threshold = 400;//smoke sensor

//earthquake sensor
int vibration = A1; //earthquake sensor D0
int LedPin3 = 9; //vibration in led D1


void setup() {

  //Motion
  pinMode(sensor1, 0x0); // declare sensor as input
  pinMode(ledpin1, 0x1); // declare LED as output

  //smoke sensor
  pinMode(smoke, 0x0);
  pinMode(exFan, 0x1);

  //temperature
  pinMode (tempPin, 0x0);




  //Earthquake
  pinMode (vibration, 0x0);
  pinMode(LedPin3, 0x1);

  //Display
  lcd.begin(16, 2);
  lcd.print("SmartHomeAutomation");// display the title
  delay(1000);
  lcd.clear();

}

void loop() {
  smokeSensor();
  temperature_sensor();
  vibration_sensor();
  motionDetected1();

}

//Vibration
void vibration_sensor() {
  int vibrationvalue;
   vibrationvalue = analogRead(vibration);
     lcd.setCursor(0,0);
 lcd.print(vibrationvalue);
  delay(1000);
    lcd.clear();

  if (vibrationvalue == 0) {
    digitalWrite(LedPin3, 0x1);
    lcd.setCursor(0,1);
    lcd.print("NoVibration");
    delay(1000);
      lcd.clear();
  }

  else {
    digitalWrite(LedPin3, 0x0);
    lcd.setCursor(0,2);
    lcd.print("Vibration");
    delay(1000);
    lcd.clear();
  }

}


//temperature
void temperature_sensor() {
  temp = analogRead(tempPin);
   // read analog value and store in temp
   temp = temp * 0.48828125;
   // convert the analog value into required temperature
   lcd.print("TEMPERATURE = ");
   lcd.print(temp); // display temperature value
   lcd.print("*C");
   lcd.println();
   delay(1000); // updating the sensors
   lcd.clear();
  }




//Motion Sensor Detection
void motionDetected1() {
  pir1 = digitalRead (sensor1);


  if (pir1 == 0x1) {
    digitalWrite(ledpin1, 0x1);
    lcd.begin(2, 0);
    lcd.print("Motion Detected");

    delay(1000);
      lcd.clear();


  }
  else {
    digitalWrite(ledpin1, 0x0);
    lcd.begin(2, 1);
   lcd.print("Motion Not Detected");
    delay(1000);
      lcd.clear();
  }
}

//smoke sensor
void smokeSensor() {
  int analogValue = analogRead(smoke);

  if (analogValue > threshold) {
    digitalWrite(exFan, 0x1);
  }
  else if (analogValue == threshold) {
    digitalWrite(exFan, 0x0);
    delay(400);

  }
  else {
    digitalWrite(exFan, 0x0);
  }


  delay(500);
}

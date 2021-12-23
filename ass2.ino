//Vo Tue Nam - CE140557
const int sensorMin = 0;    // smallest value measured by flame sensor

                            // The smaller the number - the greater the amount of infrared emitted by the fire

const int sensorMax = 1023; // biggest value measured by flame sensor

int flamePin = 16;          //analog pin connected to the flame sensor

int ledPin = 15;            //pin connected to the LED to notify the intensity of infrared emitted

                            //the greater the intensity - > The sensorReading value is smaller -> the more quickly the LED blink

                            //the smaller the intensity, the more slowly the LED flashes (using delay ( ) function)

void setup() {

  Serial.begin(9600);       //Launch Serial at baudrate 9600

  pinMode(ledPin,OUTPUT);

                            // You do NOT need to initialize the analog pins by calling pinMode() before using it

  }

void loop() {

  int sensorReading = analogRead(flamePin);   //Read the value from the flame sensor

  digitalWrite(ledPin, HIGH);                 //Set the LED to ON

 delay(sensorReading+30);                    //Keep the LED ON status corresponding to measured value by the flame sensor

  digitalWrite(ledPin, LOW);                  //Set the LED off

  delay(sensorReading+30);                    //Keep the LED ON status corresponding to measured value by the flame sensor

  Serial.print("Sensor pin A0: ");

  Serial.println(sensorReading, DEC);         //Print to Serial Monitor the measured value by the flame sensor

}

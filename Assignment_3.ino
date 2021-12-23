 //Vo Tue Nam - CE140557
 
 int temperaturePin = A0;// analog pin connected to LM35 sensor

void setup() {

  Serial.begin(9600);  //Launch Serial at baudrate 9600

  // You do NOT need to initialize the analog pins by calling pinMode() before using it

}

void loop() {

  int sensorReading = analogRead(temperaturePin);  //Read measure value from LM35 sensor

  float voltage = sensorReading * 3.3 / 1023.0; //Calculate the voltage (unit: Volt) from sensored value

  // According to the technical document, every 10mV corresponds to 1 Celcius degree

  // Therefore if voltage variable is a voltage indicator variable (unit: Volt)

  // we just have to multiply voltage variable (mV) by 100 to get the temperature

  float temp = voltage * 100.0; //converted from mV to C degree

  Serial.println((String)"Temperature: " + temp); //print to Serial Monitor the measured temperature

  delay(1000);//wait 1 second before the next iteration 

  
}

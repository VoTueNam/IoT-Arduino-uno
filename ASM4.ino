//Vo Tue Nam CE140557
char a = 16;  //For displaying segment "a"

char b = 05;  //For displaying segment "b"

char c = 4;  //For displaying segment "c"

char d = 14;  //For displaying segment "d"

char e = 12;  //For displaying segment "e"

char f = 13;  //For displaying segment "f"

char g = 0;  //For displaying segment "g"

char LED1 = 02;   // For controlling LED 1: ones place

char LED2 = 15;   // For controlling LED 2: tens place

char i, k = 0; //biến chạy

int delayTime = 10; //delay in time between changes of the display

 

void setup() {

  pinMode(a, OUTPUT);

  pinMode(b, OUTPUT);

  pinMode(c, OUTPUT);

  pinMode(d, OUTPUT);

  pinMode(e, OUTPUT);

  pinMode(f, OUTPUT);

  pinMode(g, OUTPUT);

  pinMode(LED1, OUTPUT);

  pinMode(LED2, OUTPUT);

}

 

void DisplayDigit(char digit) {

  switch (digit) {

    case 0: //To display digit 0, turn all segments on except the segment g.

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, LOW);//turn led on

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, HIGH);//turn led off

      break;

 

    case 1:

      digitalWrite(a, HIGH);//turn led off

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, HIGH);//turn led off

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, HIGH);//turn led off

      digitalWrite(g, HIGH);//turn led off

      break;

 

    case 2:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, HIGH);//turn led off

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, LOW);//turn led on

      digitalWrite(f, HIGH);//turn led off

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 3:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, HIGH);//turn led off

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 4:

      digitalWrite(a, HIGH);

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, HIGH);//turn led off

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 5:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, HIGH);//turn led off

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 6:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, HIGH);//turn led off

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, LOW);//turn led on

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 7:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, HIGH);//turn led off

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, HIGH);//turn led off

      digitalWrite(g, HIGH);//turn led off

      break;

 

    case 8:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, LOW);//turn led on

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, LOW);//turn led on

      break;

 

    case 9:

      digitalWrite(a, LOW);//turn led on

      digitalWrite(b, LOW);//turn led on

      digitalWrite(c, LOW);//turn led on

      digitalWrite(d, LOW);//turn led on

      digitalWrite(e, HIGH);//turn led off

      digitalWrite(f, LOW);//turn led on

      digitalWrite(g, LOW);//turn led on

      break;

  }

}

// Main function ------------

void loop() {

    int signal = analogRead(A0);  // Read signal from pin A0 from LM35 sensor

    int t = (int) signal*330/1023; // t is the temperature by the temperature conversion formula

    Serial.println((String)"Temperature: " + t); 

 

    while (k <= 24){

      // Displaying the tens place digit

      DisplayDigit(t / 10); // Integer division. E.g., 23/10 == 2

      digitalWrite(LED1, HIGH);

      digitalWrite(LED2, LOW);

      delay(delayTime);

 

      // Displaying the ones place digit

      DisplayDigit(t % 10); // Modulo division. E.g., 23%10 == 3

      digitalWrite(LED1, LOW);

      digitalWrite(LED2, HIGH);

      delay(delayTime);

 

      k++;

    }

    k = 0;

}

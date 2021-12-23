//Vo Tue Nam - CE140557
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

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, LOW);// turn the LED on 

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, HIGH);// turn the LED off

      break;

 

    case 1:

      digitalWrite(a, HIGH);// turn the LED off

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, HIGH);// turn the LED off

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, HIGH);// turn the LED off

      digitalWrite(g, HIGH);// turn the LED off

      break;

 

    case 2:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, HIGH);// turn the LED off

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, LOW);// turn the LED on 

      digitalWrite(f, HIGH);// turn the LED off

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 3:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, HIGH);// turn the LED off

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 4:

      digitalWrite(a, HIGH);// turn the LED off

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, HIGH);// turn the LED off

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 5:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, HIGH);// turn the LED off

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 6:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, HIGH);// turn the LED off

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, LOW);// turn the LED on 

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 7:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, HIGH);// turn the LED off

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, HIGH);// turn the LED off

      digitalWrite(g, HIGH);// turn the LED off

      break;

 

    case 8:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, LOW);// turn the LED on 

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, LOW);// turn the LED on 

      break;

 

    case 9:

      digitalWrite(a, LOW);// turn the LED on 

      digitalWrite(b, LOW);// turn the LED on 

      digitalWrite(c, LOW);// turn the LED on 

      digitalWrite(d, LOW);// turn the LED on 

      digitalWrite(e, HIGH);// turn the LED off

      digitalWrite(f, LOW);// turn the LED on 

      digitalWrite(g, LOW);// turn the LED on 

      break;

  }

}

// Main function ------------

void loop() {

    i = 0; //This variable runs from 00 to 99

  k = 0; //Each number will be displayed for 25*5 = 125ms.

  while (i <= 99){

    while (k <= 24){

      //Displaying the tens place

      DisplayDigit(i / 10); // Integer division. E.g., 23/10 = 2

      digitalWrite(LED1, HIGH);

      digitalWrite(LED2, LOW);

      delay(delayTime);// wait for a second

 

      //Displaying the ones place

      DisplayDigit(i % 10); // Modulo division. E.g., 23%10 = 3

      digitalWrite(LED1, LOW);

      digitalWrite(LED2, HIGH);

      delay(delayTime);// wait for a second

 

      k++;

    }

    k = 0;

    i++;

  }

  i = 0;

}

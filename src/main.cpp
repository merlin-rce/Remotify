#include <Arduino.h>
#define BTN_UP 5
// testing the minimum delay to simulate the button pressed 
#define minTime 0
#define maxTime 125
int delaytime;
void setup()
{
  Serial.begin(115200);
  Serial.println("Starting...");
  delay(5000);
}

void loop()
{
  Serial.println("===== CYCLE START =====");
  for (delaytime = minTime; delaytime <= maxTime; delaytime+=1)
  {
    Serial.print("Waiting 1000ms... Value: ");
    Serial.println(delaytime);
    delay(1000);
    Serial.println(delaytime);
    pinMode(BTN_UP, OUTPUT);
    digitalWrite(BTN_UP, LOW);
    delay(delaytime);
    pinMode(BTN_UP, INPUT);
    delay(delaytime);
  }

  // Reset for next cycle
  delaytime = 0;
}
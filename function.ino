int led = 13;

void setup() {
  
  pinMode(led, OUTPUT);
}
 
void loop() {
  blinkLed();   //memanggil function untuk dijalankan pada program utama.
}
 
void blinkLed() {                          //bagian deklarasi function
  digitalWrite(led, HIGH);   // led nyala
  delay(1000);              //  delay 1 detik
  digitalWrite(led, LOW);    // led mati
  delay(1000);              //   delay 1 detik
}

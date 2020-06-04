int sensor = A5;
int moisture;

void setup() 
{
    pinMode(sensor,INPUT);
    Particle.variable("moisture",&moisture,INT);
}

void loop() 
{
    moisture = analogRead(sensor);
    Particle.publish("moisture", (String)moisture, PRIVATE);
    delay(3600000);
}
import RPi.GPIO as GPIO, time, os
DEBUG = 1
GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)

def RCtime(RCpin):
    reading = 0
    GPIO.setup(RCpin, GPIO.OUT)
    GPIO.output(RCpin, GPIO.LOW)
    time.sleep(2)
    GPIO.setup(RCpin, GPIO.IN)
    while GPIO.input(RCpin) == GPIO.LOW:
        reading += 1
    return reading

while True:
    print(RCtime(12))
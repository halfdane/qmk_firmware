#The Brain is a tented ergo split handwired keyboard with a sculped shell that can be changed out for other options.


- USB in left half
- Reset left half 
- sudo chmod a+rw /dev/ttyACM0

- Reset left half
- sudo avrdude -p atmega32u4 -P $COM_PORT -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-lefthand.eep"

- USB in right half
- Reset right half
- sudo avrdude -p atmega32u4 -P $COM_PORT -c avr109 -U eeprom:w:"./quantum/split_common/eeprom-righthand.eep"

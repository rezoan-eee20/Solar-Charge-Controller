# Solar-Charge-Controller-with-auto-load-disconnect-on-low-battery
The 12 volt output of the solar panel is converted into 5 volt by a by LM2596 Buck Converter to feed the 5 volt battery. A relay switch along with BC 547 transistor is used to turn on the switch when the voltage level of the battery remains lower than the solar panel. The Arduino UNO (ATmega328P-8-bit AVR Microcontroller) automatically turns off the relay switch by the transistor after reading the voltage level of the battery by analog pin. TIP 122 NPN transistor is used to disconnect the load from the battery when the voltage level of the battery is too low to save the battery life. The solar and battery voltage and the charging condition is shown in the liquid crystal display.<br/>

![](A.jpg)

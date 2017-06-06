# Ultrasonic-Map-Maker-Bot
This project portrays the use of SONAR in mapping the surroundings with the help of an Ultrasonic sensor and Arduino Uno Board. Bats and Dolphins use SONAR to aid their vision and to move around. The same principle is used by cruise ships to navigate and get readings from deep inside the ocean. The same method of depth perception has been used over here to plot the 2-D graph of the surrounding environment. Active SONAR has been used to get the idea of the distance between the BOT and the surrounding environment.

Procedure Used:
The BOT will place itself in a position relatively at the center of the surrounding environment. This will be accomplished by comparing the data from the sensor in x and y directions, and sending the bot in the direction where the ping time of the sensor is more.
The servo will now move from 0 degrees to 180 degrees. At every degree position the sensor will send sound pulses 10 times and averages this ping time to calculate the distance which will be sent to MATLAB through the serial port.
The MATLAB program will plot this incoming data through the port on a 2-D graph by calculating the x and y coordinates from the angle and distance.

Result Obtained:

The graph obtained is more accurate provided the surrounding environment is more closer to the sensor. SONAR has a drawback that the sound pulses will echo when they are aimed at corners and the data at uneven surfaces is ambiguous for plotting the graph. The echo feedback can be fixed by using better quality sensors. Better calibration between the sensor and BOT can be used to move the BOT at various positions. Data from this positions can be averaged to get a more accurate reading. For the applications of depth perception SONAR does a fine job and the BOT is able to navigate itself based on sensor inputs accurately.

Project Video Link: https://www.youtube.com/watch?v=ZicGZZCmCmM&t=3s

References Used for the Project:
https://www.hackster.io/Satyavrat/ultrasonic-map-maker-using-an-arduino-yun-37c72e?ref=channel – This site is used to understand the basic knowledge about the working,  assembly, and the components that are used in the project.





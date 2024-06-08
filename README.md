# LED Graph Display with Lux Measurement

#### Project Overview

This project combines lux measurement using a photoresistor sensor with a visual LED graph display on an Arduino board. The lux values are converted into corresponding LED bar graphs, providing a visual representation of the ambient light levels.

#### Components Needed

1. **Arduino Board**
2. **Photoresistor Sensor**
3. **Resistor (RL10)**
4. **LEDs (Multiple)**
5. **Jumper Wires**

### Block Diagram


#### Instructions

1. **Set Up the Circuit:**
   - Connect the photoresistor sensor to the Arduino board using jumper wires.
   - Connect one end of the photoresistor sensor to the analog pin specified by `sensorPin`.
   - Connect multiple LEDs to the Arduino board to create an LED bar graph. Each LED represents a specific range of lux values.

2. **Initialize Serial Communication:**
   - Start serial communication with a baud rate of 9600 to enable communication between the Arduino board and a connected device (e.g., computer).

3. **Measure Sensor Value:**
   - Continuously read the analog value from the photoresistor sensor using the `analogRead()` function.

4. **Calculate Lux Value:**
   - Convert the analog sensor value into a voltage reading.
   - Calculate the resistance of the photoresistor based on the voltage reading.
   - Use the resistance value to calculate the lux value using the provided formula.

5. **Display Lux Value as LED Graph:**
   - Map the lux values to corresponding LED bar graphs. Each LED represents a specific range of lux values.
   - Turn on LEDs based on the calculated lux value to create a visual representation of the ambient light levels.

6. **Adjust Delay:**
   - Adjust the delay in the `loop()` function according to your needs to control the rate of lux measurements and LED updates.

#### Applications

- **Environmental Monitoring:** Visualize ambient light levels in indoor or outdoor environments using LED bar graphs.
- **Interactive Displays:** Create interactive displays or installations where LED bar graphs change dynamically based on the surrounding light conditions.
- **Education and Demonstrations:** Use the setup for educational purposes to illustrate concepts related to lux measurement and LED visualization.

#### Notes

- Customize the LED bar graph display by adjusting the mapping of lux values to LED states to suit your specific requirements.
- Experiment with different LED configurations and brightness levels to enhance the visual representation of lux measurements.



🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

## Made for you with ❣️ from ProjectsLearner
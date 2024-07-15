# Mine Bot Explorer

## Introduction

In the realm of modern mining operations, ensuring safety,
efficiency, and sustainability are paramount concerns. Traditional methods of mine exploration and monitoring often face challenges related to human safety,
environmental impact, and operational efficiency. This project introduces a
ground-breaking approach to address these challenges through the development
of a four-wheeled robotic system equipped with advanced sensor technology and
live camera stream transmission capabilities.

## Work

- In today's mining landscape, safety and efficiency are paramount concerns. Mining operations present unique challenges, from navigating hazardous terrain to monitoring environmental conditions in real time. Traditional methods of exploration and monitoring are often labor-intensive and prone to human error.
- The research began with the choice of open source, readily available and system integrable components for the project. The choice of communication protocol is best chosen as Wi-Fi for the protype model as implementation of the same project using Wireless Sensor Networks (WSN) lacked with the integrable components available in the market with the prototype budget range.
- The mining robot makes use of three onboard environmental parameter mapping sensors that sends the data of temperature, humidity, methane and smoke detection measurements to the ESP Controller powered over Wi-Fi connectivity that sends the sensor data directly over cloud.
- The same controlleris used to control the motion of the robot. While, raspberry pi zero is used alone for live video streaming over the same Wi-Fi network.
- The integration of the system is made successfully with the control and sensor data acquisition over the Blynk IoT cloud. The same device gives the remote user access to the live video stream.
- The project’s robotic ability to transmit live camera feeds provides unprecedented visibility into mine environments, enabling operators to make informed decisions quickly.
- Also, the system's autonomous capabilities reduce the need for human intervention in hazardous environments, mitigating risk and ensuring worker safety.

## Snapshots

- Top View

    ![TOP VIEW](https://github.com/tejasgolhar2/MineBotExplorer/blob/13ac411485494eca9726d3d6b92330ac7cc0175d/v%201.0/project_documentation/reference_images/Top%20view.jpg)

- Side View

    ![SIDE VIEW](https://github.com/tejasgolhar2/MineBotExplorer/blob/13ac411485494eca9726d3d6b92330ac7cc0175d/v%201.0/project_documentation/reference_images/MineBot.jpg)

- Video demonstrating the flow of the app

    <https://github.com/Tushar1805/recruit_me/assets/78633485/71f4c560-6920-4881-9cef-dce7e6c4dedf>

## Getting Started

- [Blynk IOT](https://blynk.io/)

[ARMOR
NASA JSC Hackathon 2024](https://docs.google.com/presentation/d/1QZTonUkevR5eY7v3c1ctYmNv8Vx-AnrBsdMBcfOZtsk/edit?usp=sharing)

## Inspiration
The Disaster Pod Field Hospital (DPFH) is a conceptual idea to be deployed by SpaceX Starship in disaster-stricken areas worldwide. It must be secured from threats such as attackers who may trespass the perimeter in order to protect its resources.

## What it does
ARMOR (Aid and Relief Monitoring and Operations Regulator) is a proposed security architecture of control hubs positioned along the perimeter surrounding the DPFH anywhere worldwide. This solution secures aid personnel, patients, and medical supplies from unwanted visitors through 3 tiers of security. Tier scopes are organized from most broad to least broad.
 
**Tier 1**
Relief Aid Control Center
-ARMOR relays information to the control center (remotely located) from arduino's motion sensor, with the control center's displays visualized through an LCD screen display as an arduino module 
-Ability for manual rotation of motion sensor controlled remotely

**Tier 2**
Intruder Deterrent Functions
-ARMOR's motion sensor triggers high-decibel alarms and high-intensity flashing strobe lights in the direction of intruders

**Tier 3**
Rover-Deployed Vehicle Prevention
-Autonomous deployment of vehicle prevention system through rover with self-assembling arm
-ARMOR hubs will be secured to AlaskaGroup's modular vehicle prevention system which stops cars and large trucks

## How we built it
The security hub utilizes a motion sensor to trigger the intruder deterrent functions by activating a sound alarm, flashing LED to simulate disorienting light, and an LCD screen to display the perspective of a Relief Aid Control Center Controller in the event of a perimeter breach.

## Challenges we ran into
- Fingerprint sensor arduino module unavailable
- RFID sensor

## Accomplishments that we're proud of
- Resolved multiple flashing LED light configuration and logic
- Resolved motion sensor)

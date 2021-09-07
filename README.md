# Automated Robotic Arm Through The Use Of The Computer
** ITIS Faenza - Electronics and Telecommunications Section **


[![Robotic Arm](https://github.com/MDalprato/Bracccio-robotico-automatizzabile/blob/main/Arm%20control/tutto%20quello%20che%20ho%20usato/41569_58944565732_4312_n.jpg?raw=true)](https://www.youtube.com/watch?v=9u__p-9mbfY)


<p> Industrial development and the emergence of new technologies have allowed the creation of increasingly complex and complicated products from a technical-scientific point of view. </p>

<p> Modern industries make extensive use of automated systems and computer controls for monitoring the industrial production chain.
More and more industries have gradually evolved from the point of view of automation, just think of the modern industries that work in the automotive sector. </p>

<p> This includes the use of robotic arms designed to simplify repetitive and sometimes dangerous and complex operations.
The use of these machines has allowed the speeding up of production and testing of all those products that were previously processed individually by the human hand.
The robotic arm treated in this project, of course, is significantly lower in size and performance than those used in the industrial field but nevertheless represents a simulation of what happens in practice. </p>

<p>The project consists of three electronic boards working in symbiosis and a small robotic arm.
The project consists of various phases of analysis, management and control that exploit the ability of the computer to work simultaneously on multiple processes.
Data is sent from the computer via serial transmission to the USB interface, which offers 8 digital input channels and 8 digital output channels.
The interface is in turn connected to a control and management board of the servomotors located in the various joints of the robotic arm.
The data exploits the TTL logic (+5 V) since the microcontroller present on the USB interface and the drivers for managing the servomotors are TTL type. </p>
<p>Through various actuators placed on the arm, the states and rest positions of the servomotors are detected and sent instantly to the control software.
The system is fully controllable through the computer and all the programs in the arm have been created using the C ++ programming language.
The arm is however programmable using other programming languages ​​but C ++ was considered as the best compromise in terms of performance, reliability and understanding.
Using C ++, the software for the manual and automated management of the arm was created.</p>

<p>This software represents the best system to manage the robotic arm in an optimal, safe and efficient way.
The input lines were used to check the state of the arm and to allow a more accurate management without incurring technical problems such as, for example, the excessive torsion of one of the various servomotors present.</p>

**This work is organized as follows:**

- Chapter 2 analyzes the project in a specific way, analyzing in an analytical and specific way the electronic circuit of each electronic board.

- Chapter 3 analyzes the project from a software point of view, focusing on the programming language C ++ and the way in which the project interacts with the computer.

- Chapter 4 analyzes the practical implementation of the project, indicating in every minimum part the techniques and ways in which the robotic arm and the related electronic boards were made.

There are some appendices with instructions for using the arm management software, both for the automatic version and for the manual version.
Finally, the thesis attaches a CD-ROM containing the above-mentioned software, this text in digital version and the list of codes in C ++.

Credits by MARCO DALPRATO
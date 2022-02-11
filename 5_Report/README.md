# Discription
## 
A universal motor is a special type of motor. This motor works on both AC and DC supply.
In this project, the universal motor performance for AC and DC sources are compared.
Lossand efficiency of the universal motor are calculated for both AC and DC sources. Speed of
the universal motor is controlled using the tapped field winding method. The Differential
equations of universal motor are solved by Euler's method and analysed using c
programming. The matlab Simulink is used for getting torque speed characteristic of the
universal motor and to exhibit the speed control of the motor using tapped field winding
method.

# Reqiurements

## High level requirements
1) The electical and mechancal equations for the solutions of itarations.
2) universal motor parameters for both AC and Dc inputs.
3) losses in Universal motor.
4) Analysis of Efficiency for both AC and DC supply.

## Low level requirements
1) The Backward Euler’s method for solving the diffential equation of the Universal motor.
2)Speed control of Universal motor
3) Theoretical Calculations for the equations.
4)Scope of universal motor.

# Objectives

1) To calculate the losses and efficiency of the universal motor for AC and DC voltage sources.
2) To control the speed of the universal motor by tapped field winding technique.
3) To obtain the solution for the universal motor equations using c programming with the help of Euler's method.
4) To simulate the universal motor for the AC and DC voltage sources.

# 4W's 1-H..

 # *What 
 
  ###
   A universal motor is a special type of motor. This motor works on both AC and DC supply.
   In this project, the universal motor performance for AC and DC sources are compared. Loss
   and efficiency of the universal motor are calculated for both AC and DC sources.
 # *Why
   ### 
   A universal motor is similar to DC series motor which works in both AC and DC supply is
   due to the torque insensitive towards the direction of the current. The universal motor has
   few advantages that are low costs, high-speed rotation, and high starting torque. A universal
   motor is used in mixers, sewing machines, washers. Due to the high-speed application, over
   induction motor universal motor is preferred.
 # *When
   ### 
   The Construction of a universal motor is very similar to the construction of the dc series
motor. It consists of a stator on which field poles are mounted. Field coils are wound on the
field poles. However; the whole magnetic path (stator field circuit and also armature) is
laminated. Lamination is necessary to minimize the eddy currents which induce while
operating on AC.

 # *Where
   Universal motor is used primarily in areas where the noise level is not critical but high revolutions
   are important.
   some applications are Drills and screwdrivers
• Mixers and Blenders
• Fans and hairdryers
• Vacuum cleaners
 # *Who 
   The ability to operate at extremely high speed connecting to a single-phase AC network made
   them very popular in domestic appliances. Also, it has miniature sizes and can be used in
   compact household devices. In industrial branches, this equipment is also often used, but its
   effectiveness is not suitable for everyone.
 # *How
   ###
   Speed of the universal motor is controlled using the tapped field winding method. The Differential
   equations of universal motor are solved by Euler's method and analysed using c
   programming. The matlab Simulink is used for getting torque speed characteristic of the
   universal motor and to exhibit the speed control of the motor using tapped field winding
   method.
# SWOT Analysis..

  # Strengths
   ##  
   1) A universal motor is made of the field winding i.e. stator and armature i.e. rotor. Universal motors are series coiled with a high initial torque and speed characteristic        variables.
   2) The Construction of a universal motor is very similar to the construction of the dc series
     motor. It consists of a stator on which field poles are mounted. Field coils are wound on the
     field poles
     
  # Weakness
  
   design complexity is more compared to the induction motor, comparing to DC motor wear of commutator is greater and less efficient
   
  # Opportunities
  
Designers use various methods to control the speed and to avoid the universal motor running
at a dangerous speed. One method is to build the universal motor into a device so that the
motor would never run at no load. These types of motors are used for small applications that
favor connecting the motor directly to the system that it drives.

  # Threts
  
the universal motor are as follows, design complexity is more compared to the induction motor, comparing to DC
motor wear of commutator is greater and less efficient. A universal motor is made of the field winding i.e. stator and armature i.e. rotor. Universal motors are series coiled with ahigh initial torque and speed characteristic variables.

# best methodes to fallow...

  Basic Requirements
- ## C programming Knowledge
- ## C code Compiling Softwares
    - ###  Visual studio code 
    - ###  Codeblocks
- ##  MS Excel
   - ### For Gantt Chart
- ## Knowledge of UML diagram

# Behavioral Design AND Structural Design

## Block Diagram
![universalmotor](https://user-images.githubusercontent.com/98837660/152696208-644226f7-e38f-4dc9-9321-c72cf43cd960.png)


## program Work flow/ Flow chart
![program workflow](https://user-images.githubusercontent.com/98837660/152696091-819d4614-da9a-439c-9342-d1729bf6f2ba.png)

# Implementation
 # Numerical Method

## Methodology
1)Backward Euler’s Method:
The Backward Euler’s method is an implicit one which,contrary to the explicit method in thesolution by solving a differential equation involving the current state of the system and later one.

2)Electrical and Mechanical Equations of Universal Motor.

3)Universal Motor Parameters for AC Input adn DC Input and Theoretical Calculations.


# Program flow 
Step 1: Start

Step 2: Include libraries stdio.h and math.h

Step 3:Declare files
       Use a file structure and define file pointers
       open the file.
       
Step 4: Declaring all constants and variables

Step 5: Initialising the I and w

Step 6: Initialising the loop.

Step7: Computing formulas
        𝜔𝑚+1 = (𝜔𝑚 +𝑇𝑒−𝑇𝐿−𝐵𝜔𝑚+1𝐽 )𝛿𝑡
         𝑖𝑎𝑖+1 = 𝑖𝑎 +(𝑉𝑡 − 𝑘𝑎𝜔 − 𝑖𝑎𝑖+1(𝑟𝑓 + 𝑟𝑎)(Laa + 𝐿𝑓𝑓)
         𝑁[𝑖] = (𝐸𝑏[𝑖]𝑘∗𝑛∗𝑖)/15
        𝑇𝑒 = 𝜑Ia/2
        
Step8: Printing values of current
       Printing values of Torque
       Printing values of speed
       
Step9: Copying the values of currents into file current.xls
       Copying the values of Torque into file torque.xls
       Copying the values of speed into file speed.xls
       
Step10: Closing all files declared.

Step11: End.

# Output

![output](https://user-images.githubusercontent.com/98837660/153481745-63f2a228-e682-4714-9559-fcdedcb565b8.png)

![output2](https://user-images.githubusercontent.com/98837660/153481763-b2e14b46-0d3a-44c5-995a-de8c6a61841a.png)

# Result-(Losses

![Result-(Losses)](https://user-images.githubusercontent.com/98837660/153481784-612bdff7-88a3-43f3-9f46-d440c209bc77.png)

 # Efficiency Analysis of Universal motor

![Efficiency Analysis of Universal motor](https://user-images.githubusercontent.com/98837660/153482247-9067b1b7-80a6-49fa-aaeb-a8191a64a365.png)

# Efficiency Values for AC and DC

![Efficiency Values for AC and DC](https://user-images.githubusercontent.com/98837660/153482256-1f000959-c121-4883-850f-a002379019e1.png)
 
 
# Analysis
The speed of universal motorcan be controlled by tapped winding technique. The plotting results for both AC and DC are
shown for variation of speed with flux and speed with torque. We have compared the
efficiency for AC and DC supplies and we found DC is more efficient than AC.In the future
scope, to improve the efficiency of the universal motor better algorithm can be developed for
calculating iron losses with prominence on the rotor. In this paper, the high rotor field
frequency and due to the eddy currents weakening of the magnetic field is not considered


# The scope of universal motor

###
 The ability to operate at extremely high speed connecting to a single-phase AC network made
 them very popular in domestic appliances. Also, it has miniature sizes and can be used in
 compact household devices. In industrial branches, this equipment is also often used, but its
 effectiveness is not suitable for everyone.
 
# The most common applications:
 • Drills and screwdrivers
 • Mixers and Blenders
 • Fans and hairdryers
 • Vacuum cleaners
 • Sewing machines
 • Wipers
 • Washing machines
 • Sawmills
 Suchmotor is used primarily in areas where the noise level is not critical but high revolutions
 are important.

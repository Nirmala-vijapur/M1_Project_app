# Report


# Description 
A scientific calculator is an electronic device that can be used to evaluate and answer problems in mathematics and science. This calculator works in the same way as a conventional calculator, but with a few more advanced capabilities. These calculators are used in math, science, engineering, and other subjects.


# Requirements 

## High Level Requirements
|ID   |DESCRIPTION                                    |STATUS     |
|:----|:----------------------------------------------|:----------|
|HLR1 |If user want to do the Addition operation      |Implemented|
|HLR2 |If user want to do the subtraction operation   |Implemented|
|HLR3 |If user want to do the Multiplication operation|Implemented|
|HLR4 |If user want to do the Division operation      |Implemented|
|HLR5 |If user want to do the modulus operation       |Implemented|
|HLR6 |If user want to do the Power operation         |Implemented|
|HLR7 |If user want to do the Factorial operation     |Implemented|
|HLR8 |If user want to do the Square operation        |Implemented|
|HLR9 |If user want to do the Cube operation          |Implemented|
|HLR10|If user want to do the Square root operation   |Implemented|
|HLR11|If user want to Exit                           |Implemented| 

## Low Level Requirements 
|ID  |DESCRIPTION                                                                                                                                    |STATUS     |
|:---|:----------------------------------------------------------------------------------------------------------------------------------------------|:----------|
|HLR1|Enter the operation you want to do (like Addition, subtraction, multiplication, division, modulus, power, factorial, square, cube, square root)|Implemented|
|HLR2|Enter the two numbers                                                                                                                          |Implemented|
|HLR3|If user entered Invalied then it will ask for vallied operation                                                                                |Implemented|               
|HLR4|If user enter more then two numbers then it will ask for vallied numbers                                                                       |Implemented| 


## SWOT

* Strength:
    * This technology allows students solve complicated problems quickly and in an efficient manner
    * online calculators are relatively cheap
    * Calculator save time, energy and increases efficiency in workplace.

* Weakness of calculator :
Even though calculators can do the basic operations instantly, students should not use it all the time. When a student is always dependent on a calculator for solving problems of addition, subtraction, multiplication and division, it may make them incapable of solving these basic operations manually. This may cause them real trouble during their tests and even at the later stages of their life where they will need these skills to solve complex problems.


## 4w's & 1H
It is important that the students become confident users of calculators. They need to recognise that the calculator is a tool they are in control of and to understand how it can help them to develop their mathematics.

# Architecture

* Behavioral Diagram

# High Level


![Screenshot (60)](https://user-images.githubusercontent.com/98865009/153655273-e5a453c8-80a2-4aa2-9658-b7c628f6f195.png)


# Low Level


![Screenshot (66)](https://user-images.githubusercontent.com/98865009/153655690-2870b5ec-5375-4e8d-869f-df3917876fa8.png)



* strctural 

# High level


![Screenshot (73)](https://user-images.githubusercontent.com/98865009/153656084-7721eefe-eae8-45b0-8913-bfc126de25ac.png)



# Low level

![Screenshot (52)](https://user-images.githubusercontent.com/98865009/153656303-cdbdd202-df90-4d84-b0f4-d699afcd22fd.png)


# Test plan 


|No|Test case ID|Test case Objective                                 |Prerequisite         |Steps             |Input data   |Expected Result|Actual Result        |Status|
|:-|:----------:|:--------------------------------------------------:|:-------------------:|:----------------:|:-----------:|:-------------:|:-------------------:|:----:|
|1 |TC-1        |addition of two integers & display the result       |welcome to calculator|Enter operation  1|1  ,     2   |3              |3                    |Pass  |
|2 |TC-2        |addition of two integers & display the result       |welcome to calculator|Enter operation 12|1  ,     2   |3              |enter valid operation|Fail  |   
|3 |TC-3        |Subtraction of two integers & display the result    |welcome to calculator|Enter operation 2 |7  ,     6   |1              |1                    |Pass  |
|4 |TC-4        |Subtraction of two integers & display the result    |welcome to calculator|Enter operation 2 |1 , 2 ,    6 |1              |enter valid number   |Fail  |
|5 |TC-5        |Multiplication of two integers & display the result |welcome to calculator|Enter operation 3 |2  ,    2    |4              |4                    |Pass  |
|6 |TC-6        |Division of two integers & display the result       |welcome to calculator|Enter operation 4 |2  ,    2    |0              |0                    |Pass  |
|7 |TC-7        |modulus of two integers & display the result        |welcome to calculator|Enter operation 5 |3  ,    9    |0              |0                    |Pass  |
|8 |TC-8        |power of two integers & display the result          |welcome to calculator|Enter operation 6 |2  ,    2    |4              |4                    |Pass  |
|9 |TC-9        |factorial of two integers & display the result      |welcome to calculator|Enter operation 7 |5  ,    4    |120            |120                  |Pass  |
|10|TC-10       |square of two integers & display the result         |welcome to calculator|Enter operation 8 |5  ,         |25             |25                   |Pass  |
|11|TC-11       |cube of two integers & display the result           |welcome to calculator|Enter operation 9 |5  ,    4    |125            |25                   |Pass  |
|12|TC-12       |square root of two integers & display the result    |welcome to calculator|Enter operation 10|6            |36             |36                   |Pass  |


#ImagesAndOutput

![Screenshot (79)](https://user-images.githubusercontent.com/98865009/153663434-50114543-4d47-49d5-a0d3-683f8df75ec6.png)

![Screenshot (80)](https://user-images.githubusercontent.com/98865009/153663931-824d9b8b-e5e5-494e-a977-e05f5ae242a3.png)

![Screenshot (81)](https://user-images.githubusercontent.com/98865009/153664075-79afa5c4-4bae-4f03-bde2-7a046db921ff.png)

![Screenshot (82)](https://user-images.githubusercontent.com/98865009/153664229-b419671e-1ac7-438d-b45d-0af504044e89.png)

![Screenshot (83)](https://user-images.githubusercontent.com/98865009/153664393-4307b628-1506-4bfa-9d4f-3a61fa4f0fad.png)

# References
https://www.youtube.com/watch?v=bqWjx9NXxAI

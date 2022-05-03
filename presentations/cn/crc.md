---
title: CRC(Cyclic Redundancy Checks)
author: Basanta Rai
date: 2022-04-27
---

```
                            ____                            __        __  _                          
                           / __ \________  ________  ____  / /_____ _/ /_(_)___  ____     ____  ____ 
                          / /_/ / ___/ _ \/ ___/ _ \/ __ \/ __/ __ `/ __/ / __ \/ __ \   / __ \/ __ \
                         / ____/ /  /  __(__  )  __/ / / / /_/ /_/ / /_/ / /_/ / / / /  / /_/ / / / /
                        /_/   /_/   \___/____/\___/_/ /_/\__/\__,_/\__/_/\____/_/ /_/   \____/_/ /_/ 
                                                                                                     

                                                      ____ ____   ____ 
                                                     / ___|  _ \ / ___|
                                                    | |   | |_) | |    
                                                    | |___|  _ <| |___ 
                                                     \____|_| \_\\____|


```

---
# What is CRC?

Cyclic Redundancy Checks

- powerful and most widely used method for error detection and correction

- based on binary division

- in this method `Original Data` get a short check value attached based on 
  the remainder of a polynomial division of their contents

- In CRC,at the senders end, a sequence of redundant bits, called cyclic redundancy check
  bits, are appended to the end of data unit so that the resulting data
  unit becomes exactly divisible by predetermined binary number (divisor)

- at the receivers end, the transmitted data is divided by the same divisor 
  and the resulting remainder indicates that whether the transmitted data has 
  an error or not

- if the remainder is 0 , the data is assumed to be error free or correct and accepted

- if the remainder is not 0 , the data is damaged and hence rejected

- CRCs are popular because they are simple to implement in binary hardware,easy to analyze mathematically,
  and particularly good at detecting common errors caused by noise in transmission channels

- this method can detect all odd errors, single bit, burst error of length to polynomial degree

---

# CRC Generator

- CRC generator is an algebraic polynomial represented as a bit pattern.

- Bit pattern is obtained from the CRC generator using the following rule

> The power of each term gives the position of the bit and the coefficient gives the value of the bit.

```
    !open crc_working.jpeg  

```

---

### What is divisor ?
- the protocol that the sender and receiver mutually agree upon, will decide the divisor
  so the divisor is known to both ends (sender and receiver)

- based on this divisor CRC is going to be generated in senders side and verified at receivers side

---

## [STEP:1] CRC generation at senders side

- find the length of the divisor 'L'

- append 'L-1' 0s to the original message

- if the divisor is polynomial, the degree of polynomial is the length of 0s to be appended

- perform binary division

    - use `xor` binary operation -> same value = 0, different value = 1

    | A   | B   | A xor B |
    | --- | --- | ------- |
    |  0  |  0  |   0     |
    |  0  |  1  |   1     |
    |  1  |  0  |   1     |
    |  1  |  1  |   0     |

- the remainder of the division is CRC

---

## [STEP:2] Append CRC to original data

- 0s appended to original data earlier is replaced by newly generated CRC 

---

## [STEP:3] Transmission to Receiver
 - newly formed data (original data + CRC) is transmitted to receiver

 - transmitted data = Original Data + CRC

 ---

## [STEP:4] CRC Validation at receivers side
- transmitted data is received

- the received data is divided with the same divisor

- the resulting remainder is checked

---

## [STEP:5] Checking Remainder

- if the remainder is 0
    - receiver assumes that no error occurred in the data during transmission
    - receiver accepts the data

- if the remainder is not 0
    - receiver assumes that error occurred in the data during transmission
    - receiver rejects the data and asks the sender for retransmission

---

## Examples
1. A bit stream 100100 is transmitted using the standard CRC method. The divisor is 1101.Check whether the receiver accepts the transmitted data or not ?
    ```
        !open q1_p1.jpg
        !open q1_p2.jpg
        
    ```

2. A bit stream 10011101 is transmitted using the standard CRC method. The generator polynomial is x3+1.
    a. What is the actual bit string transmitted?
    b. Suppose the third bit from the left is inverted during transmission. How will receiver detect this error?

    ```
        !open q2_p1.jpg
        !open q2_p2.jpg
        
    ```
  
---

## Resources
- https://en.wikipedia.org/wiki/Cyclic_redundancy_check
- https://www.gatevidyalay.com/cyclic-redundancy-check-crc-error-detection/
- https://www.tutorialspoint.com/explain-the-cyclic-redundancy-checks-crcs
- https://www.youtube.com/watch?v=A9g6rTMblz4&t=212s
- https://www.youtube.com/watch?v=wQGwfBS3gpk

---

```
 _____ _                 _     __   __          
|_   _| |__   __ _ _ __ | | __ \ \ / /__  _   _ 
  | | | '_ \ / _` | '_ \| |/ /  \ V / _ \| | | |
  | | | | | | (_| | | | |   <    | | (_) | |_| |
  |_| |_| |_|\__,_|_| |_|_|\_\   |_|\___/ \__,_|
                                                

```

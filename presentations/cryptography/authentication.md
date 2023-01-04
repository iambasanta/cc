---
title: Authentication
author: Basanta Rai (github.com/iambasanta)
date: 2023-01-04
---

# What is authentication?

Authentication is the process of recognizing user's identity

Authentication is the process of determining whether a user should be allowed to access a system

- "Authentication" : verifying an identity of a user

- "Authorization" : determining the access rights of authenticated user

---

# Authentication System

Technique that provides access control for systems by checking to see if a user's credentials match the credentials in a database of authorized users or in a data authentication server

Authentication is any process by which a system verifies the identity of a user who wishes to access it

## Factors of authentication system are:

1. Something you know

   - Passwords/Secret key

2. Something you have

   - Secure tokens/Smart card/ATM card

3. Something you are

   - Biometrics (eg: fingerprint)

---

# Password based authentication

Passwords are the most common method of authentication

Passwords are human memorable strings (combination of alphabets, numbers and special characters)

Passwords are often stored as hash value of original password

`Example ?`

---

# Dictionary attack

A type of brute force attack

In this attack intruder attempts to crack a password by trying words from predefined list i.e dictionary

A dictionary contains common words and phrases used by business and individuals

Dictionary attacks often succeed because many people have a tendency to choose short passwords that are ordinary words or common passwords

We can defeat dictionary attack by choosing a password that is not a simple varient of words found in any dictionary or list

## Types of dictionary attacks

1. Online Attack

2. Offline Attack

---

## Online Attack

Online password attacks are the traditional type of attacks you can expect against a web application, exposed SSH terminal, or really any login interface.

An online password attack consists of trying a large number of username/password combinations against the login portal in hopes of guessing the correct password

They are limited by:

- the speed of the network

- their extreme noisiness

---

## Offline Attack

The difference between offline and online password attacks is that... offline password attacks are offline

Great, but what does that mean? How could a password attack be offline?

Well in some cases, an attacker can get a hash of your password that they can take offline and try to crack it.

A hash is just a one-way form of encryption

An offline password attack will take this hash offline and try to find the clear-text value that computes to that hash

They are limited by the speed of computer that the attacker is using

---

## Best practices to defend against dictionary and brute force attacks

- Slow down repeated logins

- Force captchas after multiple failed logins

- Lock accounts

- Refresh passwords

---

## References

- Notes

- [wikipedia] (https://en.wikipedia.org/wiki/Authentication)

# Monoalphabetic Substitution Cipher Decoder (Bruteforce)
This project uses backtracking in cpp to make all possible outputs of a Monoalphabetic Substitution Cipher which is stored in a new file. This file is then read by the python program and analized for existing english words in the sentences. The sentences with most valid words are printed.\
String in input is to be fed with the basic, first characters without punctutations and only a `.` at end.
### Eg:
* "Hello" to be put as "`abccd.`".
* "Readme.md" to be as "`abcdebed.`".

Time complexity (for backtracking): `26!/(26-N)!` (N= No. of distinct aplhabets in the cipher text)

---
### PS: Just started making as a silly idea. Shall be improved upon later.
"""This code is used to reverse the string but the words itself are not reversed. So dont get confused with 
    the title of the question->Reverse words in a given string
    Input:
      2
      i.like.this.program.very.much
      pqr.mno

      Output:
      much.very.program.this.like.i
      mno.pqr"""

#include <stdio.h>

t=int(input())             #no of test cases
for _ in range(t):
  s=input()               #input string
  words=s.split('.')      #split the string where fullstops are there into a list-words
  words.reverse()         #reverse each word in the list-words
  print('.'.join(words))  #joining reversed words with fullstop
  

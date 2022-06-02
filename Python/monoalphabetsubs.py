import enchant
import os
import nltk
from nltk.tokenize import word_tokenize, sent_tokenize

dic = enchant.Dict("en_US")
file = open('path', encoding='utf-8')  #replace path to output file from cpp
red=file.read()
sentences = sent_tokenize(red)
sentenceValue = dict()
words=dict()
for sentence in sentences:
    words[sentence]=word_tokenize(sentence)

max=0
for sentence in sentences:
    for word in words[sentence]:
        if dic.check(word):
            if sentence in sentenceValue:
                sentenceValue[sentence] += 1
            else:
                sentenceValue[sentence] = 1
            if sentenceValue[sentence]>max:
                max=sentenceValue[sentence]

for sentence in sentences:
    if sentenceValue[sentence]==max or sentenceValue[sentence]==max-1:
        print(sentence)


from perceptron import *
import numpy as np

# read connections
with open('inp.txt') as f:
	content = f.readlines()
content = [x.strip() for x in content]

# variables init
n = int(content[0])							# no of perceptrons
variablecount = int(content[1])				# no of externalinputs
content = content[2:]						
content = [x.split(" ") for x in content]	
initwt = 1									# initialweights of all
network = []								# all perceptrons
intermediates = []							# inputs + intermediate perceptron outputs

# init intermediate
for i in range(variablecount+n):
	intermediates.append(0.0)

# init network
for i in range(n):
	p = perceptron(initwt)
	network.append(p)

# attach inputs to perceptron
for i in range(n):
	for j in content[i]:
		if j[0] == '_':
			network[i].inputs.append(int(j[1]))
		else:
			network[i].inputs.append(int(j[0])+variablecount)

# train network
with open('train.txt') as trainingfile:
	content = trainingfile.readlines()
content = [x.strip().split("\t") for x in content]
input = [x[0].split(' ')  for x in content]
input = [[int(y) for y in x] for x in input]
output = [int(x[1]) for x in content]
#train(network, trainingfile)





print(content)
print(input)
print(output)
print(n)
print(variablecount)
print(intermediates)
print(network)
for i in network:
	print(i)
	print(i.wt)
	print(i.inputs)



i = 2
j = i
i = 0

#print(i,j)
#print(id(i), id(j))
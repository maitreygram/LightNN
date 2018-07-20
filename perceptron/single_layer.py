import numpy as np

# sigmoid activation function
def activation(x):
	return 1/(1+np.exp(-x))
# np.piecewise(x, [x<0.5,x>=0.5], [0,1])
# 1/(1+np.exp(-x))
# error function
def error(x):
	return x*(1-x)

# read connections
with open('inp.txt') as f:
	connections = f.readlines()
connections = [x.strip() for x in connections]

# number of layers and layers
l = int(connections[0])
layers = [int(x) for x in connections[1].split(' ')]

# assign random weights
weights = [2*np.random.random((x,1))-1 for x in layers[:-1]]

# read training data
with open('train.txt') as f:
	train = f.readlines()
train = [x.strip() for x in train]
train = [x.split('\t') for x in train]

# training input and output
input = np.array([[int(y) for y in x[0].split(' ')] for x in train])
output = np.array([[int(y) for y in x[1].split(' ')] for x in train])

#print()
# intermediate outputs
for iter in range(10000):
	
	# forward propogation
	network = [input]
	for j in range(l-1):
		network.append(np.array([np.full((1,layers[j+1]),x)[0] for x in activation(np.dot(network[j],weights[j]))]))

	# error
	l_error = output - network[-1]

	# multiply error by the 
	# slope of the sigmoid at the values in l1
	l_delta = [l_error * error(x) for x in network[1:]]
	
	# update weights
	for j in range(l-1):
		weights[j] += np.dot(network[j].T,l_delta[j])

#print(l)
#print(layers)
#print(train)
print(input)
#print(output)
# print(network)
print(network[l-1])
print()
print(weights)
#print(l_error)
#print(l_delta)
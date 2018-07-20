import numpy as np

alpha = 1
step = []
# sigmoid activation function
def activation(x):
	return 1/(1+np.exp(-x))

# error function
def error(x):
	return x*(1-x)

def flatten(x,s):
	t = []
	for e in x:
		if e > s:
			t.append(1)
		else:
			t.append(0)
	return t

# read connections
with open('inp.txt') as f:
	connections = f.readlines()
connections = [x.strip() for x in connections]

# number of layers and layers
l = int(connections[0])
layers = [int(x) for x in connections[1].split(' ')]

# assign random weights
weights = [2*np.random.random((layers[i],layers[i+1]))-1 for i in range(l-1)]
# weights = []
# for i in range(l-1):
# 	weights.append(2*np.random.random((layers[i],layers[i+1]))-1)

# read training data
with open('train.txt') as f:
	train = f.readlines()
train = [x.strip() for x in train]
train = [x.split('\t') for x in train]

# training input and output
input = np.array([[int(y) for y in x[0].split(' ')] for x in train])
output = np.array([[int(y) for y in x[1].split(' ')] for x in train])
no_inputs = len(output.T[0])

for iter in range(10000):
	# forward propogation
	network = [input]
	for j in range(l-1):
		a = np.dot(network[j],weights[j])
		b = activation(a)
		c = [np.full((1,layers[j+1]),x)[0] for x in b]
		network.append(np.array(c))

	# error
	l_error = output - network[-1]

	# process error for output layer
	outmost_error = np.array([np.full((layers[-1],layers[-1]),0.0) for i in range(no_inputs)])
	for i in range(no_inputs):
		for j in range(layers[-1]):
			outmost_error[i][j][j] = l_error[i][j] * error(network[-1][i][j])
	
	l_next = l_error * error(network[-1])
	l_delta = [l_next]
	
	# process error for hidden layer
	for i in range(l-2):
		l_next = np.array([l_next[j] * weights[-(1+i)] for j in range(no_inputs)])
		l_next = np.array([l_next[j] * np.array([error(network[-(2+i)][j])]).T for j in range(no_inputs)])
		l_delta.append(np.array([[sum(x) for x in y] for y in l_next]))
		l_next = np.array([[x[i][i] for i in range(layers[-1])] for x in l_next])
	
	# update weights
	# for i in l_delta:
	# 	print(i)
	# print()

	for i in range(l-1):
		weights[i] += alpha * np.dot(network[i].T,l_delta[-(1+i)])

# final processing of output 
for i in range(layers[l-1]):
	t = [0,1]
	for j in range(no_inputs):
		if output.T[i][j] == 0:
			t[0] = max(t[0],network[l-1].T[i][j])
		else:
			t[1] = min(t[1],network[l-1].T[i][j])
	step.append(sum(t)/2)

print("weights")
for i in weights:
	print(i)
print()
print("input")
print(input)
print()
print("output")
print(output)
print()
print("network")
for net in network:
	print(net)
print()
print("step",step)
# print()
# print("outmost_error")
# print(l_delta)


# testing network
with open('test.txt') as f:
	test = f.readlines()
test = [x.strip() for x in test]
test = np.array([[int(y) for y in x.split(' ')] for x in test])

print("test")
print(test)
print()

# forward propogation
network = [test]
for j in range(l-1):
	a = np.dot(network[j],weights[j])
	b = activation(a)
	c = np.array([np.full((1,layers[j+1]),x)[0] for x in b])
	network.append(c)

trained_output = np.array([flatten(network[l-1].T[i],step[i]) for i in range(layers[l-1])]).T

print("test output")
for net in network:
	print(net)
print()
print("trained_output")
print(trained_output)
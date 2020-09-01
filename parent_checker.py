stack = []

def push(n):
  stack.append(n)

def Pop():
  stack.pop()

def peek():
  return stack[-1]

def show():
  return stack

print("Enter the parentheses expression:")
word = input()

flag = 1

for i in word:
  if i in ')}]':
    if stack != []:
      j = peek()
    else:
      flag = 0
      break

    if j == '(' and i == ')':
      Pop()
    
    elif j == '{' and i == '}':
      Pop()

    elif j == '[' and i == ']':
      Pop()
      
    else:
      flag = 0

  elif i in '({[':
    push(i)

if stack == [] and flag == 1:
  print(True)

else:
  print(False)





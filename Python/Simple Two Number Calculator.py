'''
Simple Two Number Calculator
This program prompts the user to enter two numbers and accepts the two numbers.

The user then has the choice to:
1)Add the numbers
2)Subtract the numbers
3)Mutliply the numbers
4)Divide the numbers

Measures have been added using the while and if loop functions to prevent the
user from:
1)Entering numbers lower than 1 and higher than 100
2)Choosing a choice other than 1,2,3 and 4

To stop the program from closing abruptly at the end of the calculations, the
program prompts the user to press enter to exit the program.
'''

#First Number
while True:
    num1 = float(input('\nEnter the first number: '))
    if num1 <= 100 and num1 >= 1:
        break
    else:
        print ('You can only pick a number from 1 to 100')

        
#Second Number    
while True:
    num2 = float(input('\nEnter the second number: '))
    if num2 <= 100 and num2 >= 1:
        break
    else:
        print ('You can only pick a number from 1 to 100')


#Operation Prompt
while True:
    print ('\nWhat operation would you like to do with the numbers you have entered?')
    print ('1 for Addition')
    print ('2 for Subtraction')
    print ('3 for Mutliplication')
    print ('4 for Divison')
    choice = float(input('Enter the coressponding number for operation: '))
    if choice <= 4 and choice >= 1:
        break 
    else:
        print ('You can only pick from the four choices above')


#Addition               
if choice == 1:
    num3 = (num1 + num2)
    print ('\nThe sum of the two numbers is ' + str(num3))
    
#Subtraction
elif choice == 2:
    num3 = (num1 - num2)
    print ('\nThe difference of the two numbers is ' + str(num3))
    
#Multiplication
elif choice == 3:
    num3 = (num1 * num2)
    print ('\nThe multiplication of the two numbers is ' + str(num3))
    
#Division
elif choice == 4:
    num3 = (num1/num2)
    print ('\nThe quotient of the two numbers is ' + str(num3))


#Exit Program
leave = input('\nPress Enter to exit program')
if len(leave) > 0:
    exit
    



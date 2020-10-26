# Python program to demonstrate 
# Addition of elements in a Set 

# Creating a Set 
set1 = set() 
print("Intial blank Set: ") 
print(set1) 

# Adding element and tuple to the Set 
set1.add(8) 
set1.add(9) 
set1.add((6,7)) 
print("\nSet after Addition of Three elements: ") 
print(set1) 

# Adding elements to the Set 
# using Iterator 
for i in range(1, 6): 
	set1.add(i) 
print("\nSet after Addition of elements from 1-5: ") 
print(set1) 

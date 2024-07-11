# Question 1

Peter wants to send a box containing a painting to London. The Post Office sends parcels to London via GlobalMail or DHL.If GlobalMail is chosen, the cost is R108 per kg if the parcel goes to zone 1 to 3 in London, and R130 per kg if the parcel goes to zone 4 to 6. If DHL is chosen, the actual weight is compared to the volumetric weight, and whichever is the higher weight, is used in the calculation. The volumetric weight is calculated by the formula (length _ width _ height) / 5000, where length, width and height is the size of the box in cm. The cost per kg for DHL is R70.
Write a program that will calculate the price to be paid for sending a parcel to London. The program must use two overloaded functions, each named calcPostage. The user must be asked if he wants to use GlobalMail or DHL. Define a char variable and ask the user to input
„d‟ for DHL or „g‟ for GlobalMail. If he chooses GlobalMail, the zone must be requested. The program must validate that the zone is between 1 and 6. If he chooses DHL, the length, width and height of the box must be requested. The first function will receive two parameters, one of type double representing the weight of the parcel, and one of type int, representing the zone. The second function will receive four parameters of type double, representing the actual weight, and the length, width and height of the box in cms. The second function will first determine whether the actual weight or the volumetric weight is the highest, before calculating the cost. Both functions will return the cost in a variable of type double. The main function should then display the total cost. Define const variables where applicable.

# Question 2

Write a C++ program to validate if someone is allowed to vote or not. The person who is allowed to vote should be at least 18 years old. The program should use the assert function to validate that the year of birth is not equal to the current year and also that the year of birth entered is not greater than the current year. The program should instruct the user to enter the year of birth. Run your program twice, once with a year of birth that represents a person younger than 18 years; and the second time with a year of birth that represents a person older than 18 years or at least 18 years old. Submit the output for both runs together with your source code.

# Question 3

A restaurant has a special discount for families of at least 5 members. To get the discount, at least 4 members of the family must order the special steak dish on the menu, and the family must order at least 2 bottles of wine. The waiter serving the family must tell the families about the special discount. If the family order qualifies for the discount, the waiter gets an extra commission which is 3% of the total bill amount. Peter wants to know how much commission he earned for the evening.
Your task is to write a program that will read the file orders.dat and calculate the number of families that ordered the special, the extra commission earned by Peter, as well as the average spent per person (including all the people that he served for the evening).
Each line in the file contains the following data: the number of members in a family, the number of family members that ordered the special, the number of bottles of wine that the family ordered, and the total bill amount. Create the file orders.dat containing the orders of all the families that Peter served, as specified below. Declare variables of type int for the first three values and a variable of type float for the total bill amount.

5 2 2 670.60
6 4 2 890.80
2 2 0 220.00
10 8 1 1340.60
10 4 3 1430.70
4 0 0 460.30
5 3 1 700.00
7 5 2 1100.80
3 1 0 340.80

Using the input file above, your program should create the following results in the output file result.dat:

Displaying contents of result.dat :

Number of families that ordered the special: 3
Commission earned from the special meal: R102.67
Average spent per person for the evening: R137.59

Process returned 0 (0x0) execution time : 0.080 s
Press any key to continue.

# Question 4

Hector is in grade 3 and likes a girl in his class, Julia, very much. He has written a letter to her, but he needs you to help him to encode the letter, so that if someone in the class gets hold of it, they would not be able to understand it. Write a program that reads an input file with the letter character by character. Change the following characters:

t (or T) gets changed to 1Y
h (or H) gets changed to 1O
j (or J) gets changed to 1X
d (or D) gets changed to 1B
a (or A) gets changed to 1S
p (or P) gets changed to 1M
I (or I) gets changed to 1Q

The rest of the characters remain the same. Read the file character by character, and write the character (if it stays the same) to the output file, or write the changed version to the output file. Call your output file encode.txt.

Create an input file called letter.txt with Hector’s letter:

Dear Julia,
You are the most beautiful girl that I have ever seen. I was wondering if you would like to come and visit me. My mother will make us pancakes with ice cream. My dog, Bella, just had three beautiful puppies. Mom says I may only keep one of them. I would like you to help me choose one, because they are all so cute and adorable. And just because you are my special friend, you may also have one if you want. Your friend,
Hector.

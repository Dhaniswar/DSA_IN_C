#include<stdio.h>
#include<stdlib.h>



/*
Infix to Prefix conversion

#Infix Expression
<operand><operator><operand>
p + q

#Prefix Expression
<operator><oprand><operand>
 + pq

   a * b + c =>   *ab + c => +*abc


#Infix to prefix conversion
1. It is almost same as (converting infix to postfix) but there are some rules
a). At first you need to Reverase given Infex expression
b). if incoming operator has equal precendenc then check associativity
d). If Associativity L - R then just push incoming operator
e). If Associativity is R -L then
f). If incomming symbal is ')', then just push into the stack
g). If any operastors come after the sumabol ')' then simpley push into the stack
h). If incoming symbol is '(' then pop out all the operators from the stack until you found cloaing bracess.
i). If incoming operatoer has higher precedence then just push into the stack
j). In last you have to reverse the expression  


Note: after converting to infix to prefix we subtitude the vaule of variables and we start to skim from R - L (for Prefix)
for example=> 
a + b * c - d/e ^ f
where(a=2, b=3, c=4, d=16, e=2, f=3)

-+a*bc/d^ef (First converted the infix to Prefix without using stack)

-+2*34/16^23 (just instituting values)
-+2*34/16 8   (2^3)=> skim from R- L and find first operator and apply that operator in first 2 operand(right side of first 2 operands from operators)
-+2*34 2      (16/2)
-+2 12 2       (3*4)
-14 2         (2+12)
12            (14-2)

Answer => 12

Now same problem using stack, rules
1. Start skimming prefix expression from R - L
2. And if you found the operands just push that operands into the stack
3. If you found operator just pop top 2 operands from the stack and perform operation according to that operatoer on that pop operands and push thae result to the stack

// ALgorithm to evaluation of Prefix using stack 

step1: Scan prefix expression from right to left
step1: for each character in prefix expression
do
   if operand is there, push it onto stack
   else if operatoer is there, pop 2 elements
      op1 = top element
      op2 = next to top element
      result = op1 operator op2

    push result onto stack

  return stack[top]










*/
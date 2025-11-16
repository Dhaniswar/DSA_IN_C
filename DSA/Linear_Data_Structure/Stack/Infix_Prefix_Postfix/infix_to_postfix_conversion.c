#include<stdio.h>
#include<stdlib.h>

/*
#Infix to Postfix conversion Rules
1). Print Operands as they arrive

2). If stack is empty or contains a left parenthesis on top, push the incomming operator onto the stack.

3). If incoming symbol is '(', push it onto stack

4). If incoming symbol is ')', pop the stack & print the operatos untill left parenthesis is found.

5). If incoming symbol has higher precedence than the top of the stack, push it on the stack.

6). If incoming symbol has lower precedence than the top of the stack, pop & print the top. Then test the incoming operator against the new top of the stack.

7). If incoming operator has equal precedence with the top of the stack, use associativity rule.

8). At the end of the expression, pop & print all operators of stack.



=> Associativity L to R then pop & print the top of the stack & then push the incoming operator

=> R to L then push the incoming operator

 
let do some examples, 
Q1) A + B/C
  
Stack           Postfix Expression
                    ABC/+
                      



Q2) A - B/C * D + E

stack         Postfix Expression
                   ABC/D*-E+



Note: after converting to infix to prefix we subtitude the vaule of variables and we start to skim from L - R (for Potfix) 

for example=> 
a + b * c - d/e ^ f 
where(a=2, b=3, c=4, d=16, e=2, f=3)
a b c * + d e f ^ / - (First converted the infix to Ppstfix without using stack)
2 3 4 * + 16 2 3 ^ / - (just instituting values)
2 12 + 16 2 3 ^ / -  (4*3)=> skim from L- R and find first operator and apply that operator in first 2 operand(left side of first 2 operands from operators)
14 16 2 3 ^ / -       (2 + 12)
14 16 8 / -          (2^3)
14 2-                (16/8)
12                   (14-2)

Answer => 12

Now same problem using stack, rules
1. Start skimming prefix expression from L - R
2. And if you found the operands just push that operands into the stack
3. If you found operator just pop top 2 operands from the stack and perform operation according to that operatoer on that pop operands and push thae result to the stack
4. Remember when you pop operand then it acts as  first one is second and secon one is first operand

// ALgorithm to evaluation of Postfix Expression using stack 

Begin
     for each character in postfix expression
     do
       if operand is encontered, push it
         onto.stack
        else if operator is encountered
          pop 2 elements
          A -> top element
          b -> Next to top element

          result = B operator A
          push result onto stack

        return element of stack top
End


*/
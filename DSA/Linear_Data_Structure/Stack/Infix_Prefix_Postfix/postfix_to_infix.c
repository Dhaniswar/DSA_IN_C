/*
#Conversion of postfix to infix (using stack)
#Rules
1. Scan from L - R
2. If incoming character is operant then jush onto stack
3. If incoming charater is operator then just pop out that top 2 operands and keep that operator in betn those operand
4. And as it is postfrix to infix so, scond pop operand is acts as first and first pop operand act as 2nd (A operator A)
5. now cover the result with bracket (bracess ())
5. At end push that result in to stack then pop out or return the from the stack


Examples

ab + ef / *

at first => in the top of the stack (a + b)

at second => in the to pf the stack  (e/f)

at last  => ((a + b) * (e/f))




*/
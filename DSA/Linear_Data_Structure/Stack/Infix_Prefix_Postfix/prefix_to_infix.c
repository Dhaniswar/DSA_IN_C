/*
#Conversion of Prefix to infix (using stack)
#Rules
1. Scan from R - L
2. If incoming character is operant then jush onto stack
3. If incoming charater is operator then just pop out that top 2 operands and keep that operator in betn those operand
4. And as it is Prefix to infix so, here first pop out acts as first operant and second pop operand acts as second operand
5. now cover the result with bracket (bracess ())
5. At end push that result in to stack then pop out or return the from the stack


Examples

*+ ab / ef (R-L)

at first => in the top of the stack (e/f)

at second => in the to of the stack  (a + b)

at last  => ((a + b) * (e/f))




*/
/*
Binary Expression Tree from Postfix expression

eg, a * b/c + e/f * g + k - x * y (infix expression)

ab * c /e f /g * + k + x y * -  (It is very easy to contruct expression tree from post fix expression)

#Rules

1. At first start (postfix Expression) scanning from L - R
2. If incomming input is operand then, simply push onto stack (in actual a node would be created and push the pointer to that node onto stack)
3. If incoming input is operator then pop next top element from the stack
4. And put that operator in between those operands( Means those 2 operands became child for that operator => sub tree would be created)
5. That means you have cleated the sub-tree and push that sub tree into the stack (in actual you will push pointer to this sub-tree onto the stack)



*/
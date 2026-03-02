/*
1. Binary Expression Tree:t is specific types of binary tree which is use to represent the expression.

Binary Expression Tree is the tree in which each internal nodes crosspond to the operators and each leave nodes crosspond to the operands

2. Expression Tree is a representation of an expression in tree like data structure

3. Leaves => external nodes => operands (a,b,c,d,e,f ..)

4. Internal nodes => operators (+,-,/,*,^) all the opearoter are assigned in the internal nodes


#Drawing the Binary Tree Expression deirectly from Infix expression

rules:
at first find out the least precedence from the given infix  expression and that would be the root nodes
and split the node for lefr and right from that operator(root nodes)

a * b/c + e/f * g + k - x*y

                  /(-)\
                 /     \
               (+)     (x*y)
              /   \
          (+)     (k)
        /   \
    (/)      (*)
  /   \      /   \
(*)   (c)  (/) (g)
/   \      /   \
(a) (b)   (e)  (f)


Preorder = (Root Left Right) //(-++/*abc strik/efgk*xy) it will give you Prefix expression // were stric=*
Postorder = (Left Right Root) (ab*c/ef/g*+k+xy*- ) it will give you Postfix expression
Inorder =   (Left Root Right)

*/
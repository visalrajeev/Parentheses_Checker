# Parantheses_Checker

The following are some code to check if the given expression is balanced parentheses or not
<br>
<strong>Balanced parentheses:</strong> "[()]{}{[()()]()}" <br>
<strong>UnBalanced parentheses:</strong> "[(])"

### Algorithm
<ul>
<li> Declare a character stack S. </li>
<li> Now traverse the expression string exp. </li>
  
<ul>
<li> If the current character is a starting bracket <b>(</b> ‘(‘ or ‘{‘ or ‘[‘ ) then push it to stack. </li>
<li> If the current character is a closing bracket ( ‘)’ or ‘}’ or ‘]’ ) then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.</li>
 </ul>
  
<li> After complete traversal, if there is some starting bracket left in stack then “not balanced” </li>
</ul>

### The Codes are available in following lanugage:

<ol>
  <li> Python </li> 
  <li> C </li>
</ol>

#### Run the codes 

1. For python - `python parent_checker.py`
2. For C - Compile the file using `gcc parent_checker.c -o parent_checker` 
<br>       After compiling, execute the file using `parent_checker.exe`

#### Future additions:
Codes in other lanuage like C++, JAVA etc...

# Parenthesis_Checker

The following are some code to check if the given expression is balanced parenthesis or not
<br>
<strong>Balanced parenthesis:</strong> "[()]{}{[()()]()}" <br>
<strong>UnBalanced parenthesis:</strong> "[(])"

### Algorithm
<ul>
<li> Declare a character stack S. </li>
<li> Now traverse the expression string exp. </li>
  
<ul>
  <li> If the current character is a starting bracket <strong>(</strong> ‘(‘ or ‘{‘ or ‘[‘ <strong>)</strong>then push it to stack. </li>
<li> If the current character is a closing bracket <strong>(</strong> ‘)’ or ‘}’ or ‘]’ <strong>)</strong> then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.</li>
 </ul>
  
<li> After complete traversal, if there is some starting bracket left in stack then “not balanced” </li>
</ul>

### The Codes are available in following lanugage:

<ol>
  <li> Python </li> 
  <li> C </li>
  <li> JAVA </li>   
</ol>

#### Run the codes 

1. For Python - `python parent_checker.py`
2. For C - Compile the file using `gcc parent_checker.c` 
<br>       After that create an executable file using `gcc -o parent_checker parent_checker.c`
<br>       After creating executable file, execute the file using `parent_checker.exe`
3. For JAVA - Compile the file using `javac Parent_checker.java`
<br>          After that run the file using `java Parent_checker`

#### Future additions:
Codes in other lanuage like C++, Javascript etc...

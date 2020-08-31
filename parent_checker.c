#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct{
  char item[MAX];
  int top;
}Stack;

Stack s;

//Creating the stack
void initialize()
{
  s.top = -1;
}

//Checking if a stack is empty or not
int isEmpty()
{
  if(s.top==-1)
    return 1;
  return 0;
}

//Pushing the character into the stack
void push(char w)
{
  s.top++;
  s.item[s.top] = w;
}

//Deleting the top character from the stack
void pop()
{
  s.top--;
}

//Returning the top most character in the stack
int peek()
{
  return s.item[s.top];
}

//Will display the stack
/* Not required for this program, but could be used to see the stack.
void show()
{
  int i;
  for(i=0;i<=s.top;i++)
  {
    printf("%c\t",s.item[i]);
  }
}
*/

int main()
{
  initialize();

  //char word[100] = "[(])”"; == Unbalanced
  //char word[100] = "[()]{}{[()()]()}"; // == Balanced
  char word[100];
  printf("Enter the parantheses expression:"); //Enter your own expression
  scanf("%s",word);
  int len = strlen(word);
  int i, flag = 1;

  for(i=0;i<len;i++)
  {
    if(word[i] == '}' || word[i] == ']' || word[i] == ')')
    {
      if(isEmpty())
      {
        flag = 0;
      }
      else
      {
        char n = peek();
        if(n == '(' && word[i] == ')')
        {
          pop();
        }
        else if(n == '[' && word[i] == ']')
        {
          pop();
        }
        else if(n == '{' && word[i] == '}')
        {
          pop();
        }
      }
    }
    else
    {
      push(word[i]);
    }
  } 

  if(isEmpty() && flag==1)
    printf("\nBalanced");

  else 
    printf("\nUnbalanced");

  return 0;
}

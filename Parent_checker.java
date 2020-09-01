import java.util.*;

class Stack
{
  char data[] = new char[100];
  int top;

  public void initialize()
  {
    top = -1;
  }
  public boolean isEmpty()
  {
    if(top == -1)
    {
      return true;
    }
    return false;
  }
  void push(char c)
  {
    top++;
    data[top] = c;
  }
  public void pop()
  {
    top--;
  }
  public char peek()
  {
    char c = data[top];
    return c;
  } 
  public void show()
  {
    for(int i=0;i<=top;i++)
    {
      System.out.println(data[i]);
    }
  }

}

public class Parent_checker
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    Stack s = new Stack();
    s.initialize();

    //String w = "[(])";
    System.out.println("Enter the expression:");
    String w = sc.nextLine();
    int flag = 1;

    for(int i=0;i<w.length();i++)
    {
      char c = w.charAt(i);
      if(c==')' || c=='}' || c==']')
      {
        if(s.isEmpty())
        {
          flag = 0;
          break;
        }
        else
        {
          if(c==')' && s.peek()=='(')
          {
            s.pop();
          }
          else if(c=='}' && s.peek()=='{')
          {
            s.pop();
          }
          else if(c==']' && s.peek()=='[')
          {
            s.pop();
          }
        }
      }
      else
      {
        s.push(c);
      }      
    }

    if(s.isEmpty() == true && flag == 1)
    {
      System.out.println("Balanced");
    }
    else
    {
      System.out.println("UnBalanced");
    }
  }
}

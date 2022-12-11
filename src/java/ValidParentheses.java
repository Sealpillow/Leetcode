package leetcode.Easy;
import java.util.Stack;
public class ValidParentheses
{
    public static boolean isValid(String s)
    {
        char[] set = s.toCharArray();
        char top;
        Stack<Character> stack = new Stack<>();
        for (char c : set)
        {
            if (c == '(' || c == '{' || c == '[')
                stack.add(c);
            else {
                if (stack.isEmpty())
                    return false;
                top = stack.peek();
                if ((top == '(' && c != ')') || (top == '{' && c != '}') || (top == '[' && c != ']'))
                    return false;
                else
                    stack.pop();
            }
        }
        return stack.isEmpty();
    }
    public static void main(String[] args)
    {
        String s = "(]";
        System.out.println(isValid(s));
    }
}

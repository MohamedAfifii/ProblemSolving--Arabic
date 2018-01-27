/**
 * @file <Codility-Nesting-Stack.cpp>
 * @author <Muhammad Al-Halaby>
 * @date <24-1-2018>
 *
 */
 
#include<stack>

int solution(string &S){
    //Only opening brackets will be stored in the stack.
    stack<char> obrackets;
    //Counter to iterate through the string.
    int i = 0;
    //Let's assume they're balanced (Every closing bracket has an opening bracket before it).
    bool balanced = true;
    //iterate through the string till the null character
        while(S[i] != '\0'){
        //Checking if It's an opening bracket
        if(S[i] == '(')
            //Push opening brackets into the stack.
           obrackets.push('(');

        /*
            if it's not an opening bracket
            then it must be a closing bracket
        */
        else
            /*
                The first closing bracket is for the last opening bracket
                so we check if there was any opening brackets
            */
            if(!obrackets.empty())
                //we found the opening bracket let's pop it.
                obrackets.pop();
            else{
                /*
                    we didn't find an opening bracket for the closing bracket
                    so the string can't be balanced, no need to continue.
                */
                balanced = false;
                break;
            }
        //incrementing the counter to check the next element in the string.
        i++;
    }
    /*
        if the stack is empty this & balanced = true
        This means every closing bracket had an opening bracket right before it.
        so Yeah they are balanced.
        let's return 1 ;)
    */
    if(balanced && obrackets.empty())
        return true;
    /*
        Else:
            -balanced = false (closing brackets with no opening brackets).
        OR  -The stack is not empty (opening brackets with no closing brackets).
        OR  -Both.
        let's return 0 ;)
    */
    return false;
}
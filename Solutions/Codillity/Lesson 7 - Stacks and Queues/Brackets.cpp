/**
 * @file <Codility-Brackets-Stack.cpp>
 * @author <Muhammad Al-Halaby>
 * @date <24-1-2018>
 *
 */
 
#include<stack>
#include<cstring>

int solution(string &S){
    //These arrays just to save us some effort and time =D
    char open[] = "([{";
    char close[] = ")]}";
    //Let's assume they're balanced (Every closing bracket has an opening bracket from the same type before it).
    bool balanced = true;
    //Only opening brackets will be stored in the stack.
    stack<char> obrackets;
    //iterate through the string
    for(int i = 0;i<S.size();i++){
        //Checking if It's an opening bracket (strchr functions searches the string for the character and returns a pointer to it or null pointer if not found)
        if(strchr(open,S[i]) != nullptr) //you can write if conditions as you wish.
            //Push opening brackets into the stack.
            obrackets.push(S[i]);

        /*
            if it's not an opening bracket
            it must be a closing bracket
        */
        else{
            /*
                The first closing bracket is for the last opening bracket
                so we check if there was any opening brackets
            */
            if(!obrackets.empty()){
                /*
                    we found an opening bracket.
                    Let's check the type of the closing bracket:
                    Calculating the index of the closing bracket from the difference between the two pointers.
                */
                int indx = strchr(close,S[i]) - close;
                //Checking if the Opening bracket has the same type of the Closing bracket.
                if(obrackets.top() == open[indx])
                    //same type, let's pop it.
                    obrackets.pop();
                else
                    //different types, can't be balanced.
                    balanced = false;
            }
            else
                //stack is empty, no opening bracket for the closing bracket, can't be balanced.
                balanced = false;
        }
        //if not balanced, don't continue.
        if(!balanced)
            break;
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

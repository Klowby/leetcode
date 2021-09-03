//really messy but tried to use data structure..

int push(char *stack, int top, char elem){
    stack[++top] = elem;
    return top;
}

int pop(char *stack, int top){
    top--;
    return top;
}

int check(char a, char b){
    if (a == '(' && b == ')')
        return 1;
    if (a == '[' && b == ']')
        return 1;
    if (a == '{' && b == '}')
        return 1;
    return 0;
}

bool isValid(char * s){
    char stack[strlen(s)];
    int top, i;
    top = -1;
    if (strlen(s) % 2 != 0)
        return false;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top = push(stack, top, s[i]);
            if (top == strlen(s) - 1) //case "(("
                return false;
        }
        if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (top == -1)
                return false;
            if (check(stack[top], s[i]))
               top = pop(stack, top);
            else
                return false;
        }
    }
    if (top != -1) //case "[[[]"
        return false;
    return true;
}
int romanToInt(char * s){
    int i;
    int result = 0;
    for(i = 0; i < strlen(s); i++) {
        switch(s[i]) {
            case 'I':
                if(s[i + 1] == 'V') {result = result + 4; i++;}
                else if(s[i + 1] == 'X') {result = result + 9; i++;}
                else {result = result + 1;} break;
            case 'V':
                result = result + 5; break;
            case 'X':
                if(s[i + 1] == 'L') {result = result + 40; i++;}
                else if(s[i + 1] == 'C') {result = result + 90; i++;}
                else {result = result + 10;} break;
            case 'L':
                result = result + 50; break;
            case 'C':
                if(s[i + 1] == 'D') {result = result + 400; i++;}
                else if(s[i + 1] == 'M') {result = result + 900; i++;}
                else {result = result + 100;} break;
            case 'D':
                result = result + 500; break;
            case 'M':
                result = result + 1000; break;
            default: break;
        }
    }
    return result;
}
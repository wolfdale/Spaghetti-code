//hashing

bool isAnagram(char* s, char* t) {
    
    //create a hash
    int alpha[26]={0};
    int beta[26] = {0};
    int i=0;
    
    while(*(s+i) != '\0')
    {
        alpha[*(s+i) - 'a']++;
        i++;
    }
    i=0;
    while(*(t+i) != '\0')
    {
        
        beta[*(t+i)-'a']++;
        i++;
    }
    
    for(i=0;i<=25;i++)
    {
        
        if(alpha[i] != beta[i])
        {
            return false;
        }
    }
    return true;
    
}

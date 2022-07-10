class Solution {
public:
    int myAtoi(string s) {
        int len=s.size(),i=0,sign=1;
        long int num=0;//taking long int is imp because we have to multiply by 10 at later stage.
        if(len==0)
        {
            return 0;
        }
        while(i<len && s[i]==' ')
        {
            i++;
        }
        if(i==len)
        {
            return 0;
        }
        if(s[i]=='-')
        {
            sign=0;i++;
        }
        else if(s[i]=='+')
        {
            sign=1;i++;
        }
        while(s[i]>='0' && s[i]<='9')
        {
            num=(num*10);
            num=num +(s[i]-'0');
            if(num<=INT_MIN || num>=INT_MAX)//writing this condition is very imp.
            {
                break;
            }
            i++;
        }
        if(sign==0)
        {
            num=num*(-1);
        }
        if(num<=INT_MIN)
        {
            return INT_MIN;
        }
        if(num>=INT_MAX)
        {
            return INT_MAX;
        }
        return (int)num;//type conversion to int can be done (long int to int) but without it is also accepted.   
    }
};
